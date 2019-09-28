# include <iostream>

using namespace std;
/*Дано 2 паралельних одновимірних масиви : масив назв товарів(масив рядків) та масив цін товарів. 
Впорядкувати масиви за зростанням цін. Вивести назви та ціни товарів за заростанням та спаданням цін. 
Використати алгоритм впорядкування методом бульбашки.*/

// Заповнення масиву назвами товарів(масив рядків) та масиву цін товарів
void Fill(double arr[], char arr1[], const int SIZE);
// Вивід масиву назвами товарів(масив рядків) та масиву цін товарів
void Print(double arr[], char arr1[], const int SIZE);
// Сортування масиву назвами товарів(масив рядків) та масиву цін товарів
void Sort(double arr[], char arr1[], const int SIZE, double tmp, char tmp1);


void main()
{
	const int SIZE = 10;
	double arr[SIZE];
	char arr1[SIZE];
	double tmp = 0;
	char tmp1 = '0';

	cout << "\n ====== ARRAY==========" << endl;
	Fill(arr,arr1, SIZE);
	Print(arr, arr1, SIZE);
	cout << "\n ====== SORTING ARRAY==========" << endl;
	Sort(arr, arr1, SIZE, tmp, tmp1);
	Print(arr, arr1, SIZE);
	
	system("pause");
}


// Заповнення масиву назвами товарів(масив рядків) та масиву цін товарів
void Fill(double arr[], char arr1[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter a product " << i << " name:  " << endl;
		cin >> arr1[i];
		cout << "Enter products" << i << " price" << endl;
		cin >> arr[i];
	}
}
// Вивід масиву назвами товарів(масив рядків) та масиву цін товарів
void Print(double arr[], char arr1[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Name:  " << arr1[i] << "  price: " << arr[i] << endl;
	}
}

// Сортування масиву назвами товарів(масив рядків) та масиву цін товарів
void Sort(double arr[], char arr1[], const int SIZE, double tmp, char tmp1)
{
	for (int i = SIZE - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

				
				tmp1 = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = tmp1;
			}
		}
	}
}