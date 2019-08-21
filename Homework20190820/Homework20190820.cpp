# include <iostream>
# include <ctime>

using namespace std;

/*1 Написати програму, яка запитує в користувача дату в форматі DD MM YYYY та дві перевантажені функції, які визначають: 
-скільки днів залишилось до кінця року 
-скільки днів минуло з початку року 

2. ( Написати шаблони функцій для роботи з одновимірним масивом:
a. введення елементів масиву(або заповнення випадковим чином), 
b. виводу елементів масиву на екран,
c. пошуку першого входження елемента у масив(індексу входження, - 1 - якщо не знайдено) 
d. пошуку останнього входження елемента у масив,
e. перемішування елементів масиву випадковим чином.
f. заповнення масиву однаковим заданим значенням 
Протестувати роботу шаблонних функцій для масивів цілого, дробового та символьного типу. */

//------------------------------------------------------------------------------------------------------------------
template <typename T>
T Days(T dd, T mm, T yyyy, T daysInThisMonth, T allDays, T result_day, T leap_year, T not_leap_year, T rez);



//--------------------------------------------------------------------------------------------------------------------

template <typename T>
void Fill_rand(T arr[], int const SIZE);

template <typename T>
void Fill_keyboard(T arr[], int const SIZE);

template <typename T>
void Fill_same(T arr[], int const SIZE);

template <typename T>
void Print(T arr[], int const SIZE);

template <typename T>
int Find_number_left(T arr[], int const SIZE, T number, int k_left);

template <typename T>
int Find_number_right(T arr[], int const SIZE, T number, int k_right);

template <typename T>
void Mixing(T arr[], int const SIZE);

void main()

{
	srand(unsigned(time(NULL)));

	// Exercise 1

	int const leap_year = 366, not_leap_year = 365;
	int allDays = 0;
	int dd = 0, mm = 0, yyyy = 0, daysInThisMonth = 0, resulr_day = 0, result_day = 0, rez=0;
	
	cout << "=======================================================================" << endl;
	
	Days(dd, mm, yyyy, daysInThisMonth, allDays, result_day, leap_year, not_leap_year, rez);
	
	cout << "=======================================================================" << endl;

	// Exercise 2
	int const SIZE10 = 10;
	double arr[SIZE10];
	char arr1[SIZE10];
	int arr2[SIZE10];
	double number = 0;
	double number1 = 0;
	int k_left = -1;
	int k_right = -1;

	cout << "Array that is filled with a rendom : " << endl;
	Fill_rand(arr, SIZE10);
	Print(arr, SIZE10);
	cout << "\n\n Search for the first occurrence of an element in an array \n (occurrence index, -1 - if not found)" << endl;
	Find_number_left(arr, SIZE10, number, k_left);
	cout << "\n\n Search for the last occurrence of an element in an array \n (occurrence index, -1 - if not found)" << endl;
	Find_number_right(arr, SIZE10, number1, k_right);

	cout << "\n\n Array that is populated from the keyboard : " << endl;
	Fill_keyboard(arr, SIZE10);
	Print(arr, SIZE10);
	cout << "\n\n Search for the first occurrence of an element in an array \n (occurrence index, -1 - if not found)" << endl;
	Find_number_left(arr, SIZE10, number, k_left);
	cout << "\n\n  Search for the last occurrence of an element in an array  \n (occurrence index, -1 - if not found)" << endl;
	Find_number_right(arr, SIZE10, number1, k_right);
	
	cout << "\n\n  Shuffling array elements randomly: " << endl;
	Mixing(arr, SIZE10);
	Print(arr, SIZE10);

	cout << "\n\n  Filling the array with the same setpoint (char)" << endl;
	Fill_same(arr1, SIZE10);
	Print(arr1, SIZE10);

	cout << "\n\n Filling the array with the same setpoint (double)" << endl;
	Fill_same(arr, SIZE10);
	Print(arr, SIZE10);

	cout << "\n \n Filling the array with the same setpoint (int)" << endl;
	Fill_same(arr2, SIZE10);
	Print(arr2, SIZE10);
	
		
	system("pause");

}

template <typename T>
void Fill_rand(T arr[], int const SIZE)
{
	
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20 - 10;
	}
}

template <typename T>
void Fill_keyboard(T arr[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
}

template <typename T>
void Print(T arr[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "]" << "=" << arr[i] << endl;
	}
}

template <typename T>
int Find_number_left(T arr[], int const SIZE, T number, int k_left)
{
	cout << "What number do You want to find?" << endl;
	cin >> number;
	for (int i = SIZE; i >= 0; i--)
	{
		if (arr[i] == number)
		{
			k_left = i;
			
		}
	}
	if (k_left != -1)
	{
		cout << "Number " << number << " is in the cell " << k_left << endl;
	}
	else if (k_left == -1)
		{
		cout << "Number is ebsent" << endl;
		}
	

	return k_left;
}


template <typename T>
int Find_number_right(T arr[], int const SIZE, T number, int k_right)
{
	cout << "What number do You want to find?" << endl;
	cin >> number;
	for (int i = 0; i <SIZE; i++)
	{
		if (arr[i] == number)
		{
			k_right = i;
			
		}
		
	}
	if (k_right != -1)
	{
		cout << "Number " << number << " is in the cell " << k_right << endl;
	}
	else if (k_right == -1)
		{
		cout << "Number is ebsent" << endl;
		}
	
	return k_right;
}

template <typename T>
void Mixing(T arr[], int const SIZE)
{
	T temp = 0;
	int mix = 0;
	for (int i = 0; i < SIZE; i++)
	{
		mix = rand() % SIZE;
		temp = arr[mix];
		arr[mix] = arr[i];
		arr[i] = temp;
	}
}

template <typename T>
void Fill_same(T arr[], int const SIZE)
{
	T key;
	cout << "\n Please enter what you want in the array: " << endl;
	cin >> key;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = key;
	}
}


/*Шаблон до першого завдання
Написати програму, яка запитує в користувача дату в форматі DD MM YYYY та дві перевантажені функції, які визначають:
-скільки днів залишилось до кінця року
-скільки днів минуло з початку року*/

template <typename T>
T Days(T dd, T mm, T yyyy, T daysInThisMonth, T allDays, T result_day, T leap_year, T not_leap_year, T rez)
{
	cout << "Enter day:" << endl;
	cin >> dd;
	cout << "Enter month: " << endl;
	cin >> mm;
	cout << "Enter year:" << endl;
	cin >> yyyy;

	if (mm == 1)
	{
		cout << "The number of days that have elapsed since the beginning of the year:  " << dd << endl;
	}
	else
	{
	
		for (int month = 1; month < mm && mm != 1; month++)
		{

			if (month % 2 == 0 && month != 8 && month != 2)
				daysInThisMonth = 30;
			else if (month % 2 != 0 || month == 8)
				daysInThisMonth = 31;
			else if (month == 2)
			{
				if (yyyy % 4 == 0)
					daysInThisMonth = 29;
				else
					daysInThisMonth = 28;
			}

			for (int days = 1; days <= daysInThisMonth; days++)
			{
				allDays++;
			}
		}
		rez = allDays + dd;
		cout << "The number of days that have elapsed since the beginning of the year: " << rez<< endl;
	}

	if (yyyy % 4 == 0)
	{
		result_day = leap_year - rez;
		cout << "By the end of the year there are " << result_day << " days left" << endl;
		return result_day;
	}
	else if (yyyy % 4 != 0)
	{
		result_day = not_leap_year - rez;
		cout << "By the end of the year there are " << result_day << " days left" << endl;
		return result_day;
	}

	
}

