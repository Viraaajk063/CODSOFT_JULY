#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = rand() % 10 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do
    {
        cout << "Guess a number between 1 and 10: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber)
        {
            cout << "OOPS SORRY!!! Try a smaller number" << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "OOPS SORRY!!! Try a bigger number" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
