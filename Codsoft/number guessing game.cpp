#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    
    cout << "-          ---------------------------------------------------------\n";
    cout << "           |               Welcome to the Guess the Number          |\n";
    cout << "X----------|                                                        |----------X\n";
    cout << "           |                Game! - By Ayushman aka Titan           |\n";
    cout << "           ---------------------------------------------------------\n\n";

    cout << "--> I've selected a random number between 1 and 100. Try to guess it.\n\n";

    do {
        cout << "\t\t\t\t\tEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
            cout << "\t\t\t\t\t\t\t😢\n\n" << endl; 
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
            cout << "\t\t\t\t\t\t\t😢\n\n" << endl; 
        } else {
         
            cout << "---------------------------------------------------------\n";
            cout << "|              Congratulations! You guessed              |\n";
            cout << "|             the correct number (" << secretNumber << ") in " << attempts << " attempts!      |\n";
            cout << "---------------------------------------------------------\n";
            cout << "🎉" << endl; 
        }

    } while (guess != secretNumber);

    return 0;
}
