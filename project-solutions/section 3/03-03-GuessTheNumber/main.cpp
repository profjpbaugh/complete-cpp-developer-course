#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));

	bool guessedNumber = false;
	int guessCount = 0;
	int ourGuess;
	int computerNumber = rand() % 100 + 1;

	while (!guessedNumber)
	{
		cout << "Enter your guess" << endl;
		cin >> ourGuess;

		if (ourGuess > 100 || ourGuess < 1)
		{
			cout << "That was a wasted guess.  You must pick a number between 1 and 100 inclusive!" << endl;
			guessCount++;
			continue;
		}

		if (ourGuess == computerNumber)
		{
			cout << "Congratulations!  You guessed the number in " << guessCount << " guesses!" << endl;
			cout << "Thanks for playing!" << endl;
			guessedNumber = true;
		}
		else if (ourGuess > computerNumber)
		{
			cout << "Your guess is too high!" << endl;
		}
		else
		{
			//must be too low
			cout << "Your guess is too low!" << endl;
		}//end if-else

		guessCount++;
	}//end while

	return 0;
}