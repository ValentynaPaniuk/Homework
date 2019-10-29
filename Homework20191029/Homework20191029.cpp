# include <iostream>
# include <string>

using namespace std;

/*��������� ����� ������. �������� ��������, �� ���� ������� �������������� �����. 
�������� ������� ��������������� ���������, ��� ������ ��� ���: 
����� �����, 
������� �����, 
ʳ������ ����� � �����.
�������� ������� �������� ����� � �'��� ��������. �������� ��� ������������ ������ ������:
����� �������
����� 
������� ������
���� 75 20
����������� ���. 75 20
�����-���� 75 20
���������� ����. 80 20
����-����. 80 20
����� ���, ���� �������� �����������, ���� ������� ������� ����, ���� ������ ��� �����: 
�� ����� ������������ ������ �����. ������������ ��� ��������� ��� ����� � ��������, ��� ������ ����. 
���� ���������� ������ ����, �� ��� ���� ����� �������� ���� ������, ��� ������� �������� � ������ ��� �����. 
�������� ������� ���������� ������� ���, �� ������ ��������, � ������ ���� � ������� �����, ���������� � �����. 
���� ���������� ������ ����, ���� ��� �����������, �� �������� �����������. ���� ����� ������������. 
���� ���������� ������� ����� � ��������, �� ������� ���������� �������� ���� ���������� �����.
�������� ��������: ���� ���������� ������� ���� ������, �� ��������� ���� �������� ��� �������� ����� 1,00 ���.*/


struct avtomat
{
	string name;
	double cost;
	double money;
	double reshta;
	
	double summa = 0;
	int number;
	const int SIZE = 4;

	void ShowInfo()
	{
		if (number >= 1)
		{
			cout << "Name:\t" << name << "\tprice:\t" << cost << "\tNumber of glasses:\t" << number << endl;
		}
		else
		{
			cout << "================        The water is over!!!!!!!!!!!!!!" << endl;
		}


	}

	void Counting()
	{
		
		number--;
	}

	void Rest()
	{
		cout << "Make money in the vending machine: " << endl;
		cin >> money;
		if (number >= 1 && money>cost)
		{
			
			reshta = money - cost;
			cout << "Don't forget to pick up the rest: " <<reshta<< endl;
		}
		else if (money==cost)
		{
			cout << "Money was entered correctly! Thank's! " << endl;
		}
		else if (money<cost)
		{
			reshta = cost - money;
			cout << "There is not enough money for a drink: You must add: "<< reshta << endl;
		}
		
	}

	void Profit()
	{
		summa+=cost;
		cout << "Our profit is: "<<summa << endl;
		
	}



};

void Menu(avtomat drink1, avtomat drink2, avtomat drink3, avtomat drink4)
{
	int choice;
	bool exit = false;
	double allprofit = 0;
	
	while (!exit)
	{
		cout << "=====================================================================" << endl;
		cout << "What do You want to drink?\n1 - Pepsi\n2 - Fanta\n3 - Sprite\n4 - Bonaqua\nExit - 0  "<< endl;
		cout << "If You don't want to drink - press 0;" << endl;
		cout << "=====================================================================" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			system("cls");
			cout << "Your choice is Pepsi" << endl;
			drink1.ShowInfo();
			drink1.Rest();
			drink1.Counting();
			drink1.Profit();
			drink1.ShowInfo();
			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			cout << "Your choice is Fanta" << endl;
			drink2.ShowInfo();
			drink2.Rest();
			drink2.Counting();
			drink2.Profit();
			drink2.ShowInfo();
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			cout << "Your choice is Sprite" << endl;
			drink3.ShowInfo();
			drink3.Rest();
			drink3.Counting();
			drink3.Profit();
			drink3.ShowInfo();
			system("pause");
			break;
		}
		case 4:
		{
			system("cls");
			cout << "Your choice is Bonaqua" << endl;
			drink4.ShowInfo();
			drink4.Rest();
			drink4.Counting();
			drink4.Profit();
			drink4.ShowInfo();
			system("pause");
			break;
		}
		case 0:
		{
			cout << "Thank You for your choice!" << endl;
			
			
			
			

			exit = true;
		}
		default:
		{
			cout << "Wrong choice! " << endl;
		}
		}
	}

}



int main()
{
	avtomat drink1;
	drink1.name = "Pepsi";
	drink1.cost = 1;
	drink1.number = 2;
	drink1.ShowInfo();

	avtomat drink2;
	drink2.name = "Fanta";
	drink2.cost = 1.5;
	drink2.number = 5;
	drink2.ShowInfo();

	avtomat drink3;
	drink3.name = "Sprite";
	drink3.cost = 2;
	drink3.number = 15;
	drink3.ShowInfo();

	avtomat drink4;
	drink4.name = "Bonaqua";
	drink4.cost = 1.25;
	drink4.number = 20;
	drink4.ShowInfo();



	Menu(drink1, drink2, drink3, drink4);

	



	system("pause");
	return 0;
}