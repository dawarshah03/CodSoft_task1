#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char x = {};
	while (x != 'n')
	{
		a = rand() % 100;
		for (int i = 1; i > 0; i++)
		{
			cout << "Enter your Guess : ";
			cin >> b;
			if (a - b > 2)
			{
				cout << "Too Low" << endl;
			}
			else if (a - b <= 2 && a - b >= 1 || a - b >= -2 && a - b <= -1)
			{
				cout << "You Are Very Close" << endl;
			}
			else if (a == b)
			{
				cout << "You Guessed it Right!!" << endl;
				break;
			}
			else if (a - b < -2)
			{
				cout << "Too High" << endl;
			}
		}
		cout << "\nDo you want to Continue? (y or n) : ";
		cin >> x;
		cout << endl;
	} 
	return 0;
}