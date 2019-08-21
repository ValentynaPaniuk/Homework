# include <iostream>
# include <ctime>

using namespace std;
/*1. Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю. 
Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7.
- функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні [-26..54] 
- функцію Print(), яка виводить елементи масиву на екран 
перевантажені функції:
- для знаходження суми елементів масиву
- для знаходження мінімального елемента масиву до вказаної верхньої межі проміжку 
(від початку до вказаного індексу) */

void Menu(int choice, int arr[], int const SIZE, int tmp, int index_tmp, int max_element);
void Menu(int choice, float arr[], int const SIZE, float tmp, int index_tmp, int max_element);

void Fill_keybord (float arr[], int const SIZE);
void Fill_rand(float arr[], int const SIZE);

void Print(float arr[], int const SIZE);

int SUM(int arr[], int const SIZE);
float SUM(float arr[], int const SIZE);

int Min(int arr[], const int SIZE, int tmp, int index_tmp, int max_element);
float Min(float arr[], const int SIZE, float tmp, int index_tmp, int max_element);


int main()
{
	srand(unsigned(time(NULL)));
	int choice = 0;
	int const SIZE10=10;
	float arr10[SIZE10];
	float sum = 0;
	float tmp10=0;
	int index_tmp10=0;
	float tmp7=0;
	int index_tmp7 = 0;
	int const SIZE7 = 7;
	float arr7[SIZE7];
	int max_element = 0;

	cout << "================================================" << endl;
	cout << "The first array of 10 elements: " << endl;
	Menu(choice, arr10, SIZE10, tmp10, index_tmp10, max_element);
	cout << "================================================" << endl;
	cout << "The second array of 7 elements: " << endl;
	Menu(choice, arr7, SIZE7, tmp7, index_tmp7, max_element);
			
	system("pause");
	return 0;

}

void Menu(int choice, float arr[], int const SIZE, float tmp, int index_tmp, int max_element)
{
	cout << "Choose how to enter the data into the array:" << endl;
	cout << "1=> keyboard" << endl;
	cout << "2=> rand" << endl;
	cin >> choice;


	if (choice == 1)
	{
		Fill_keybord(arr, SIZE);
		Print(arr, SIZE);
		SUM(arr, SIZE);
		Min(arr, SIZE, tmp, index_tmp, max_element);

	}
	else if (choice == 2)
	{
		Fill_rand(arr, SIZE);
		Print(arr, SIZE);
		SUM(arr, SIZE);
		Min(arr, SIZE, tmp, index_tmp, max_element);
	}
	
}


void Fill_keybord(float arr[], int const SIZE)
{


	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
}




void Fill_rand(float arr[], int const SIZE)
{


	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 54 - 26;
	}
}





void Print(float arr[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[ " << i << "]= " << arr[i] << "   address=  " << &arr[i] << endl;
	}

}



int SUM(int arr[], int const SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		
		sum += arr[i];
	}
	cout << "SUMMA ELEMENTS OF ARRIVE = " << sum << endl;
	return sum;
}


float SUM(float arr[], int const SIZE)
{
	float sum = 0;
	for (int i = 0; i < SIZE; i++)
	{

		sum += arr[i];
	}
	cout << "SUMMA ELEMENTS OF ARRIVE = " << sum << endl;
	return sum;
}


int Min(int arr[], const int SIZE, int tmp, int index_tmp, int max_element)
{
	tmp = arr[0];
	cout << "Which element of the array are we looking for minimum ? " << endl;
	cin >> max_element;
	for (int i = 1; i < max_element; i++)
	{
		if (tmp > arr[i])
		{
			tmp = arr[i];
			index_tmp = i;
		}
	}
	cout << "The minimum: " << tmp << " index_tmp= " << index_tmp << endl;
	return tmp;
}

float Min(float arr[], const int SIZE, float tmp, int index_tmp, int max_element)
{
	tmp = arr[0];
	cout << "Which element of the array are we looking for minimum ? " << endl;
	cin >> max_element;
	for (int i = 1; i < max_element; i++)
	{
		if (tmp > arr[i])
		{
			tmp = arr[i];
			index_tmp = i;
		}
	}
	cout << "The minimum: " << tmp << " index_tmp= " << index_tmp << endl;
	return tmp;
}

