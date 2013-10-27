#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;
char choice;

void menu()
{
	
	cout << "Press enter to start.";
	cin.get();
	
}


void game()
{
	int guess, real, tries;
	tries = 1;
	srand(unsigned int(time(NULL)));
	real = rand() % 10 + 1;
	cout << "Guess a number from 1 - 10. ";
	cin >> guess;
	while(guess != real)
	{
		if(guess>real)
		{
			cout << "Lower!" << endl;
			cin >> guess;
		}
		if(guess<real)
		{
			cout << "Higher!" << endl;
			cin >> guess;
		}
		tries++;
	}

	cout << "You win!" << endl << "It took you " << tries << " tries to guess the number!" << endl;
	//return 0;
}
			
			
			
			
			
int main()
{
	menu();
	game();
	cin.ignore();
	cin.get();
	return 0;
}
