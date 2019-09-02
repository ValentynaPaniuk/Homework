# include <iostream>
# include <ctime>
using namespace std;

/*1. Дано масив цілих чисел.Користуючись вказівниками, поміняти місцями елементи масиву з парними и непарними індексами
(тобто ті елементи масиву, які стоять на парних місцях, поміняти з елементами, які стоять на непарних місцях).

*/

void Fill(int pArr[], const int SIZE);
void Print(int pArr[], const int SIZE);
void Change(int pArr[], const int SIZE);


/*
2. Дано два масиви, впорядкованих по зростанню : А[n] і B[m].
Сформуйте масив C[n + m], який складається з елементів масивів А і В, впорядкованих по зростанню.
*/

void Fill1(int parr1[], int parr2[], int const SIZE_);
void Print1(int parr1[], int parr2[], int const SIZE_);
void Print1(int parr3[], int const SIZE_);
void Sort1(int parr1[], int parr2[], int const SIZE_);
void Sort1(int parr3[], int const SIZE_);
void Association1(int parr1[], int parr2[], int parr3[], int const SIZE_);

/*Дано одновимірний масив. Знайти найбільше та найменше значення у масиві та поміняти їх у масиві місцями. 
Вивести перетворений масив на екран. */

void main()
{
	srand(unsigned(time(NULL)));




	//=====================================================================================
	cout << "Exercise 1" << endl;
	const int SIZE = 10;
	int arr[SIZE];
	int *pArr = arr;
	
	Fill(pArr, SIZE);
	Print(pArr, SIZE);
	Change(pArr, SIZE);
	Print(pArr, SIZE);
	//======================================================================================
	cout << "Exercise 2" << endl;
	const int SIZE_ = 5;
	
	int arr1[SIZE_], arr2[SIZE_], arr3[SIZE_ * 2];
	int *parr1 = arr1, *parr2 = arr2, *parr3 = arr3;

	Fill1(parr1, parr2, SIZE_);
	Print1(parr1, parr2, SIZE_);


	Sort1(parr1, parr2, SIZE_);
	Print1(parr1, parr2, SIZE_);

	Association1(parr1, parr2, parr3, SIZE_);
	Print1(parr3,SIZE_);

	Sort1(parr3, SIZE_);
	Print1(parr3, SIZE_);

	system("pause");
}

void Fill(int pArr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		pArr[i] = rand() % 10 + 1;
	}
}

void Print(int pArr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << pArr[i] << "\t";
	}
	cout << endl;
}

void Change(int pArr[], const int SIZE)
{
	int tmp = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
		{
			tmp = pArr[i];
			pArr[i] = pArr[i + 1];
			pArr[i + 1] = tmp;
		}
	}
}
//====================================================================================================

void Fill1(int parr1[], int parr2[], int const SIZE_)
{
	for (int i = 0; i < SIZE_; i++)
	{
		parr1[i] = rand() % 20 + 30;
		parr2[i] = rand() % 10 + 1;
	}
}

void Print1(int parr1[], int parr2[], int const SIZE_)
{
	for (int i = 0; i < SIZE_; i++)
	{
		cout << parr1[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < SIZE_; i++)
	{
		cout << parr2[i] << "\t";
		
	}
	cout << endl;
}

void Sort1(int parr1[], int parr2[], int const SIZE_)
{
	cout << "Sorting two arrives: " << endl;

	for (int i = SIZE_ - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (parr1[j] > parr1[j + 1])
			{
				int tmp = parr1[j];
				parr1[j] = parr1[j + 1];
				parr1[j + 1] = tmp;

			}
		}
	}

	for (int i = SIZE_ - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (parr2[j] > parr2[j + 1])
			{
				int tmp = parr2[j];
				parr2[j] = parr2[j + 1];
				parr2[j + 1] = tmp;

			}
		}
	}


}

void Sort1(int parr3[], int const SIZE_)
{
	cout << "Sorting arrive tree: " << endl;

	for (int i = (SIZE_ * 2) - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (parr3[j] > parr3[j + 1])
			{
				int tmp = parr3[j];
				parr3[j] = parr3[j + 1];
				parr3[j + 1] = tmp;

			}
		}
	}



}


void Association1(int parr1[], int parr2[], int parr3[], int const SIZE_)
{
	int k = 0;
	for (int i = 0; i < (SIZE_ * 2); i++)
	{
		if (i < SIZE_)
		{
			parr3[i] = parr1[i];
		}
		else
		{
			parr3[i] = parr2[k];
			k++;
		}
	}
}


void Print1(int parr3[], int const SIZE_)
{
	cout << endl;
	cout << "Association " << endl;
	for (int i = 0; i < (SIZE_ * 2); i++)
	{
		cout << parr3[i] << "\t";
	}
	cout << endl;
}

