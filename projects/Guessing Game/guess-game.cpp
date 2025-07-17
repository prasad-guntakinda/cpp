/*
*   Guessing Game
*   A simple number guessing game in C++. which generates a random number between 0-100
*   and the user has to guess it within 5 attempts. Based on the user's guess, will provide hints to guess the number.
*   If the user guesses correctly, they win; otherwise, they lose.
*   This game is a fun way to practice basic C++ programming concepts like loops, conditionals, and random number generation.
* 
*/

#include<iostream>
using namespace std;
int main(){
    int guess, max_attempts=3,curr_attempt=1, rand_num, low=1, high=100, win=0;
    srand(time(0)); // Seed the random number generator
    rand_num = rand() % 100 + 1; // Generate a number between 1 and 100
            
    cout<< "*******Welcome to Guessing Game*******" <<endl;
    cout<< "I am thinking a number between 1 to 100"<<endl;
    while(curr_attempt< max_attempts){
        cout << "Attempt: "<<curr_attempt<<" Enter your guess: ";
        cin>> guess;
        //Validate Given Input Range
        if(guess < 1 || guess > 100){
            cerr<< "Error: invalid range! try again"<<endl;
            curr_attempt++;
            continue;
        }
        if(guess == rand_num){
            cout<< "Hurray...!, you won the game....." <<endl;
            win = 1; // Set win flag
            break;
        }else if(guess < rand_num){
            cout<< "your guess is low"<<endl;
            low = guess; // Update low range
        }else{
            cout<< "your guess is high"<<endl;
            high = guess; // Update high range
        }
        cout<< "Number is between "<<low<<" and "<<high<<endl;
        curr_attempt++;
    }

    if(win){
        cout<< "Congratulations! You guessed the number: "<<rand_num<<endl;
    }else{
        cout<< "Sorry! You lost the game. The correct number was: "<<rand_num<<endl;    
    }
    
}
