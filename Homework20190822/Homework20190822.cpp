# include <iostream>
# include <ctime>
using namespace std;


/*1. Написати рекурсивну логічну функцію, яка перевіряє чи переданий у функцію масив впорядкований за зростанням
(не спаданням). */

// Заповнення масиву
void Fill(int arr[], const int SIZE);

// Вивід масиву на екран
void Print(int arr[], const int SIZE);

// Сортування масиву бульбашкою
void Sort(int arr[], const int SIZE);

// Перевірка чи переданий у функцію масив впорядкований за зростанням
int Sorting_check(int arr[], const int SIZE, int i);



void main()
{
	srand(unsigned(time(NULL)));
	int const SIZE = 10;
	int arr[SIZE];
	int i = 0;
	int arr1[SIZE] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	

	Fill(arr, SIZE);
	Print(arr, SIZE);
	Sorting_check(arr, SIZE, i);

	cout << endl;
	cout << "============================================================" << endl;
	Sort(arr, SIZE);
	Print(arr, SIZE);
	Sorting_check(arr, SIZE, i);

	

	system("pause");
}


// Заповнення масиву
void Fill(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 - 3;
	}
}
// Вивід масиву на екран
void Print(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}
// Сортування масиву бульбашкою
void Sort(int arr[], const int SIZE)
{
	for (int i = SIZE - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
	}

}
// Перевірка чи переданий у функцію масив впорядкований за зростанням
int Sorting_check(int arr[], const int SIZE, int i)
{
	if (arr[i] <= arr[i + 1] || i == SIZE-1)

	{
		if (i == SIZE - 1)

			cout << " The array is sorted in ascending order" << endl;

	}

	else if (arr[i] >= arr[i + 1])
	{

		cout << "The array isn't sorted in ascending order" << endl;
		return 0;
	}

	if (i == SIZE - 1)
	{
		return 0;
	}
	i++;
	Sorting_check(arr, SIZE, i);
}