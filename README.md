
A C++ Command-Line Interface (CLI) Bank Management System that handles client records, financial transactions (Deposit/Withdraw), and persistent data storage using file handling.

 🏦 Bank Management System (CLI)

A robust and efficient Bank Management System built with C++. This application simulates core banking operations, providing a complete solution for managing client records and financial transactions through a clean Command-Line Interface (CLI).



 🌟 Key Features

👤 Client Management
- Add New Clients: Register clients with unique account numbers, PINs, and personal details.
- Update/Delete Records: Easily modify client information or remove accounts with built-in safety confirmations.
- Search & Find: Quickly locate client profiles using their account numbers.
- View All Clients: Display a formatted list of all registered clients in a tabular view.

 💸 Transaction System
- Deposit: Increase account balances securely.
- Withdraw: Perform withdrawals with automated balance validation to prevent overdrawing.
- Total Balances: View a summary of the total liquidity across all bank accounts.
💾 Data Persistence
- File-Based Storage:** All data is saved in `Clients.txt` using a custom delimiter (`#//#`), ensuring data is preserved even after the program closes.



🛠 Technical Stack

- Language: C++ (Standard 11/14/17)
- Data Architecture: - `struct` for record modeling.
  - `vector` for dynamic memory management of records.
  - `enum` for clean menu navigation logic.
- I/O Operations: - `fstream` for persistent file handling.
  - `iomanip` for professional console table formatting.
- String Manipulation: Custom string splitting and parsing logic for data conversion.



 📋 How It Works

The system follows a record-to-line conversion logic to bridge the gap between memory and storage:

1.  Record (Struct): Data is processed as objects in memory.
2.  Parsing: The system splits data lines using a delimiter to reconstruct objects.
3.  Persistence: Updated vectors are rewritten to the flat-file database upon every change.



   git clone [https://github.com/YourUsername/Bank-Management-System-CPP.git](https://github.com/YourUsername/Bank-Management-System-CPP.git)
