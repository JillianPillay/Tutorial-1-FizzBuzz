#include <iostream>
using namespace std;
int main()
{
	int i;
		for(i = 1; i <= 20; i++)
		{
			if ( i%3==0 && i%5==0)
			{
				cout << "fizzBuzz" << endl;

			}
			else
			{
				if (i % 3 == 0)
				{
					cout << "Fizz" << endl;

				}
				else if (i % 5 == 0)
				{
					cout << "Buzz" << endl;

				}
				else
					cout << i << endl;
			}

		}
}