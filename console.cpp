#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;
char choice;
int range;
void menu()
{
	cout << "Enter the the range of numbers you want to guess between.";
	cin >> range;
	
}
void game()
{
	int guess, real, tries;
	tries = 1;
	srand(unsigned int(time(NULL)));
	real = rand() % range + 1;
	cout << "Guess a number from 1 - " << range << ". ";
	cin >> guess;
	while(guess != real)
	{
		if(guess>real)
		{
			cout << "Lower!" << endl << endl;
			cin >> guess;
		}
		if(guess<real)
		{
			cout << "Higher!" << endl << endl;
			cin >> guess;
		}
		tries++;
	}

	cout << "You win!" << endl << "It took you " << tries << " tries to guess the number!" << endl;
}
int main()
{
	menu();
	game();
	cin.ignore();
	cin.get();
	return 0;
}
