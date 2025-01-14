# 🎮 Hangman Game in C

![Language](https://img.shields.io/badge/language-C-blue)
![License](https://img.shields.io/badge/license-MIT-green)
![Version](https://img.shields.io/badge/version-1.0.0-red)

A classic command-line implementation of the Hangman game written in C. Test your word-guessing skills while having fun!

## 📝 Table of Contents
- [About](#about)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [How to Play](#how-to-play)
- [Game Rules](#game-rules)
- [Demo](#demo)
- [License](#license)

## 🎯 About
This Hangman game is a console-based application that challenges players to guess a word letter by letter. With each wrong guess, the hangman drawing progresses. The game aims to provide an entertaining way to practice vocabulary while implementing fundamental programming concepts.

## ✨ Features
- 🎲 Random word selection from a curated word list
- 👀 Visual ASCII art display of the hangman
- 📝 Letter tracking system
- ✅ Input validation
- 🎯 Progress tracking
- 🔄 Multiple difficulty levels through word length variation

## 🔧 Prerequisites
- GCC Compiler
- Git (for cloning the repository)
- Terminal or Command Prompt

## 💻 Installation

1. Clone the repository
```bash
https://github.com/An1rud/Hangman-game-in-C.git
```

2. Navigate to the project directory
```bash
cd Hangman-game-in-C
```

3. Compile the game
```bash
gcc hangman.c -o hangman
```

4. Run the game
```bash
# On Windows
hangman.exe

# On Linux/Mac
./hangman
```

## 🎮 How to Play
1. Launch the game
2. A random word will be selected and displayed as underscores (_)
3. Guess one letter at a time
4. Enter your guess when prompted
5. The game will show:
   - Updated word with correctly guessed letters
   - List of previously guessed letters
   - Current state of the hangman
6. Continue guessing until you either:
   - Successfully guess the word (Win! 🎉)
   - Complete the hangman drawing (Game Over 😢)

## 📜 Game Rules
- You have 6 attempts to guess the word correctly
- Each incorrect guess adds a part to the hangman
- Repeated guesses don't count as attempts
- All words are in lowercase
- Only alphabetic characters are accepted

## 🎥 Demo
```
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========

Word: p r o g r a _ _ i n g
Guessed letters: a e i n o p r s t

Enter your guess:
```

## 📄 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
