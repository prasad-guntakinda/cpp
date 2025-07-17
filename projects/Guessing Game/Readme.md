# Guessing Game

## What is Guessing Game?
This is a simple command-line C++ game where the player tries to guess a randomly generated number within a certain range. The game provides feedback on whether the guess is too high or too low, and continues until the correct number is guessed.

---

<details>
<summary> How to compile and run this game? </summary>

1. Open a terminal and navigate to the folder containing `guess-game.cpp`.
2. Compile the code using:
   ```sh
   g++ guess-game.cpp -o guess-game.exe
   ```
3. Run the game with:
   ```sh
   ./guess-game.exe
   ```
   On Windows, you can also double-click `guess-game.exe` after compiling.


</details>

---

<details>
<summary> How to Play? </summary>

1. Run the executable or compile `guess-game.cpp`.
2. The program will prompt you to guess a number within a specified range.
3. Enter your guess and press Enter.
4. The game will tell you if your guess is too high, too low, or correct.
5. Continue guessing until you find the correct number. The game will display the number of attempts taken.

## Example Output
```
Welcome to the Guessing Game!
I'm thinking of a number between 1 and 100.
Enter your guess: 50
Too low! Try again.
Enter your guess: 75
Too high! Try again.
Enter your guess: 63
Congratulations! You guessed the number in 3 attempts.
```
</details>

---

<details>
<summary> Features </summary>

- Random number generation
- User input validation
- Feedback for each guess (too high/too low)
- Tracks the number of attempts

</details>

---
  
<details>
<summary>What do you learn?</summary>
- Variables and data types
- Input and output (I/O) operations
- Control flow (if-else statements, loops)
- Random number generation
- Functions (if used for modularity)
- User input validation
- Basic error handling
- Counters and tracking attempts
</details>

---

## Q&A

<details>

<summary>How does random number generation work in this game?</summary>

The game uses the `rand()` and `srand()` functions from the C++ Standard Library to generate random numbers.

#### What is `rand()`?
- `rand()` is a function that generates a pseudo-random integer each time it is called.
- The value is between 0 and a large constant (usually 32767).

**Example:**
```cpp
#include <iostream>
#include <cstdlib> // For rand()
using namespace std;

int main() {
    int randomNumber = rand();
    cout << "Random number: " << randomNumber << endl;
    return 0;
}
```
*Note: If you run this code multiple times, you'll get the same number each time unless you use `srand`.*

#### What is `srand()`?
- `srand()` stands for "seed random" and sets the starting point for generating random numbers.
- If you use the same seed, you get the same sequence of random numbers every time.
- To get different numbers each run, use the current time as the seed: `srand(time(0));`

**Example:**
```cpp
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    int randomNumber = rand();
    cout << "Random number: " << randomNumber << endl;
    return 0;
}
```
*Now, each time you run the program, you'll likely get a different number.*

#### How to get a random number in a specific range (e.g., 1 to 100)?
You can use the modulo operator `%` to limit the range:
```cpp
int num = rand() % 100 + 1; // Gives a number between 1 and 100
```

**Full Example:**
```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed with current time
    int num = rand() % 100 + 1; // 1 to 100
    cout << "Random number between 1 and 100: " << num << endl;
    return 0;
}
```
- `rand() % 100 + 1` ensures the number is between 1 and 100 (inclusive).


</details>

---



