#include <iostream>
#include <sstream>
#include <Windows.h>

using namespace std;

int main()
{
	int x, y;

	for(x=1; x<=99; x++)
	{
		for(y=1; y<=99; y++)
		{
			double number;
			number = (x*100) + y;
			if(((x+y)*(x+y)) == number)
			{
				ostringstream out;
				out << number;
				if(number>=1000)
					if((out.str()[0] != out.str()[1]) && (out.str()[0] != out.str()[2]) && (out.str()[0] != out.str()[3]))
						cout << number << endl;
				if(number<1000)
					if((out.str()[0] != out.str()[1]) && (out.str()[0] != out.str()[2]))
						cout << number << endl;
			}
		}
	}

	return 0;
}