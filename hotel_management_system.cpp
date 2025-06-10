#include <iostream>
#include <string>
#include <vector>


using namespace std;

// Class for a Room
class Room {
public:
    int roomNumber;
    bool isOccupied;
    double price;

    Room(int number, double roomPrice) : roomNumber(number), price(roomPrice), isOccupied(false) {}

    void displayRoom() {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Price: $" << price << endl;
        cout << (isOccupied ? "Occupied" : "Available") << endl;
    }
};

// Class for Hotel Management
class Hotel {
public:
    vector<Room> rooms;

    Hotel(int numRooms) {
        for (int i = 1; i <= numRooms; ++i) {
            rooms.push_back(Room(i, 100.0));  // Price per room is $100
        }
    }

    void showRooms() {
        cout << "Available Rooms:" << endl;
        for (int i = 0; i < rooms.size(); ++i) {
            if (!rooms[i].isOccupied) {
                rooms[i].displayRoom();
                cout << endl;
            }
        }
    }

    void bookRoom(int roomNumber) {
        for (int i = 0; i < rooms.size(); ++i) {
            if (rooms[i].roomNumber == roomNumber && !rooms[i].isOccupied) {
                rooms[i].isOccupied = true;
                cout << "Room " << roomNumber << " has been booked." << endl;
                return;
            }
        }
        cout << "Room not available or doesn't exist." << endl;
    }

    void checkoutRoom(int roomNumber) {
        for (int i = 0; i < rooms.size(); ++i) {
            if (rooms[i].roomNumber == roomNumber && rooms[i].isOccupied) {
                rooms[i].isOccupied = false;
                cout << "Room " << roomNumber << " has been checked out." << endl;
                return;
            }
        }
        cout << "Room not found or not occupied." << endl;
    }
};

int main() {
    Hotel myHotel(5); // Hotel with 5 rooms

    int choice, roomNumber;

    while (true) {
        cout << "\n--- Hotel Management System ---" << endl;
        cout << "1. Show available rooms" << endl;
        cout << "2. Book a room" << endl;
        cout << "3. Checkout a room" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myHotel.showRooms();
                break;
            case 2:
                cout << "Enter room number to book: ";
                cin >> roomNumber;
                myHotel.bookRoom(roomNumber);
                break;
            case 3:
                cout << "Enter room number to checkout: ";
                cin >> roomNumber;
                myHotel.checkoutRoom(roomNumber);
                break;
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
