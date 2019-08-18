# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	setlocale(LC_ALL, "ru");
		
	/*1.���� ������� ��������� 10�10, ��������� ����������� ������� � ������� [1..50].
	������ ��������� ������� ������� � ������� ������ ����� ������� ��� ��� ��������� ������� �������� � ��������� �����*/


	const int row = 5;
	const int col = 5;
	int ARR[row][col];
	int ARR1[row][col];
	int ARR2[row][col];
	int ARR3[row][col];
	
	int index_i, index_j, max=50;

	//���� ������� ��������� 10�10, ��������� ����������� ������� � ������� [1..50].
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ARR[i][j] = rand()%50+1;
			
		}
	}
	// ���� ������� �� �����
	cout << "=======ARRAY 1 START============================" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout <<ARR[i][j] <<"   ";
		}
		cout << endl;
	}
	cout << "=======ARRAY 1 END===============================" << endl;
	//������ ��������� ������� �������

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (ARR[i][j]<max)
			{
				max = ARR[i][j];
				index_i = i;
				index_j = j;
			}
			
		}
		
	}
	cout << endl;
	cout << "MIN IN ARRAY 1 : " << max << "   [" << index_i << "]   " << "   [" << index_j << "]   " << endl;
	cout << endl;
	
	//������� ������ ����� ������� ��� ��� ��������� ������� �������� � ��������� �����

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0)
				ARR2[0][j] = ARR[index_i][j];
			else if (i == index_i)
			{
				ARR2[index_i][j] = ARR[0][j];
			}
			else
			{
				ARR2[i][j] = ARR[i][j];
			}
		}
	}

	//���� �������� ������
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << ARR2[i][j] << "  ";
		}
		cout << endl;
	}



	/*2.���� ������� ��������� 10�10, ��������� ����������� ������� � �������[-20..20]. 
		������ ������������ ������� ������� � ������� ������ �� � ������� ���, ��� ��� ������� �������� � ��������� ����� �������*/
	

	//���� ������� ��������� 10�10, ��������� ����������� ������� � �������[-20..20]

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ARR1[i][j] = rand() % -20 + 20;

		}
	}
	// ���� ������� �� �����
	cout << endl;
	cout << endl;

	cout << "=======ARRAY 2 START======================" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << ARR1[i][j] << "   ";
		}
		cout << endl;
	}
	cout << "=======ARRAY 2 END=========================" << endl;
	cout << endl;
	//������ ������������ ������� ������� 

	max = 20;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (ARR1[i][j] > max)
			{
				max = ARR1[i][j];
				index_i = i;
				index_j = j;
			}

		}

	}
	
	cout << "MAX IN ARRAY 2: " << max << "   [" << index_i << "]   " << "   [" << index_j << "]   " << endl;
	cout << endl;

	//������� ������ ������� ���, ��� ��� ������� �������� � ��������� ����� �������

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j == 0)
				ARR3[i][0] = ARR1[i][index_j];
			else if (j == index_j)
			{
				ARR3[i][index_j] = ARR1[j][0];
			}
			else
			{
				ARR3[i][j] = ARR1[i][j];
			}
		}
	}
	//���� �������� ������

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << ARR3[i][j] << "   ";
		}
		cout << endl;
	}



	system("pause");
	return 0;
}