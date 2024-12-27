Hotel Management System
A simple hotel management system built in C++ to manage the booking and checkout process for hotel rooms. This system allows users to view available rooms, book rooms, and checkout rooms.

Features
View available rooms.
Book a room (mark as occupied).
Checkout a room (mark as available).
Simple console-based interface.
Requirements
C++11 (or later) compatible compiler such as g++.
Basic understanding of C++ programming concepts such as classes, vectors, and loops.
Setup
Clone the repository (or download the source code).

You can clone the repository using the following command (if hosted on GitHub):

bash
Copy code
git clone https://github.com/yourusername/hotel-management-system.git
Compile the Code.

Use the following command to compile the C++ code:

bash
Copy code
g++ hotel_management_system.cpp -o hotel_management_system
Run the Program.

After compilation, run the program using the following command:

bash
Copy code
./hotel_management_system
How to Use
When the program starts, you will see the main menu with the following options:

markdown
Copy code
--- Hotel Management System ---
1. Show available rooms
2. Book a room
3. Checkout a room
4. Exit
1. Show available rooms
Choose option 1 to display all rooms that are not currently booked.
2. Book a room
Choose option 2 and enter the room number you wish to book.
The system will check if the room is available, and if it is, it will mark it as booked.
3. Checkout a room
Choose option 3 and enter the room number you wish to checkout.
If the room is currently occupied, the system will mark it as available.
4. Exit
Choose option 4 to exit the system.
Example Interaction
plaintext
Copy code
--- Hotel Management System ---
1. Show available rooms
2. Book a room
3. Checkout a room
4. Exit
Enter your choice: 1

Available Rooms:
Room Number: 1
Price: $100
Available

Room Number: 2
Price: $100
Available

Enter your choice: 2
Enter room number to book: 1
Room 1 has been booked.

Enter your choice: 1

Available Rooms:
Room Number: 2
Price: $100
Available

Enter your choice: 3
Enter room number to checkout: 1
Room 1 has been checked out.

Enter your choice: 4
Exiting the system. Goodbye!
Code Structure
Room Class
The Room class represents a hotel room with the following attributes:

roomNumber: The number of the room.
isOccupied: A flag indicating whether the room is booked or not.
price: The price of the room.
Hotel Class
The Hotel class manages a collection of rooms and provides the following methods:

showRooms(): Displays all available rooms.
bookRoom(int roomNumber): Books a room by its number.
checkoutRoom(int roomNumber): Checks out a room by its number.
Main Function
The main function handles user interaction through a menu system, accepting inputs and calling appropriate methods from the Hotel class.

For any questions or inquires contact shafay11august@gmail.com
