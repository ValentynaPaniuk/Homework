# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	setlocale(LC_ALL, "ru");

	/*1. Дано одновимірний масив. Циклічно зрушити(зсунути) масив на К елементів вліво або вправо (в залежності від обраної дії користувача) 	*/

	const int SIZE = 10;
	int direction;
	int Arr[SIZE];
	int k;
	for (int i = 0; i < SIZE; i++)
	{
		Arr[i] = rand() % 10;

	}
	cout << "* * * * * ARRAY 1 * * * * * *" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "  ";

	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << i << "  ";
	}
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "On what side will we shift the array ?  " << endl;
	cout << "1 - right or 2 - left?" << endl;
	cin >> direction;
	cout << "Specify the numbers of steps: " << endl;
	cin >> k;
	cout << endl;
	//////////////////////////////////////////////////////////////////////
	cout << endl;
	//2 - left
	if (direction == 2)
	{
		for (int j = 0; j < k; j++)
		{
			int tmp = Arr[0];

			for (int i = 0; i < SIZE; i++)
			{

				Arr[i] = Arr[i + 1];

			}
			Arr[SIZE - 1] = tmp;
		}
		

		cout << "* * * * *  <<====== ARRAY 2 * * * * * *" << endl;
		
		for (int i = 0; i < SIZE; i++)
		{
			cout << Arr[i] << "  ";
		}
		cout << endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << i << "  ";
		}
		cout << endl;
	}
	
	/////////////////////////////////////////////////////////////////////////////
	//1 - right
	else if (direction == 1)
	{
		for (int j = 0; j < k; j++)
		{
			int tmp = Arr[SIZE - 1];

			for (int i = SIZE - 1; i > 0; i--)
			{
				Arr[i] = Arr[i - 1];


			}
			Arr[0] = tmp;
			
		}
		cout << "* * * * * ARRAY 3 ======>>  * * * * * *" << endl;
		for (int i = 0; i< SIZE; i++)
		{
			cout << Arr[i] << "  ";
		}
		cout << endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << i << "  ";
		}
		cout << endl;
	
	}


	
	


system("pause");
return 0;
}





