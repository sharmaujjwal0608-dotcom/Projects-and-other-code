#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int guess;

    srand(time(0));
    int r = rand()%10 + 1;

    do{
        cout << "Guess the number between 1- 10: " << endl;
        cin >> guess;

        if (guess > r){
            cout << "Too high, guess the smaller number" << endl;
        }
        else if (guess < r){
            cout << "Too low, guess the larger number" << endl;
        }
        else {
            cout << "Correct!" << endl;
        }
    } while (guess != r);





    // Description
    // You are given a secret number and a sequence of guesses. Your task is to simulate a Guess the Number game using a do-while loop. For every guess: Print "Too Low" if the guess is smaller than the secret number. Print "Too High" if the guess is greater than the secret number. Print "Correct" when the guess matches the secret number. The game stops immediately when the correct number is guessed. If all allowed guesses are used without finding the secret number, print "Game Over" after processing the guesses. The problem is designed to practice the do-while loop, conditions, and repeated input processing.

    // Input Format
    // secret N guess1 guess2 ... guessN Where: secret is the number to guess. N is the maximum number of guesses. The next N lines contain the guesses.

    // Output Format
    // For every processed guess, print one of: Too Low Too High Correct If the secret number is not guessed after all attempts, print: Game Over The guesses after a correct guess must not be processed.


    int secret, N;
    cin >> secret >> N;

    int guess;
    bool found = false;
    int i = 0;

    do {
        cin >> guess;
        i++;

        if (guess < secret) {
            cout << "Too Low" << endl;
        }
        else if (guess > secret) {
            cout << "Too High" << endl;
        }
        else {
            cout << "Correct" << endl;
            found = true;
        }

    } while (i < N && !found);

    if (!found) {
        cout << "Game Over" << endl;
    }

    return 0;
}
