Rock-Paper-Scissors-CPP
A classic command-line implementation of the Rock-Paper-Scissors game written in C++. This project demonstrates fundamental C++ concepts,
including data structures, enumerations, and modular functions.

How to Play:

1-The game follows the classic rules:

2-Rock beats Scissors

3-Scissors beats Paper

4-Paper beats Rock

The player is prompted to choose between [1] Stone, [2] Paper, or [3] Scissors. 
The computer will make a random choice,and a winner for each round is declared.
The final game winner is determined after a set number of rounds.

Features :
Player vs. Computer: Play interactively against a randomized computer opponent.

Structured Data: Uses structs (stRoundInfo, stGameResults) to manage game data clearly.

Readable Code: Uses enums (enGameChoice, enWinner) to make the code logic easy to understand and maintain.

Modular Design: The program is split into small, single-purpose functions (e.g., WhoWonTheRound, ReadPlayer1Choice, PrintRoundResults).

Technologies Used
Language: C++

Core Concepts: Functions, Structs, Enums, Input/Output (iostream), Random Number Generation (cstdlib, ctime).
