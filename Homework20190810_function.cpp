# include <iostream>;
# include <ctime>
using namespace std;

//функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні [-12..20]
void  Fill(int arr[], const  int SIZE) 
{
	for (int i = 0; i < SIZE; i++) 
	{
		arr[i] = rand() % 20 - 12;
		
	}
}
//функцію Print(), яка виводить елементи масиву на екран.
void  Print(int arr[], const  int SIZE) 
{
	cout << " Print arr address = " << arr << endl;
	for(int i = 0; i < SIZE; i++) 
	{
		cout << " arr [ " << i << " ] =     " << arr[i] << "       arr [ " << i << " ]          address =    " << &arr[i] << endl;
	}
}
//функцію, яка повертає кількість відємних елементів масиву
void Negative(int arr[], const int SIZE, int k)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
		{
			k++;
		}
	}
	cout << "The number of negative elements:  " << k << endl;
}
//функцію для знаходження середнього арифметичного елементів масиву
void Average(int arr[], const int SIZE, int s)
{
	int average = 0;
	
	
	for (int i = 0; i < SIZE; i++)
	{
		s += arr[i];
		average = s / (i + 1);
		
	}
		cout << "The average is:   " << average << endl;
}
//функцію для знаходження максимального елемента масиву
void Max(int arr[], const int SIZE, int tmp)
{
	
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			tmp = arr[i + 1];
		}
		
	}
	cout << "The maximum element of the array is equal to:    " << tmp << endl;
}

int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	int arr[SIZE];
	int k=0, s=0, tmp=0;

	Fill(arr, SIZE);
	Print(arr, SIZE);
	Negative(arr, SIZE, k);
	Average(arr, SIZE, s);
	Max(arr, SIZE, tmp);
	

	system("pause");
}
