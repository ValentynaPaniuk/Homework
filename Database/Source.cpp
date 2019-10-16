# include <iostream>
# include <ctime>
# include <string>

using namespace std;

struct Book
{
	string title;
	string author;
	string description;
	int yearOfPublication;
	int dateBookReceivedLibrary;
};

struct card
{
	string idCard;
	string name;
	string surname;
	string hobby;
	int dateOfBirthday;
	int monthOfBirthday;
	int yearOfBirthday;
};

void Menu( int menu, bool exit)
{
	
	while (!exit)
	{
		if ((1 <= menu && menu <= 9) || (menu == 11) || (menu == 12) || (menu == 31) || (menu == 32) || (menu == 33) || (menu == 41) || (menu == 42))
		{
			if (menu == 1) //1.Enter Database:\n";
			{
				;
			}
			if (menu == 11) //11.From File\n";
			{
				;
			}
			if (menu == 12) // 12.From Keyboard\n";
			{
				;
			}
			if (menu == 2) // 2.Browsing the database БД\n"; перегляд бази даних
			{
				;
			}
			if (menu == 31) //31.Clear the database\n";
			{
				;
			}
			if (menu == 32) // 32.Add record:\n";
			{
				;
			}
			if (menu == 33) //33.Delete record\n";
			{
				;
			}
			if (menu == 41) // 41.Database output in File\n";
			{
				;
			}
			if (menu == 42) //42.Database output on Screen\n";
			{
				;
			}
			if (menu == 51) // 51.Data search by client's last name:\n";
			{
				;
			}
			if (menu == 52) //52.Data search by the name of the book:\n";
			{
				;
			}
			if (menu == 53) //53.Data search by the name of the book:\n";
			{
				;
			}
			if (menu == 54) //54.Data search by the author's name:\n";
			{
				;
			}
			if (menu == 61) // 61.Sort by book title:\n";
			{
				;
			}
			if (menu == 62) //62.Sort by the author of the book:\n";
			{
				;
			}
			if (menu == 63) //63.Sort by visitor name:\n";
			{
				;
			}
			if (menu == 64) //64.Sort by card number:\n";
			{
				;
			}
			if (menu == 7) //7.About the developer\n";
			{
				;
			}
			if (menu == 8) //8.Clear the screen\n";
			{
				system("cls");
				cout << " MENU:\n";
				cout << "  1.Enter Database:\n";
				cout << "    11.From File\n";
				cout << "    12.From Keyboard\n";
				cout << "**************************" << endl;
				cout << "  2.Browsing the database БД\n"; //перегляд бази даних
				cout << "**************************" << endl;
				cout << "  3. Editing the database:\n"; //зміна бази даних
				cout << "    31.Clear the database\n";
				cout << "    32.Add record:\n";
				cout << "    33.Delete record\n";
				cout << "**************************" << endl;
				cout << "  4.Database output:\n"; //вивід бази даних
				cout << "    41.In File\n";
				cout << "    42.On Screen\n";
				cout << "**************************" << endl;
				cout << "  5.Data search:\n";
				cout << "     51.By client's last name:\n";
				cout << "     52.By the name of the book:\n";
				cout << "     53.By the name of the book:\n";
				cout << "     54.By the author's name:\n";
				cout << "**************************" << endl;
				cout << "  6.Sorting:\n";
				cout << "     61.Sort by book title:\n";
				cout << "     62.Sort by the author of the book:\n";
				cout << "     63.Sort by visitor name:\n";
				cout << "     64.Sort by card number:\n";
				cout << "**************************" << endl;
				cout << "  7.About the developer\n";
				cout << "**************************" << endl;
				cout << "  8.Clear the screen\n";
				cout << "**************************" << endl;
				cout << "  9.Exit\n\n";


			}
			if (menu == 9) //9.Exit\n\n";
			{
				break;
			}
		}
		else 
		{
			cout << "ERROR! \n\n";
		}
		cout << "MENU: ";
		cin >> menu;
		
	}
}



int main()
{
	bool exit = false;
	int menu = 8;
	Menu(menu,exit);



	system("pause");
	return 0;
}