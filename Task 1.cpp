#include <iostream>
#include <cstdlib> // For rand() and s rand()
#include <ctime>   // For time()

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));
    int randomNumber = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100. Try to guess it!" << endl;

    // Loop until the user guesses the correct number
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber)
        {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber)
        {
            cout << "Too low! Try again." << endl;
        } else
        {
            cout << "Congratulations! You've guessed the correct number!" << endl;
        }
    } while (guess != randomNumber);
    return 0;
}
