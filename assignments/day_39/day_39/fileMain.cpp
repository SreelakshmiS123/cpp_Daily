int main() {
    FileTrackerFS fs;
    string line;

    cout << "Enter commands (type EXIT to quit):\n";

    while (getline(cin, line)) {
        if (line.empty()) continue;

        stringstream ss(line);
        string command;
        ss >> command;

        if (command == "EXIT") {
            break;
        }
        else if (command == "ADD") {
            int fileID;
            string fileName, owner;
            ss >> fileID >> fileName >> owner;
            fs.addFile(fileID, fileName, owner);
        }
        else if (command == "ACCESS") {
            int fileID;
            string type, user;
            ss >> fileID >> type >> user;
            fs.accessFile(fileID, type, user);
        }
        else if (command == "DELETE") {
            int fileID;
            ss >> fileID;
            fs.deleteFile(fileID);
        }
        else if (command == "LIST_ALL") {
            fs.listAllFiles();
        }
        else if (command == "LIST_RECENT") {
            fs.listRecentFiles();
        }
        else if (command == "LIST_FREQ") {
            fs.listAccessFrequency();
        }
        else if (command == "LIST_BY_USER") {
            string user;
            ss >> user;
            fs.listFilesByUser(user);
        }
        else {
            cout << "Invalid command.\n";
        }
    }

    return 0;
}
