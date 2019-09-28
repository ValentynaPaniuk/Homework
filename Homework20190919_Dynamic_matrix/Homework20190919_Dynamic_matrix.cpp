# include <iostream>
# include <ctime>
using namespace std;


//2. ������� ���������� �������
void Fill_matrix(int &row1, int &col1, int **arr1)
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
void Print_matrix(int &row1, int &col1, int **arr1)
{
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << arr1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "*****************************************************************" << endl;
}

//4. ������� ���������� ������� ����� ������
void AddLastRow(int **arr1, int &row1, int &col1)
{
	int k = 1;
	int **arr2 = new int*[row1 + 1];

	for (int i = 0; i < row1 + k; i++)
	{
		arr2[i] = new int[col1];
	}

	for (int i = 0; i < row1 + k; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (i < row1)
			{
				arr2[i][j] = arr1[i][j];
			}
			else
			{
				arr2[i][j] = k;
			}
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < row1; i++)
	{
		delete[] arr2[i];
	}

	delete[] arr2;
}

// 5. ������� ��������� � ������� ����� �� �������� �������

void DelRow(int **arr1, int &row1, int &col1)
{
	int index_del = 0;
	int iterator = 0;
	int **arr2 = new int *[row1 + 1];
	//-----------------------------------------------
	
		cout << "Enter row's index element delete: ";
		cin >> index_del;
	

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			arr2[i] = new int[col1];
		}
	}

	
	for (int i = 0; i < row1-1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			arr2[i][j] = arr1[i][j];
			if (i >= index_del) 
			{
				
				arr2[i][j] = arr1[i + 1][j];
			}
	
		}
	}
	
	row1--;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}
//�� ������� ����� ������� Print????????????????????????????????????????????

	for (int i = 0; i < row1; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;
}
//================================================================================================
//6. ������� ������� ������ ����� �� �������� �������
void AddNewRow(int **arr1, int &row1, int &col1)
{
	int **arr2 = new int*[row1 + 1];
	for (int i = 0; i < row1 + 1; i++)
	{
		arr2[i] = new int[col1];
	}

	int number;
	cout << "Enter the number of row do You want to add: " << endl;
	cin >> number;

	for (int i = 0; i <= row1+1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			
			if (i < number)
			{
				arr2[i][j] = arr1[i][j];
			}
			else if(i>number)
			{
				arr2[i][j] = arr1[i-1][j];
				
			}
			else if (i==number)
			{
				arr2[i][j] = 0;
			}
			
			cout << arr2[i][j] << "\t";
			
		}
		
		cout << endl;
	}
	
	
	/*for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}*/

	

	for (int i = 0; i < row1; i++)
	{
		delete[] arr2[i];
	}

	delete[] arr2;

}

// 7. ������� ���������� ������� ����� ����������
// 8. ������� ��������� � ������� ������� �� �������� �������
// 9. ������� ������� ������ ������� �� �������� �������

int main()
{

	srand(unsigned(time(NULL)));


	int col, row;
	cout << "Enter matrix size: [row fierst] " << endl;
	cin >> row >> col;
	cout << "**************************************" << endl;
	// �������� �� ���������
	int **arr = new int *[row];
	//�������� �� ����� �����
	for (int i = 0; i < row; i++) {
		{
			arr[i] = new int[col];
		}
	}
	//��������� ������� ������
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
	}
	//������ ������� �� �����
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	// �������� �������� �� �������

	for (int i = 0; i < row; i++) {

		delete[] arr[i];
	}

	// �������� �������� �� ���������

	delete[] arr;
	arr = nullptr;

	//====================================================================================================================================================================================
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


/*1. ������� ��������� �������� ������� ������� row x col, �� row �� col - ��������� �������. 
	������� ������� ������ �������� ������� (��� ������ ������� ���������� �� ������).*/

	int col1 = 0, row1 = 0;
	cout << "Enter the number of rows of the matrix: " << endl;
	cin >> row1;
	cout << "Enter the number of colomns of the matrix: " << endl;
	cin >> col1;
	cout << "---------------------------------------------------------------------------" << endl;

	int **arr1 = new int *[row1];

	for (int i = 0; i < row1; i++)
	{
		arr1[i] = new int[col1];
	}


	//========================================================================================
	Fill_matrix(row1, col1, arr1);
	Print_matrix(row1, col1, arr1);
	AddLastRow(arr1, row1, col1);


	DelRow(arr1, row1, col1);

	AddNewRow(arr1, row1, col1);

	
	//====================================================================================================

	for (int i = 0; i < row1; i++)
	{
		delete[] arr1[i];
	}
	delete[] arr1;
	arr1 = nullptr;


	system("pause");
	return 0;
}