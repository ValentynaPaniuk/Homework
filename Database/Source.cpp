# include <iostream>
# include <ctime>
# include <string>

using namespace std;

struct cardBook
{
	string title;
	string author;
	string description;
	int pages;
	int yearOfPublication;
	int dateBookReceivedLibrary;
	

	void ShowInfoCardBook() 
	{
		cout << "Title\t" << title << "\nAuthor\t" << author << "\nDescription\t" << description << "\nPages:\t"<<pages << "\nYear of publicathion\t" << yearOfPublication << "\nDate book received of the library:\t"<<dateBookReceivedLibrary<<endl;
	}
};


void ShowInfoCardBook(cardBook *cardBooks, const int numberOfCardBooks)
{
	for (int i = 0; i < numberOfCardBooks; i++)
	{
		cardBooks[i].ShowInfoCardBook();
	}
}

void CreateBookCollection(cardBook *cardBooks, const int numberOfCardBooks)
{
	cout << "----------------------------------------" << endl;
	for (int i = 0; i < numberOfCardBooks; i++)
	{
		cout << "Add card of the book: => " << i + 1 << endl;
		cout << "Book title: " << endl;
		cin >> cardBooks[i].title;
		cout << "Book author: " << endl;
		cin >> cardBooks[i].author;
		cout << "Book description: " << endl;
		cin >> cardBooks[i].description;
		cout << "Book pages: " << endl;
		cin >> cardBooks[i].pages;
		cout << "Book year of publication: " << endl;
		cin >> cardBooks[i].yearOfPublication;
		cout << "The date the book was received by the library " << endl;
		cin >> cardBooks[i].dateBookReceivedLibrary;
		cout << "------------------------------------" << endl;
		cout << "|           Add card of book    |" << endl;
		cout << "------------------------------------" << endl;

	}
}



struct cardClient
{
	string idCard;
	string name;
	string surname;
	string hobby;
	int dateOfBirthday;
	int monthOfBirthday;
	int yearOfBirthday;

	void ShowInfoCardClient()
	{
		cout << "ID card\t" << idCard << "\nName\t" << name << "Surname\t" << surname << "\nHobby:\t" << hobby << "\nDate of birthday:\t" <<dateOfBirthday <<" "<< monthOfBirthday <<" "<< yearOfBirthday << endl;
	}
};

void ShowInfoClient(cardClient *cardClients, const int numberOfCardClients)
{
	for (int i = 0; i < numberOfCardClients; i++)
	{
		cardClients[i].ShowInfoCardClient();
	}

}

void AddNewCardClient(cardClient *cardClients, const int numberOfCardClients)
{
	for (int i = 0; i < numberOfCardClients; i++)
	{
		cout << "Add card of the client: => " << i + 1 << endl;
		cout << "Name of client: " << endl;
		cin >> cardClients[i].name;
		cout << "Surname of client: " << endl;
		cin >> cardClients[i].surname;
		cout << "Hobby: " << endl;
		cin >> cardClients[i].hobby;
		cout << "Date of birthday: " << endl;
		cin >> cardClients[i].dateOfBirthday;
		cout << "Month of birthday: " << endl;
		cin >> cardClients[i].monthOfBirthday;
		cout << "Year of birthday:  " << endl;
		cin >> cardClients[i].yearOfBirthday;
		cout << "------------------------------------" << endl;
		cout << "|   Add card of client "<< i+1 <<"     |"<< endl;
		cout << "------------------------------------" << endl;
	}	
	
}


void SortByName(cardClient *cardClients, const int numberOfCardClients)
{
	for (int i = 0; i < numberOfCardClients - 1; i++)
	{
		for (int j = 0; j < numberOfCardClients - i - 1; j++)
		{
			if (cardClients[j].name > cardClients[j + 1].name)
			{
				swap(cardClients[j], cardClients[j + 1]);
			}
		}
	}
}






void Menu( int menu, bool exit, cardBook *cardBooks, int numberOfCardBooks,  const int numberOfCardClients, cardClient *cardClients)
{
	while (!exit)
	{
		switch (menu)
		{
		case 1: //1.Enter Database:\n";
		{
			break;
		}
		case 11: //11.From File\n";
		{
			break;
		}
		case 12: // 12.From Keyboard\n";
		{
			break;
		}
		case 2: // 2.Browsing the database БД\n"; перегляд бази даних
		{
			break;
		}
		case 31: //31.Clear the database\n";
		{
			break;
		}
		case 32: //  32.Add new card clients:\n";
		{
			AddNewCardClient(cardClients, numberOfCardClients);
			ShowInfoClient(cardClients, numberOfCardClients);
			break;
		}
		case 33: //33.Add new card books:\n";
		{
			CreateBookCollection(cardBooks, numberOfCardBooks);
			ShowInfoCardBook(cardBooks, numberOfCardBooks);
			break;
		}
		case 34: //34.Delete record\n";
		{


			break;
		}
		case 41: // 41.Database output in File\n";
		{
			break;
		}
		case 42: //42.Database output on Screen\n";
		{
			break;
		}
		case 51: // 51.Data search by client's last name:\n";
		{
			break;
		}
		case 52: //52.Data search by the name of the book:\n";
		{
			break;
		}
		case 53: //53.Data search by the name of the book:\n";
		{
			break;
		}
		case 54: //54.Data search by the author's name:\n";
		{
			break;
		}
		case 61: // 61.Sort by book title:\n";
		{
			break;
		}
		case 62: //62.Sort by the author of the book:\n";
		{
			break;
		}
		case 63: //63.Sort by visitor name:\n";
		{
			SortByName(cardClients, numberOfCardClients);
			ShowInfoClient(cardClients, numberOfCardClients);
			
			break;
		}
		case 64: //64.Sort by card number:\n";
		{
			break;
		}
		case 7: //7.About the developer\n";
		{
			break;
		}
		case 8: //8.Clear the screen\n";
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
			cout << "    32.Add new card clients:\n";
			cout << "    33.Add new card books:\n";
			cout << "    34.Delete record\n";
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
			cout << "Select menu item: ";
			cin >> menu;

			break;
		}
		case 9: //9.Exit\n\n";
		{
			exit = true;
			break;
		}

		default:
		{
			cout << "ERROR! \n\n";
			menu = 8;
		}
		}
	}

}



int main()
{
	bool exit = false;
	int menu = 8;
	int numberOfCardBooks = 0;
	int numberOfCardClients = 0;
	cout << "How many book cards we will enter: " << endl;
	cin >> numberOfCardBooks;
	cout << "How many people do You want to add: " << endl;
	cin >> numberOfCardClients;
	cardBook *cardBooks = new cardBook[numberOfCardBooks];
	cardClient *cardClients = new cardClient[numberOfCardClients];
	

	Menu(menu, exit, cardBooks, numberOfCardBooks, numberOfCardClients, cardClients);
	


	

	

	




	system("pause");
	return 0;
}