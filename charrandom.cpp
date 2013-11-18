#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main( )
{
	char ding[40];
	int x;
	x = 0;
	cout << "Enter a seed. ";
	cin.get(ding, 40);
	cin.ignore(80, '\n');
	while(x == 0)
	{
		srand(unsigned int(ding));
		char y = rand();
		cout << y;
	}
	return 0;
}