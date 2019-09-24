# include <iostream>
# include <ctime>
using namespace std;

//============================================================================================================================
/*�������� �������(��� ������ �������), ��� ������ ��� ��������� � ������� �������� �� ����� �����.�� ��������� ������� :
������� �� ����� ����� � ���� �������� �����
�������� �� 10 ����� �����.
*/

//������� �� ����� ����� � ���� �������� �����
template <typename T>
T Min_volue(T *pX, T *pY, T*pZ);
//�������� �� 10 ����� �����.
template <typename T>
T AddNumber(T *pZ);


//===========================================================================================================================

/*�������� �������, ��� ������ 2 ��������� �� ���� � ������ ���� ���������� �� �������.
��������� ������ ������� ��� ���� ������.
��������� ������ ������� ��� ����, ��� ������� ������ � ������������ ����� ������ ������� � ������, ����� � ��������� � �.�
��������� ������ ������� ��� ����, ��� �������� �����.
*/
//������ ���� ���������� �� �������
template<typename T>
void Exchange(T &a, T &b);
//���������� ������
template <typename T>
void Fill(T arr[], const int SIZE);
//���� ������ �� �����
template<typename T>
void Print(T arr[], const int SIZE);
//��������� ������ ������� ��� ����, ��� ������� ������ � ������������ ����� ������ ������� � ������, ����� � ��������� � �.�
template<typename T>
void Change(T arr[], const int SIZE, T &tmp);
//��������� ������ ������� ��� ����, ��� �������� �����
template <typename T>
void Inverted(T arr[], T arr_[], const int SIZE, T &tmp);


//===========================================================================================================

/* �������� 3 ��������� ������ ������ ������ ����.
��������� �� ������� ����������.
��������� � ������� �� ����� �� �������, � ����� ��� �������� ��������� ������.*/

/*template <typename T>
void Fill(T arr[], const int SIZE);
//���� ������ �� �����
template<typename T>
void Print(T arr[], const int SIZE);*/

template<typename T>
void Product(T arr[], int &size, T &dob)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " * ";
		(*&dob)*= arr[i];
	}
		cout << " = " <<*&dob << endl;
	}

int main()
{
	srand(unsigned(time(NULL)));

	int *pX = new int;
	int *pY = new int;
	int *pZ = new int;
	int *pK = new int;

	*pX = rand() % 10 + 20;
	*pY = rand() % 20 + 30;

	Min_volue(pX, pY, pZ);
	AddNumber(pZ);

	delete pX;
	delete pY;
	delete pZ;
	
	pX = nullptr;
	pY = nullptr;
	pZ = nullptr;
	pK = nullptr;


	//===========================================================================================

	int a = 5, b = 6;
	Exchange(a, b);


	const int SIZE = 10;
	int arr[SIZE];
	int arr_[SIZE];
	int tmp = 0;

	Fill(arr, SIZE);
	Print(arr, SIZE);
	Change(arr, SIZE, tmp);
	Print(arr, SIZE);
	Inverted(arr, arr_, SIZE, tmp);
	Print(arr_, SIZE);


	//==============================================================================================

	int size = 0;
	cout << "Enter array size => " << endl;
	cin >> size;
	int *arr1 = new int[size];
	double *arr2 = new double[size];
	int dob = 1;
	double dob1 = 1;

	Fill(arr1, size);
	Fill(arr2, size);
	Print(arr1, size);
	Print(arr2, size);
	cout << "Product of numbers ARR1: " << endl;
	Product(arr1, size, dob);
	cout << "Product of numbers ARR2: " << endl;
	Product(arr2, size, dob1);


	delete[] arr1;
	delete[] arr2;
	arr1 = nullptr;
	arr2 = nullptr;
	

	system("pause");
	return 0;
}


//������� �� ����� ����� � ���� �������� �����
template <typename T>
T Min_volue(T *pX, T *pY, T*pZ)
{
	if (*pX > *pY)
	{
		cout << "Minimum value = " << *pY << endl;
		*pZ = *pY;
	}
	else
	{
		cout << "Minimum value = " << *pX << endl;
		*pZ = *pX;
	}
	return *pZ;
}

//�������� �� 10 ����� �����.
template <typename T>
T AddNumber(T *pZ)
{
	*pZ += 10;
	cout << "Min_value + 10 = " << *pZ << endl;
	return *pZ;
}

//====================================================================================================


template<typename T>
void Exchange(T &a, T &b)
{
	cout << "Before:\nA= " << *&a << "  B= " << *&b << endl;
	int tmp = *&a;
	*&a = *&b;
	*&b = tmp;
	cout << "After: \nA= " << *&a << "   B= " << *&b << "\n" << endl;

}

//���������� ������
template <typename T>
void Fill(T arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 1.8;
	}
}

//���� ������ �� �����
template<typename T>
void Print(T arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	cout << endl;
}

//��������� ������ ������� ��� ����, ��� ������� ������ � ������������ ����� ������ ������� � ������, ����� � ��������� � �.�
template<typename T>
void Change(T arr[], const int SIZE, T &tmp)
{
	cout << "Modified array: ";
	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
		{
			*&tmp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = *&tmp;
		}
	}
	cout << endl;
}

//��������� ������ ������� ��� ����, ��� �������� �����
template <typename T>
void Inverted(T arr[], T arr_[], const int SIZE, T &tmp)
{
	cout << "Inverted array: " << endl;
	*&tmp = SIZE - 1;
	for (int i = 0; i < SIZE; i++)
	{
		arr_[i] = arr[*&tmp];
		(*&tmp)--;
	}
}