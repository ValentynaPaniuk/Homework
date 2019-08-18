# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	setlocale(LC_ALL, "ru");
		
	/*1.ƒана матриц€ розм≥рн≥стю 10х10, заповнена випадковими числами в д≥апазон≥ [1..50].
	«найти м≥н≥мальний елемент матриц≥ ≥ пом≥н€ти м≥сц€ми р€дки матриц≥ так щоб м≥н≥мальний елемент опинивс€ у верхньому р€дку*/


	const int row = 5;
	const int col = 5;
	int ARR[row][col];
	int ARR1[row][col];
	int ARR2[row][col];
	int ARR3[row][col];
	
	int index_i, index_j, max=50;

	//ƒана матриц€ розм≥рн≥стю 10х10, заповнена випадковими числами в д≥апазон≥ [1..50].
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ARR[i][j] = rand()%50+1;
			
		}
	}
	// ¬ив≥д матриц≥ на екран
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
	//«найти м≥н≥мальний елемент матриц≥

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
	
	//ѕом≥н€ти м≥сц€ми р€дки матриц≥ так щоб м≥н≥мальний елемент опинивс€ у верхньому р€дку

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

	//¬ив≥д зм≥неного масиву
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << ARR2[i][j] << "  ";
		}
		cout << endl;
	}



	/*2.ƒана матриц€ розм≥рн≥стю 10х10, заповнена випадковими числами в д≥апазон≥[-20..20]. 
		«найти максимальний елемент матриц≥ ≥ пом≥н€ти м≥сц€ми ще й стовпц≥ так, щоб цей елемент опинивс€ у крайньому л≥вому стовпц≥*/
	

	//ƒана матриц€ розм≥рн≥стю 10х10, заповнена випадковими числами в д≥апазон≥[-20..20]

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ARR1[i][j] = rand() % -20 + 20;

		}
	}
	// ¬ив≥д матриц≥ на екран
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
	//«найти максимальний елемент матриц≥ 

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

	//ѕом≥н€ти м≥сц€ми стовпц≥ так, щоб цей елемент опинивс€ у крайньому л≥вому стовпц≥

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
	//¬ив≥д зм≥неного масиву

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