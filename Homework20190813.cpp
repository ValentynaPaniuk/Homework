# include <iostream>
# include <ctime>

using namespace std;

/*1.Даний масив з 20 цілих чисел з значеннями від 1 до 20. Необхідно: 
---> написати функцію, яка розкидає елементи масиву довільним чином; 
---> створити випадкове число з того ж діапазону і знайти позицію цього випадкового числа в масиві (Якщо воно існує);*/

void FillArr(int arr[], int i, const int SIZE);
void FillArr1(int arr[], int i, const int SIZE);
void PrintArr(int arr[], int i, const int SIZE);
void FindIndex(int arr[], int i, const int SIZE, int x, int index_x);

int main()
{
	srand(unsigned(time(NULL)));

	const int SIZE = 20;
	int arr[SIZE];
	int const i = 0;
	int x = 0, index_x = 0;

	FillArr(arr, i, SIZE);
	PrintArr(arr, i, SIZE);
	FillArr1(arr, i, SIZE);
	PrintArr(arr, i, SIZE);
	FindIndex(arr, i, SIZE, x, index_x);
	


	system("pause");
	return 0;
}

//Даний масив з 20 цілих чисел з значеннями від 1 до 20.

void FillArr(int arr[], int i, const int SIZE)
{
	for (i; i < SIZE; i++)
	{
		arr[i] = i+1;
	}
	cout << endl;
}

//написати функцію, яка розкидає елементи масиву довільним чином;
void FillArr1(int arr[], int i, const int SIZE)
{
	for (i; i < SIZE; i++)
	{
		arr[i] = rand() % 21;
	}
	cout << endl;
}

//Вивести масмв на екран
void PrintArr(int arr[], int i, const int SIZE)
{
	for (i = 0; i < SIZE; i++)
	{
		cout<<"Arr["<<i<<"]  = "<<arr[i]<<endl;
	}
	cout << endl;
}
//створити випадкове число з того ж діапазону і знайти позицію цього випадкового числа в масиві (Якщо воно існує)
void FindIndex(int arr[], int i, const int SIZE, int x, int index_x)
{
	cout << "Enter a number from 1 to 20:  " << endl;
	cin >> x;
	for (i; i < SIZE; i++)
	{
		if (arr[i] == x)
		{
			index_x = i;
		}
	}
	cout <<"The cell number " << x << " is equal to [" << index_x <<"]"<< endl;
}