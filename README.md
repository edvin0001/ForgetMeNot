🎲 Random Memory Game (C)
A fun and interactive terminal-based game written in C where the user is challenged to remember a randomly generated number displayed for only 5 seconds. Perfect for testing your short-term memory while learning core programming concepts in C.

📌 Features
🔢 Random number generation using rand() and srand(time(0))

⏱️ Countdown timer using Sleep() from windows.h

🧠 Memory-based user challenge

🔁 Replay loop with case-insensitive string handling

📢 Sound feedback for incorrect answers

💻 Console-based, lightweight, and fast

🧠 Concepts Practiced
Control structures (for, while, if-else)

Random number generation (rand(), srand(), time())

String comparison and manipulation (strcmp(), tolower())

Clearing the terminal (system("cls"))

Input handling with scanf()

Windows system functions like Sleep() and Beep()

🎮 How to Play
A random number between 1 and 1,000,000 is displayed.

You have 5 seconds to memorize it (countdown shown).

The number disappears, and you're asked to recall it.

Correct? 🎉 You win!
Wrong? 😵 A beep will play, and the right answer will be shown.

Then you choose: Play Again? Type yes or no.

💻 How to Run
On Windows:
Compile the file:

bash
Copy
Edit
gcc memory_game.c -o memory_game
Run the game:

bash
Copy
Edit
./memory_game
⚠️ Note:
This version is designed for Windows only due to use of windows.h

To run it on Linux, replace Sleep() and system("cls") with Linux-compatible functions

🔧 Dependencies
Standard C Libraries:

stdio.h

stdlib.h

time.h

string.h

ctype.h

Windows-specific:

windows.h