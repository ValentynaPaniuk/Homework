# include <iostream>
# include <ctime>
using namespace std;

/*�������� ������� ��� ������ � ��������� ����������� ������� :
������� ��������� ���������� ������ ��������� ������ � ���� ���������� ����������� �������.������� ������� ������ ���������� ������.
������ ������
���������� ������ ����� ���������.������� ������ ������ ������, ����� �� ������� ��� ����������.
��������� �������� �� �������� ��������.
������� ������ �������� � ������� ��������� ������� � �����
����*/

//������� ��������� ���������� ������ ��������� ������ � ���� ���������� ����������� �������.
void Fill(int *arr, const int SIZE);
//���� ������ �� ������. ������� ������� ������ ���������� ������.
void Print(int *arr, const int SIZE);
//���������� ������ ����� ���������. ������� ������ ������ ������, ����� �� ������� ��� ����������.
void AddLastElement(int *&arr, int &size);
//��������� �������� �� �������� ��������.
void DelElement(int *&arr, int &size);
//������� ������ �������� � ������� ��������� ������� � �����
void AddNewElement(int *&arr, int &size);
//����
int Menu();

int main()
{
	srand(unsigned(time(NULL)));
	Menu();
	   
	system("pause");
	return 0;
}

//������� ��������� ���������� ������ ��������� ������ � ���� ���������� ����������� �������.
void Fill(int *arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20 + 5;
	}
}

//���� ������ �� ������. ������� ������� ������ ���������� ������.
void Print(int *arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Arr[" << i << "] = " << arr[i] << " address = " << &arr[i] << endl;
	}
	cout << endl;
}

//���������� ������ ����� ���������. ������� ������ ������ ������, ����� �� ������� ��� ����������.
void AddLastElement(int *&arr, int &size)
{
	int Last_element = 0;
	cout << "Enter last element: " << endl;
	cin >> Last_element;
	int *NewArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		NewArr[i] = arr[i];

	}
	NewArr[size] = Last_element;
	delete[] arr;
	arr = NewArr;
	size++;
}

//��������� �������� �� �������� ��������.
void DelElement(int *&arr, int &size)
{
	int del_element = 0;
	bool exit = 0;
	while (!exit)
	{
		cout << "Enter the address of the item to delete: " << endl;
		cin >> del_element;
		if (del_element >= 0 && del_element < size)
		{
			exit = true;
		}
		else
		{
			cout << "Incorrect value." << endl;
		}
	}

	int iterator = 0;
	int *newArr = new int[size + 1];
	for (int i = 0; i < size; i++) {
		if (i != del_element) {
			newArr[iterator] = arr[i];
			iterator++;
		}
		else continue;
	}

	delete[] arr;
	arr = newArr;
	size--;
}

//������� ������ �������� � ������� ��������� ������� � �����
void AddNewElement(int *&arr, int &size)
{
	bool exit = false;
	int iterator = 0;
	int number_index = 0;
	int number_element = 0;
	while (!exit)
	{
		cout << "Enter index of number, what You want to add: " << endl;
		cin >> number_index;
		if (number_index >= 0 && number_index <= size)
		{
			exit = true;
		}
	}

	cout << "Enter value of number: " << endl;
	cin >> number_element;
	int *NewArr = new int[size + 1];
	for (int i = 0; i < size + 1; i++)
	{
		if (i == number_index)
		{
			NewArr[i] = number_element;
		}
		else
		{
			NewArr[i] = arr[iterator];
			iterator++;
		}
	}
	delete[] arr;
	arr = NewArr;
	size++;

}

//����
int Menu()
{
	bool exit = false;
	int choise = 0;
	while (!exit)
	{
		system("cls");
		cout << "********************  MENU ***************" << endl;
		cout << "1. Do You want to create array? \n2. Exit" << endl;
		cout << "Enter your choise: " << endl;
		cin >> choise;
		switch (choise)
		{
		case 1: exit = true;
			break;
		case 2:
			return 0;
		}
	}

	system("cls");

	int size = 0;
	
	cout << "Enter the size of the array: " << endl;
	cin >> size;
	int *arr = new int[size];
	Fill(arr, size);
	system("cls");
	exit = false;
	choise = 0;
	while (!exit)
	{
		cout << "MENU" << endl;
		cout << "1. Print array; \n2. Add Last Element; \n3. Delete Element; \n4. Add New Element; \n0. Exit " << endl;
		cout << "Enter your choise: " << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			Print(arr, size);
			break;
		case 2:
			AddLastElement(arr, size);
			Print(arr, size);
			break;
		case 3:
			DelElement(arr, size);
			Print(arr, size);
			break;
		case 4:
			AddNewElement(arr, size);
			Print(arr, size);
			break;
		case 0:
			return 0;
		default:
			cout << "Incorrect value. Try again! " << endl;
		}


	}

}
