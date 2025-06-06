#include <iostream>
#include <sstream>
#include <map>
#include <unordered_map>
#include <deque>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// --- File metadata structure ---
struct FileMeta {
    string fileName;
    string ownerUser;
};

// --- FileTrackerFS class ---
class FileTrackerFS {
private:
    int timestamp = 0;

    map<int, FileMeta> files; // fileID -> file metadata
    unordered_map<int, int> accessFreq; // fileID -> access frequency
    unordered_map<int, int> lastAccess; // fileID -> last accessed timestamp
    unordered_map<string, set<int>> userAccess; // user -> fileIDs accessed
    unordered_map<int, deque<pair<string, string>>> accessHistory; // fileID -> list of (user, accessType)
    vector<int> deletedFiles; // log of deleted files

public:

    void addFile(int fileID, const string& fileName, const string& ownerUser) {
        if (files.count(fileID)) {
            cout << "Error: File ID " << fileID << " already exists.\n";
            return;
        }
        files[fileID] = { fileName, ownerUser };
        cout << "File added: ID = " << fileID << ", Name = " << fileName << ", Owner = " << ownerUser << "\n";
    }

    void accessFile(int fileID, const string& accessType, const string& userName) {
        if (!files.count(fileID)) {
            cout << "Error: File ID " << fileID << " not found.\n";
            return;
        }

        timestamp++;
        accessFreq[fileID]++;
        lastAccess[fileID] = timestamp;
        accessHistory[fileID].emplace_back(userName, accessType);
        userAccess[userName].insert(fileID);

        cout << "File " << fileID << " accessed by " << userName << " [" << accessType << "] at timestamp " << timestamp << "\n";
    }

    void deleteFile(int fileID) {
        if (!files.count(fileID)) {
            cout << "Error: File ID " << fileID << " not found.\n";
            return;
        }

        files.erase(fileID);
        accessFreq.erase(fileID);
        lastAccess.erase(fileID);
        accessHistory.erase(fileID);

        for (auto& [user, fileSet] : userAccess) {
            fileSet.erase(fileID);
        }

        deletedFiles.push_back(fileID);
        cout << "File " << fileID << " deleted successfully.\n";
    }

    void listAllFiles() {
        cout << "[All Files - Grouped by Owner, Sorted by Name]\n";
        map<string, vector<pair<string, int>>> ownerFiles;

        for (auto& [fileID, meta] : files) {
            ownerFiles[meta.ownerUser].emplace_back(meta.fileName, fileID);
        }

        for (auto& [owner, fileList] : ownerFiles) {
            cout << "Owner: " << owner << "\n";
            sort(fileList.begin(), fileList.end());
            for (auto& [fileName, fileID] : fileList) {
                cout << "  ID: " << fileID << " | Name: " << fileName << "\n";
            }
        }
    }

    void listRecentFiles() {
        cout << "[Recently Accessed Files]\n";
        vector<pair<int, int>> recentList;

        for (auto& [fileID, ts] : lastAccess) {
            if (files.count(fileID)) {
                recentList.emplace_back(ts, fileID);
            }
        }

        sort(recentList.rbegin(), recentList.rend());

        for (auto& [ts, fileID] : recentList) {
            cout << "ID: " << fileID
                << " | Name: " << files[fileID].fileName
                << " | Last Accessed: " << ts << "\n";
        }
    }

    void listAccessFrequency() {
        cout << "[Access Frequency]\n";
        vector<pair<int, int>> freqList;

        for (auto& [fileID, freq] : accessFreq) {
            if (files.count(fileID)) {
                freqList.emplace_back(freq, fileID);
            }
        }

        sort(freqList.rbegin(), freqList.rend());

        for (auto& [freq, fileID] : freqList) {
            cout << "File ID: " << fileID
                << " | Access Count: " << freq
                << " | Name: " << files[fileID].fileName << "\n";
        }
    }

    void listFilesByUser(const string& user) {
        cout << "[Files Accessed by User: " << user << "]\n";

        if (!userAccess.count(user)) {
            cout << "No records for user: " << user << "\n";
            return;
        }

        for (int fileID : userAccess[user]) {
            if (!files.count(fileID)) continue;

            cout << "ID: " << fileID
                << " | Name: " << files[fileID].fileName
                << " | Access Types:";

            for (auto& [u, type] : accessHistory[fileID]) {
                if (u == user)
                    cout << " " << type;
            }

            cout << "\n";
        }
    }
};
