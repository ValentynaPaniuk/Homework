# include <iostream>
# include <ctime>
using namespace std;


/*C++
Дано два масива : А[n] и B[m].
Утворити третій масив мінімального можливого розміру, у якому зібрати :
Елементи обох масивів;
Спільні элементи обох массивов;
Елементи масиву A, які не зустрічаються у B;
Елементи масиву В, які не зустрічаються у А;
Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).
*/

// Заповнюємо масив числами
void Fill(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20 + 5;
	}
	
}

// Виводимо масив на екран
void Print(int arr[], const int SIZE)
{
	cout << "\n------------------" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << "\n__________________" << endl;
}

//Спільні элементи обох массивов;
void FindSameValues(int arr1[], int arr2[], const int SIZE, int &counter )
{
	cout << "The same value:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr1[i] == arr2[j])
			{
				cout <<"Arr1["<<i<<"] =>"<< arr1[i] << "    =    " <<"Arr2["<<j<<"]=>"<< arr2[j] << endl;
				(*&counter)++;
			}
		}
	}
	cout << endl;
}

// Формування масиву з однаковими значеннями
void FillArr3SameValue(int arr1[], int arr2[], int arr3[], int SIZE)
{
	int iterator = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr1[i] == arr2[j])
			{
				arr3[iterator] = arr1[i];
				iterator++;
			}
		}
	}
}



//Елементи масиву A, які не зустрічаються у B;
//Елементи масиву В, які не зустрічаються у А;
void FillArrNotSameValues(int arr1[], int arr2[], int arr3[], int arr4[], const int SIZE)
{
	cout << "The not same value ARR1:" << endl;
	int iterator = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr1[i] != arr3[j])
			{
				arr4[iterator] = arr1[i];
				iterator++;
			}
			break;
		}
		
		
	
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr2[i] != arr3[j])
			{
				arr4[iterator] = arr2[i];
				iterator++;
			}
			break;
		}



	}

	

}

int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 5;
	int arr1[SIZE];
	int arr2[SIZE];
	
	
	int counter = 0;
	


	Fill(arr1, SIZE);
	Fill(arr2, SIZE);
	Print(arr1, SIZE);
	Print(arr2, SIZE);

	FindSameValues(arr1, arr2, SIZE, counter);
	
	int arr3size = *&counter;
	int *arr3 = new int[arr3size];

	int arr4size = (SIZE * 2) - (*&counter);
	int *arr4 = new int[arr4size];
	
	FillArr3SameValue(arr1, arr2, arr3, SIZE);
	FillArrNotSameValues(arr1, arr2, arr3, arr4, SIZE);
	Print(arr4, arr4size);
	

	system("pause");
	return 0;
}