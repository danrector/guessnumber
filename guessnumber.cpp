#include <iostream>
#include <ctime>
#include <cstdlib>
using std::cout;
using std::cin;
using namespace std;

int main() 
{
    int firstNumber;
    int secondNumber;
    bool keepgoing = true;
    srand(time(0));  // Initialize random number generator.

    //Set Game Number
        secondNumber = (rand() % 10) + 1;

    while(keepgoing)
    {
        //Get Player Number
        cout << "Guess a number from 1 to 10: ";
        cin >> firstNumber;
        cout << "You entered " << firstNumber << ". " << "\n";
        
        if (firstNumber < secondNumber)
        {
            cout << "Your number, " << firstNumber << ", is less than my number." << '\n';
        }
        if (firstNumber == secondNumber)
        {
            cout << "Your number, " << firstNumber << ", is equal to my number, " << secondNumber << '\n' << "Congrats, you won the game!";
            keepgoing = false;
        }
        if (firstNumber > secondNumber)
        {
            cout << "Your number, " << firstNumber << ", is greater than my number." << '\n';
        }
    }
}