# include <iostream>
# include <ctime>
# include <string>
# include <fstream> //�������� fstream
#include <cstdlib>


using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	
	/*string path = "bd.txt";
	// ofstream - ��� ������ ����� � ����
	ifstream fin; //��'��� fin ���� ifstream (������� ���� ��� �� �������)
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Error!!! " << endl;
	}
	else
	{
		cout << "Opened!!! " << endl;
		
		
		//char ch;
		//while (fin.get(ch)) // ��'��� fin �� ����� get, ���� ����� ����� �����������
		//{
		//	cout<<ch;
		//}

	}
		
	string text;
	char arr[50];
	string arrive[2];
	int i = 0;
	while (!fin.eof()) //��'��� fin �� ����� eof, ���� ��������� ����� ����� (���� ������ ���� �� ��������� ����� �����)
	{
		text = ""; //������� �������� �������� ����� � ���� (��� � ���� �� ������������� ���)
		//========================================================================================
		// �����, �� ����Ӫ �����������. ĳ����� ����� � ��'���� fin. ���������� ��� �� ������� ������ (����� �� ������ � ��������� �� ����� �����)
		//fin >> text; 
		//cout << text;

		//===================================================================================
		// �����, �� ����Ӫ ���������. ����� getline ���� ��� ���������: ��� � ��'���� fin  � ������ � ����� text. fin, text - ���������. 
		getline(fin, text);
		arrive[i] = text;
		cout << text << endl;
		i++;


		//===================================================================================
		// �����, �� ����Ӫ ���������. ����� getline ���� ��� ���������: ����� ���� arr � ������� ������� � �����.
		// �� ������ ��������� � ����� string. �� �� ���� ����� ���� char.
		//fin.getline(arr, 50);
		//cout << arr;


	}

	fin.close();
	cout << "\n===========================================" << endl;

	
	cout << "********** ARRIVE PRINT: ********************" << endl;
	for (int i = 0; i < 2; i++)
	{
		cout <<"arr["<< i <<"] = " <<arrive[i] << endl;
	}
	cout << endl;
	
	string password;
	string login;
	bool exit = false;

	
	while (!exit)
	{
		cout << "Enter login: " << endl;
		cin >> login;
		cout << "Enter password: " << endl;
		cin >> password;

		//�������� �� ���������� ����� � ������
		for (int i = 0; i < 2; i++)
		{
			
			if (arrive[i] == login && arrive[i + 1] == password)
			{
				cout << "It's correct! Congratulations!" << endl;
				exit = true;
				break;
			}
			else
			{
				cout << "Try againe " << endl;
				break;
			}
		}

		//���� �� � admin �� �������: �� � ����
		for (int i = 0; i < 2; i++)
		{
			if (arrive[i] == login && arrive[i + 1] == password)
			{
				cout << "You are the administration" << endl;
				break;
			}
			else
			{
				cout << "You are not the administration" << endl;
				break;

			}
		}
	
	}
	*/
	
	/*1. Գ���� ����� ����������.���������� ����� - �� ����� ��� ����� ����� ����� � ��������� ���.
���� �������� ���������� ������� ��������� �� ������, ������� ���� ������ �����, ������� ��� � ���,
� ���� ���������� ��������� ���� � ������ ����.������ ���� ���� ����� ������� �����, ��� ��������� � ���������� ���.
���� ������� ������ ������ ����������, ��� ��� ��������� ������� �������.���������, �� ������ ��������� ������ ����
�� ������ ������� � ������� 10 �� ���� ASCII ������� ������� �� ����, �� �� ���� ��������� � ������ ����.*/

	string address = "bd1.txt";
	ifstream fin1; //��'��� fin1 ���� ifstream (������� ���� ��� �� �������)
	fin1.open(address);

	if (!fin1.is_open())
	{
		cout << "Error!!! " << endl;
	}
	else
	{
		cout << "Opened!!! " << endl;
	}

	
	char arr1[50];
	string arrive1[20];
	string text1;
	int i_ = 0;
	
	
	while (!fin1.eof()) //��'��� fin �� ����� eof, ���� ��������� ����� ����� (���� ������ ���� �� ��������� ����� �����)
	{
		//arr1[50] = ""; //������� �������� �������� ����� � ���� (��� � ���� �� ������������� ���)
		//========================================================================================
		// �����, �� ����Ӫ �����������. ĳ����� ����� � ��'���� fin. ���������� ��� �� ������� ������ (����� �� ������ � ��������� �� ����� �����)
		//fin1 >> text1; 
		//cout << text1;

		//===================================================================================
		// �����, �� ����Ӫ ���������. ����� getline ���� ��� ���������: ��� � ��'���� fin  � ������ � ����� text. fin, text - ���������. 
		getline(fin1, text1);
		arrive1[i_] = text1;
		cout << text1 << endl;
		i_++;


		//===================================================================================
		// �����, �� ����Ӫ ���������. ����� getline ���� ��� ���������: ����� ���� arr � ������� ������� � �����.
		// �� ������ ��������� � ����� string. �� �� ���� ����� ���� char.
		/*fin1.getline(arr1, 50);
		cout << arr1<<"\n";*/
		

	}

	fin1.close();

	cout << "Text to encryption: " << endl;
	cout << "\n=========================================================" << endl;
	int size = 0;

	string *arr2 = new string[size];
	for (int i = 0; i<20; i++)
	{
		cout << arrive1[i] <<"\n" ;
		size++;
	}
	cout << "\n=========================================================" << endl;
	
	
	// ���������� ������	 
	for (int i = 0; i < size; i++)
	{
		arr2[i] = atoi(arrive1[i].c_str()) + 12;
		
	}
	cout << "Text after encryption: " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << arr2[i]<<"\n";
	}
	cout << "\n=========================================================" << endl;
	   	 
	// ��������� � ���� ���� �����
	ofstream fout;
	string path1 = "bd3.txt";
	fout.open(path1, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Error!!!! " << endl;
	}
	else
	{
		cout << "Open file! " << endl;

		
	}

	for (int i = 0; i < 20; i++)
	{
		fout << arrive1;
	}
	cout << endl;


	fout.close();

	system("pause");
	return 0;
}


