

# include <iostream>
#include <string>
using namespace std;
int main()
{
	//*****************************************************************************************
	float a, b, c,average;
	const int X1 = 2, X2 = 5, X3=3, Y1=2, Y2=2.5, Y3=3.3, Y4=4.2, Y5=5;
	cout << "Enter number from 2 to 5: " << endl;
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	cin>>c;
	cout << endl;
	if (a >= X1 && a <= X2 && b >= X1 && b <= X2 && c >= X1 && c <= X2)
	{
		average = (a + b + c) / X3;
		if (average >= Y1 && average <= Y2)
		{
			cout << "BAD" << endl;
		}
		else if (average > Y2 && average <= Y3)
		{
			cout << "SO-SO" << endl;
		}
		else if (average > Y3 && average <= Y4)
		{
			cout << "GOOD" << endl;
		}
		else if (average > Y4 && average <= Y5)
		{
			cout << "EXCELLENT" << endl;
		}
	}
	else
	{
		cout << "Incorrect data entered" << endl;
	}
	//***********************************************************************************************
	

	string c1;
	const string U1 = "Ukraine", U2 = "ukraine", P1 = "Poland", P2 = "poland", F1 = "France", F2 = "france", I1 = "Italy", I2 = "italy";
	cout << "Enter country: " << endl;
	cout << "* Ukraine \t * Poland \t * German \t * France\t * Italy \t" << endl;
	cin >> c1;
	if (c1 == U1 || c1==U2)
	{
		cout << "Kiev is the capital of "<<U1 << endl;
	}
	else if (c1 == P1 || c1 == P2)
	{
		cout << "Warsav is the capital "<<P1 << endl;
	}
	else if (c1 == F1 || c1 == F2)
	{
		cout << "Paris is the capital of "<<F1 << endl;
	}
	else if (c1 == I1 || c1 == I2)
	{
		cout << "Rome is the capital of "<<I1 << endl;
	}
	else
	{
		cout << "Incorrect data entered" << endl;
	}

	int day;
	const int ONE = 1, TWO=2, THREE=3, FOUR=4, FIVE=5, SIX=6, SEVEN = 7;
	cout << "Enter day of the week (from 1 to 7): " << endl;
	cin >> day;
	if (day >= ONE && day <= SEVEN)
	{
		if (day == ONE)
		{
			cout << "Today id Monday" << endl;
		}
		else if (day == TWO)
		{
			cout << "Today is Tuesday" << endl;
		}
		else if (day == THREE)
		{
			cout << "Today is Wednesday" << endl;
		}
		else if (day == FOUR)
		{
			cout << "Today is Thursday" << endl;
		}
		else if (day == FIVE)
		{
			cout << "Today is Friday" << endl;
		}
		else if (day == SIX)
		{
			cout << "Today is Saturday" << endl;
		}
		else if (day == SEVEN)
		{
			cout << "Today is Sunday" << endl;
		}
	}
	else
	{
		cout << "Incorrect data entered" << endl;
	}
	//***************************************************
	system("pause");
	return 0;

}