# include <iostream>
# include <ctime>
using namespace std;

/*Написати функції для роботи з динамічним одновимірним масивом :
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.Функція повертає адресу створеного масиву.
Виводу масиву
Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
Видалення елемента за вказаною позицією.
Вставка нового елемента у довільну допустиму позицію у масиві
Меню*/

//Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
template<typename T>
void Fill(T *arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 + 5;
	}
}

//Функція повертає адресу створеного масиву.
template<typename T>
void Print(T *arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Arr[" << i << "] = " << arr[i] << " address = " << &arr[i] << endl;
	}
	cout << endl;
}

//Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
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
	NewArr[size]=Last_element;
	delete[] arr;
	size++;
}

//Видалення елемента за вказаною позицією.
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




int main()
{
	srand(unsigned(time(NULL)));
	int size=0;
	int *arr = new int[size];
	cout << "Enter the size of the array:" << endl;
	cin >> size;



	system("pause");
	return 0;
}
