# Digital Voting System-c by ayaan9618

## Overview

The Digital Voting System is a simple command-line application implemented in C that allows users to cast votes in an election. The system uses the `cs50.h` library, which provides functions for handling user input and other common operations. This application is designed to demonstrate basic concepts of voting systems and is suitable for educational purposes.

## Features


- **Cast Votes**: Allow voters to cast their votes for candidates.
- **View Results**: Display the results of the election.

## Prerequisites

To build and run this program, you need:

- A C compiler that supports the C standard (e.g., Clang).
- The `cs50.h` library.

## Installation

### 1. Install Clang

If you don't have Clang installed, you can install it via your package manager. For example, on Ubuntu, use:

```bash
sudo apt-get update
sudo apt-get install clang
```

### 2. Install `cs50.h` Library

The `cs50.h` library is part of the CS50 course from Harvard. You can install it using the following command:

```bash
sudo apt-get install libcs50-dev
```

### 3. Clone the Repository

Clone the repository containing the Digital Voting System source code:

```bash
git clone https://github.com/yourusername/digital-voting-system.git
cd digital-voting-system
```

## Building the Application

To compile the Digital Voting System, use Clang:

```bash
clang -o voting_system voting_system.c -lcs50
```

This command compiles `voting_system.c` into an executable named `voting_system`, linking it with the `cs50` library.

## Usage

1. **Run the Program**

   ```bash
   ./voting_system
   ```

2. **Follow the Prompts**

   - Enter the number of candidates.
   - Input the names of the candidates.
   - Cast votes for the candidates by entering their names.
   - View the results of the election.

## Example

Here's a basic example of how to use the application:

```bash
./voting_system
```

You will be prompted to enter the number of candidates, their names, and then cast your votes. Finally, you can view the results.


## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For any questions or feedback, please contact iyandevop@outlook.com

---

Thank you for using the Digital Voting System!

**Disclaimer:** This project is intended for educational purposes only and does not represent a secure or production-ready voting system.
 

