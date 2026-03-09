# C++ Programming Portfolio

A collection of C++ applications ranging from basic utility tools to game logic and algorithmic implementations. This repository demonstrates core programming concepts including arrays, functions, conditional logic, and randomized algorithms.

---

## Project Categories

### 1. Games
* **Tic-Tac-Toe (Smart AI)**: A complete game featuring an AI that uses a "Sum-Difference" mathematical approach to identify winning moves and block player threats.
* **Rock Paper Scissors**: A classic game implementing randomized computer choices and a replay system.
* **Number Guessing Game**: A terminal-based game where the user must guess a randomly generated number within a specified range.

### 2. Algorithms
* **Credit Card Validator**: An implementation of the **Luhn Algorithm** used to validate credit card numbers through digit reversal, doubling alternate digits, and modulo 10 checksums.

### 3. Financial & Utility Tools
* **Banking Practice Program**: A simulation of a bank teller system with functionalities for balance inquiry, deposits, and withdrawals, including basic input validation.
* **Temperature Converter**: A tool to convert values between Celsius and Fahrenheit using standard conversion formulas.
* **Random Event Generator**: A program that simulates a prize drawing using a switch-case structure and randomized integers.

### 4. Mathematical Fundamentals
* **Calculator**: A basic arithmetic tool for addition, subtraction, multiplication, and division.
* **Hypotenuse Calculator**: A geometry utility that uses the Pythagorean theorem ($a^2 + b^2 = c^2$) to calculate the third side of a right-angled triangle.

---

## Technical Highlights

### Tic-Tac-Toe AI Logic
The AI in the Tic-Tac-Toe project follows an **Offense > Defense > Random** priority system:



1.  **Offense**: Scans for any row, column, or diagonal where it has two pieces and an empty spot to win the game.
2.  **Defense**: Scans for player threats where the player has two pieces in a line and blocks the third spot.
3.  **Sum-Difference Math**: To identify the target move, the code calculates the sum of the indices in a winning line (e.g., $0+1+2=3$) and subtracts the occupied indices to find the exact remaining coordinate.
#### Technical Highlights (v2.0) -- TIC-TAC-TOE
* **Strategic AI**: Now prioritizes the center square and corners to secure a stronger board position.
* **Randomized Starts**: Implemented a coin-flip mechanic to decide the starting player.
* **Advanced Board Scanning**: Replaced move counters with a full-board state scanner (`chk` function) for more accurate tie detection.

### Credit Card Validation (Luhn Algorithm)
The validator implements the following steps to verify card authenticity:
1.  Reverses the credit card number string.
2.  Doubles every second digit from the right.
3.  If doubling results in a number greater than 9, subtracts 9 from the result.
4.  Sums all digits and checks if the total is divisible by 10.

---

## How to Run
To compile and run any of these projects, use a C++ compiler such as `g++`:

1. Open your terminal.
2. Navigate to the folder containing the file.
3. Compile the code:
   ```bash
   g++ FileName.cpp -o ProgramName
   ```
4. Execute the file:
5. ```bash
   ./ProgramName
   ```
