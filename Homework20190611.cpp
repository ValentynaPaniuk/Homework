# include <iostream>
using namespace std;
int main()
{
	/////////////////////////////////////////////////////////////////////////
	int day_of_week = 7, day = 1, temperature=0, i=0;
	while (day <= day_of_week)
	{
		cout << "Enter temperature of day"<<day << endl;
		cin >> temperature;
		if (temperature > 10)
		{
			i++;
		}
		day++;
	}
	cout << "The temperature above 10 was: "<<i <<" days"<< endl;
	cout << endl;
	/////////////////////////////////////////////////////////////////////////////

	char a;
	int b=0,c=0;
	cout << "Enter symbol (While symbol is not equal - \".\"): " << endl;
	do
	{		
		cin >> a;
		if (a == 'a')
		{
			b++;
		}
		if (a == 'o')
		{
			c++;
		}
	} while (a != '.');
	cout << "A: " << b << endl;
	cout << "O: " << c << endl;

	if (b > c)
	{
		cout << "More characters are entered \"A\"" << endl;
	}
	else if (c>b)
	{
		cout << "More characters are entered \"O\"" << endl;
	}
	else
	{
		cout << "Symbols entered the same" << endl;
	}
	cout << endl;
	////////////////////////////////////////////////////////////////////////////////////////////////

	int k = 0, k1 = 10, x=0, y=0;
	cout << "Enter the number: " << endl;
	cin >> x;
	do
	{
		y = x * k;
		cout << x << "*" << k << "=" << y << endl;
		k++;
	} while (k <= 10);
	cout << endl;
	////////////////////////////////////////////////////////////////////////////////////////////////
	
	const int s = 1111;
	int r=0, f=0;
	cout << "Enter PIN-code: " << endl;
	cin >> r;
	if (r == s)
	{
		cout << "Select operation: " << endl;
		cout << "1 -> Call: " << endl;
		cout << "2 -> Send SMS: " << endl;
		cout << "3 -> Refill the account: " << endl;
		cout << "4 -> Block: " << endl;
			do 
		{
			cin >> f;
			cout << "You have chosen "<< f << endl;
			if (f == 1)
			{
				cout << "Please select a phone number to call" << endl;
			}
			else if (f == 2) 
			{
				cout << "Please select a phone number to write SMS" << endl;
			}
			else if (f == 3)
			{
				cout << "Indicate how much to fill in the account: " << endl;
			}
			else if (f == 4)
			{
				cout << "PHONE IS BLOCKED" << endl;
			}
			else 
			{
				cout << "Make the right choice" << endl;
			}
			
		} while (f!=4);

	}
	else
	{
		cout << "Incorrect entered PIN-code" << endl;
	}


	system("pause");
	return 0;

}