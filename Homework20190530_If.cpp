# include <iostream>
using namespace std;
int main()
{
	//*********************************************************************
	float a1, a2;
	cout << "Enter the length of the parties:" << endl;
	cin >> a1;
	cout << endl;
	cin >> a2;
	if (a1 == a2)
	{
		cout << "It is square" << endl;
	}
	else
	{
		cout << "It is rectange" << endl;
	}
	//*******************************************************************

	int age;
	const int AGE0 = 1, AGE1 = 6, AGE2 = 17, AGE3= 23;
	cout << "Enter your child's age: " << endl;
	cin >> age;
	if (age > AGE0 && age < AGE1)
	{
		cout << "You it's time in the garden" << endl;
	}
	else if (age > AGE1 && age < AGE2)
	{
		cout << "You it's time to school" << endl;
	}
	else if (age > AGE2 && age < AGE3)
	{
		cout << "You it's time in the University" << endl;
	}
	else if (age > AGE3)
	{
		cout <<"You it's time to start doing" << endl;
	}
	else if  (age<AGE0)
	{
		cout << "Enter the correct data:" << endl;
	}
	//****************************************************************

	float a, b, c;
	cout << "Enter tree numbers: " << endl;
	cin >> a >> b >> c;
	if (a == b || b == c || c == a )
	{
		
		if (a == b && a!=c && b!=c)
		{
			cout << "The are two same number of" << endl;
			cout <<"a="<< a << "\t" <<"b="<< b<<endl;
		}
		else if (b==c && a!=b && a!=c)
		{
			cout << "The are two same number of" << endl;
			cout <<"b="<< b << "\t" <<"c"<< c << endl;
		}
		else if (c == a && b!=c && b!=a )
		{
			cout << "The are two same number of" << endl;
			cout <<"c="<< c << "\t" <<"a="<< a << endl;
		}
		else if (c == a && b == c && b == a)
		{
			cout << "The are tree same number of" << endl;
			cout <<"a="<< a <<"\t"<<"b=" << b << "\t" << "c=" << c << endl;
		}
	}
	else
	{
		cout << "We don't have same numbers" << endl;
	}

	system("pause");
	return 0;
}