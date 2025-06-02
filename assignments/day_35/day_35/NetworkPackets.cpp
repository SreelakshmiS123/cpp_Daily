#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <functional>
using namespace std;

enum LogLevel { INFO, DEBUG, WARNING, ERROR };

void log(LogLevel level, const string& message) {
    const char* levelStr[] = { "INFO", "DEBUG", "WARNING", "ERROR" };
    cout << "[" << levelStr[level] << "] " << message << std::endl;
}

class Packet {
public:
    int id;
    string protocol;
    int size;

    Packet(int id, const string& protocol, int size)
        : id(id), protocol(protocol), size(size) {}
};

class PacketAnalyzer {
public:
    static void filterByProtocol(const vector<Packet>& packets, const string& protocol) {
        for (const auto& packet : packets) {
            if (packet.protocol == protocol) {
                log(DEBUG, "Packet " +to_string(packet.id) + " | " + packet.protocol + " | " + to_string(packet.size) + " bytes");
            }
        }
    }

    static void detectLargePackets(const vector<Packet>& packets) {
        for (const auto& packet : packets) {
            if (packet.size > 1000) {
                log(WARNING, "Packet " +to_string(packet.id) + " | " + packet.protocol + " | " +to_string(packet.size) + " bytes");
            }
        }
    }
};

class Logger {
    ofstream outFile;
public:
    Logger(const string & filename) {
        outFile.open(filename,ios::out);
        if (!outFile.is_open()) {
            log(ERROR, "Failed to open log file: " + filename);
            exit(1);
        }
    }

    void writeLog(const string& message) {
        outFile << message << endl;
    }
};

class PacketQueue {
   vector<Packet> packets;
public:
    void loadPackets(const string& filename) {
       ifstream file(filename);
        if (!file.is_open()) {
            log(ERROR, "Failed to open packet file: " + filename);
            exit(1);
        }

        int id = 1;
       string protocol;
        int size;
        while (file >> protocol >> size) {
            packets.emplace_back(id++, protocol, size);
        }
    }

    const vector<Packet>& getPackets() const {
        return packets;
    }
};

int main() {
    PacketQueue packetQueue;
    Logger logger("netmon_log.txt");

    packetQueue.loadPackets("packets.txt");
    const auto& packets = packetQueue.getPackets();

    int choice;
    do {
      
       cout << "1. Load packet data\n";
        cout << "2. Filter by protocol\n";
        cout << "3. Check for large packets\n";
        cout << "4. Export logs\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            log(INFO, "Loaded " + to_string(packets.size()) + " packets.");
            break;
        case 2: {
           string protocol;
           cout << "Enter protocol (TCP/UDP/ICMP): ";
           cin >> protocol;
            PacketAnalyzer::filterByProtocol(packets, protocol);
            break;
        }
        case 3:
            PacketAnalyzer::detectLargePackets(packets);
            break;
        case 4:
            logger.writeLog("Logs saved.");
            log(INFO, "Logs saved to netmon_log.txt.");
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
