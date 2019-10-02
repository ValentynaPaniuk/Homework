# include <iostream>
# include <ctime>

using namespace std;

/*C++
�������� ������� ��� ������ � ��������� ��������:
1. ������� ��������� �������� ������� ������� row x col, �� row �� col - ��������� �������. ������� ������� ������ �������� ������� (��� ������ ������� ���������� �� ������).
2. ������� ���������� �������
3. ������� ������ �������
4. ������� ���������� ������� ����� ������
5. ������� ��������� � ������� ����� �� �������� �������
6. ������� ������� ������ ����� �� �������� �������
7. ������� ���������� ������� ����� ����������
8. ������� ��������� � ������� ������� �� �������� �������
9. ������� ������� ������ ������� �� �������� ������� */

// ������ ���'��
void Clean(int **arr1, int &row1);
/*1. ������� ��������� �������� ������� ������� row x col, �� row �� col - ��������� �������.
	������� ������� ������ �������� ������� (��� ������ ������� ���������� �� ������).*/
void Create_matrix(int **arr1, int &row1, int &col1);

//2. ������� ���������� �������
void Fill_matrix(int **arr1, int &row1, int &col1);

//3. ������� ������ �������
void Print_matrix(int **arr1, int &row1, int &col1);

//4. ������� ���������� ������� ����� ������
void AddLastRow(int **arr1, int &row1, int &col1);

// 5. ������� ��������� � ������� ����� �� �������� �������
void DelRow(int **arr1, int &row1, int &col1);

//6. ������� ������� ������ ����� �� �������� �������
void AddNewRow(int **arr1, int &row1, int &col1);

// 7. ������� ���������� ������� ����� ����������
void AddLastCol(int **&arr1, int &row1, int &col1);

// 8. ������� ��������� � ������� ������� �� �������� �������
void DelCol(int **&arr1, int &row1, int &col1);

// 9. ������� ������� ������ ������� �� �������� �������
void AddNewCol(int **&arr1, int &row1, int &col1);


int main()
{
	srand(unsigned(time(NULL)));

	int col1 = 0, row1 = 0;
	cout << "Enter the number of rows of the matrix: " << endl;
	cin >> row1;
	cout << "Enter the number of colomns of the matrix: " << endl;
	cin >> col1;
	cout << "---------------------------------------------------------------------------" << endl;

	int **arr1 = new int *[row1];
	
	//1.
	Create_matrix(arr1, row1, col1);
	//2.
	Fill_matrix(arr1, row1, col1);
	//3.
	Print_matrix(arr1, row1, col1);
	//4.
	cout << "ADD LAST ROW: " << endl;
	AddLastRow(arr1, row1, col1);
	Print_matrix(arr1, row1, col1);
	//5.
	cout << "DELETE ROW: " << endl;
	DelRow(arr1, row1, col1);
	Print_matrix(arr1, row1, col1);
	//6.
	cout << "ADD NEW ROW: " << endl;
	AddNewRow(arr1, row1, col1);
	Print_matrix(arr1, row1, col1);
	//7.
	cout << "ADD LAST COLUMN: " << endl;
	AddLastCol(arr1, row1, col1);
	Print_matrix(arr1, row1, col1);
	//8.
	cout << "DELETE COLUMN: " << endl;
	DelCol(arr1, row1, col1);
	Print_matrix(arr1, row1, col1);
	//9.
	AddNewCol(arr1, row1, col1);
	Print_matrix(arr1, row1, col1);

	Clean(arr1, row1);
	arr1 = nullptr;


	system("pause");
	return 0;
}
//------------------------------------------------------------------------------
// 1. ��������� �������� �������
void Create_matrix(int **arr1, int &row1, int &col1)
{
	for (int i = 0; i < row1; i++)
	{
		arr1[i] = new int[col1];
	}
}

//������ ���'�� �������
void Clean(int **arr1, int &row1)
{
	for (int i = 0; i < row1; i++)
	{
		delete[] arr1[i];
	}
	delete[] arr1;
}

//2. ������� ���������� �������
void Fill_matrix(int **arr1, int &row1, int &col1)
{
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			arr1[i][j] = rand() % 10 + 1;
		}
	}
}

//3. ������� ������ �������
void Print_matrix(int **arr1, int &row1, int &col1)
{
	cout << "*****************************************************" << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << arr1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "******************************************************" << endl;
}

//4. ������� ���������� ������� ����� ������
void AddLastRow(int **arr1, int &row1, int &col1)
{
	int size = row1 + 1;
	int **arr2 = new int*[size];
	Create_matrix(arr2, size, col1);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (i < row1)
			{
				arr2[i][j] = arr1[i][j];
			}
			else
			{
				arr2[i][j] = 0;
			}
		}

	}

	Clean(arr1, row1);
	row1++;
	arr1 = arr2;
}

// 5. ������� ��������� � ������� ����� �� �������� �������
void DelRow(int **arr1, int &row1, int &col1)
{
	int index_del = 0;
	row1--;
	cout << "Enter row's index element delete: ";
	cin >> index_del;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (i >= index_del)
			{
				arr1[i][j] = arr1[i + 1][j];
			}
		}
	}
}

//6. ������� ������� ������ ����� �� �������� �������
void AddNewRow(int **arr1, int &row1, int &col1)
{
	int number = 0;
	int size = row1 + 1;
	int **arr2 = new int *[size];
	Create_matrix(arr2, size, col1);
	cout << "Enter the number of row do You want to add: " << endl;
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (i == number)
			{
				arr2[i][j] = 0;
			}
			else if (i < number)
			{
				arr2[i][j] = arr1[i][j];
			}
			else if (i > number)
			{
				arr2[i][j] = arr1[i - 1][j];
			}
		}
	}
	Clean(arr1, row1);
	row1++;
	arr1 = arr2;
}

// 7. ������� ���������� ������� ����� ����������
void AddLastCol(int **&arr1, int &row1, int &col1)
{
	int size = col1 + 1;
	int **arr2 = new int*[size];
	Create_matrix(arr2, row1, size);

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j < col1)
			{
				arr2[i][j] = arr1[i][j];
			}
			else
			{
				arr2[i][j] = 0;
			}
		}

	}

	Clean(arr1, row1);
	col1++;
	arr1 = arr2;

}

// 8. ������� ��������� � ������� ������� �� �������� �������
void DelCol(int **&arr1, int &row1, int &col1)
{
	int index_del = 0;
	col1--;
	cout << "Enter column's index element delete: ";
	cin >> index_del;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (j >= index_del)
			{
				arr1[i][j] = arr1[i][j + 1];
			}
		}
	}
}

// 9. ������� ������� ������ ������� �� �������� �������
void AddNewCol(int **&arr1, int &row1, int &col1)
{
	int number = 0;
	int size = col1 + 1;
	int **arr2 = new int *[size];
	Create_matrix(arr2, size, col1);
	cout << "Enter the number of column do You want to add: " << endl;
	cin >> number;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == number)
			{
				arr2[i][j] = 0;
			}
			else if (j < number)
			{
				arr2[i][j] = arr1[i][j];
			}
			else if (j > number)
			{
				arr2[i][j] = arr1[i][j - 1];
			}
		}
	}
	Clean(arr1, row1);
	row1++;
	arr1 = arr2;
}
