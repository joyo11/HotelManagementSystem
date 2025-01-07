# Hotel Management System

A simple Hotel Management System built in C++ to manage the booking and checkout process for hotel rooms. This system also demonstrates basic stack operations for managing room numbers during booking and checkout. It includes features for viewing available rooms, booking rooms, and checking out rooms, all through a simple console-based interface.

---

## Features
- **View Available Rooms**: Display all unoccupied rooms.
- **Book a Room**: Mark a specific room as occupied.
- **Checkout a Room**: Mark a specific room as available.
- **Room Stack Operations**: Use a stack to manage and log room numbers for the most recent booking or checkout.
- **Simple Console Interface**: User-friendly interaction through text-based menus.

---

## Requirements
- **C++ Compiler**: C++11 (or later) compatible compiler such as `g++`.
- **Basic C++ Knowledge**: Understanding of concepts like classes, vectors, loops, and stacks.

---

## Setup

### Clone the Repository
Clone the repository to your local machine (if hosted on GitHub):
```bash
git clone https://github.com/joyo11/HotelManagementSystem
```

### Compile the Code
Compile the C++ source code using the following command:
```bash
g++ hotel_management_system.cpp -o hotel_management_system
```

### Run the Program
After successful compilation, run the program with:
```bash
./hotel_management_system
```

---

## How to Use

When the program starts, the main menu is displayed:

```plaintext
--- Hotel Management System ---
1. Show available rooms
2. Book a room
3. Checkout a room
4. Show recent room actions (Stack)
5. Exit
```

### Options:

1. **Show Available Rooms**
   - Choose this option to list all rooms that are currently unoccupied.

2. **Book a Room**
   - Enter the room number to book.
   - The system checks availability and marks the room as occupied if it is free.
   - The room number is pushed onto a stack to log the action.

3. **Checkout a Room**
   - Enter the room number to check out.
   - If the room is occupied, it is marked as available.
   - The room number is pushed onto the stack to log the action.

4. **Show Recent Room Actions (Stack)**
   - Display the room numbers for the most recent bookings and checkouts in reverse order of occurrence.

5. **Exit**
   - Exit the program.

---

## Example Interaction

```plaintext
--- Hotel Management System ---
1. Show available rooms
2. Book a room
3. Checkout a room
4. Show recent room actions (Stack)
5. Exit
Enter your choice: 1

Available Rooms:
Room Number: 1, Price: $100
Room Number: 2, Price: $150

Enter your choice: 2
Enter room number to book: 1
Room 1 has been booked.

Enter your choice: 1

Available Rooms:
Room Number: 2, Price: $150

Enter your choice: 3
Enter room number to checkout: 1
Room 1 has been checked out.

Enter your choice: 4
Recent Room Actions (Stack):
- Room 1 checked out
- Room 1 booked

Enter your choice: 5
Exiting the system. Goodbye!
```

---

## Code Structure

### Room Class
Represents a hotel room with:
- **Attributes**:
  - `roomNumber`: The room number.
  - `isOccupied`: Indicates if the room is booked.
  - `price`: The price of the room.
- **Methods**:
  - Constructor to initialize room details.
  - Getters and setters for room attributes.

### Hotel Class
Manages a collection of rooms and stack operations with:
- **Attributes**:
  - `rooms`: A vector storing all room objects.
  - `actionStack`: A stack to log room actions.
- **Methods**:
  - `showRooms()`: Displays all unoccupied rooms.
  - `bookRoom(int roomNumber)`: Books a specific room and logs the action.
  - `checkoutRoom(int roomNumber)`: Checks out a specific room and logs the action.
  - `showRecentActions()`: Displays actions from the stack.

### Main Function
Handles the menu system:
- Displays options to the user.
- Accepts inputs and calls appropriate `Hotel` methods.

---

## Contact
For any questions or inquiries, feel free to reach out:
- **Email**: [shafay11august@gmail.com](mailto:shafay11august@gmail.com)

---

### Note
This program is designed for educational purposes and demonstrates basic C++ programming concepts. Future enhancements could include:
- Persistent storage for room details.
- Graphical user interface.
- Online booking integration.
