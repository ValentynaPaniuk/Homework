# include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	int cub_man = 0, cub_comp = 0, cub_man1=0, cub_comp1=0, summa_man=0, summa_comp=0, summa_man1=0, summa_comp1=0, i = 1, y = 6, k=1;
	cout << "choose who will throw the cube first: " << endl;
	cout << "Åhrow a cube once each."<<endl;
	cout<<"Who will have more number - that starts the first!" << endl;
	

		cout << "Man throws a cube" << endl;
		system("cls");
		cub_man = rand() % 6;
		cout << "Man's number-> " << cub_man;
		cub_comp = rand() % 6;
		cout << endl;
		cout << "Computer number->" << cub_comp;
		cout << endl;
		if (cub_man > cub_comp)

		{
			cout << "The first MAN begins!" << endl;
			cout << "Congratulations! We start the game !!!" << endl;
			cout << endl;
			cout << "**********************************************************" << endl;
			cout << endl;
			for (i; i <= y; i++)
			{
				cub_man1 = rand() % 6;
				cout <<"A man throws a cube for the "<<i<< " time " <<cub_man1<<endl;
				summa_man1 += cub_man1;
			}
			cout << endl;
			cout << "***********************************************************" << endl;
			cout << endl;
			for (k; k <= y; k++)
			{
				cub_comp1 = rand() % 6;
				cout << "A COMPUTER throws a cube for the " << k << " time: " << cub_comp1 << endl;
				summa_comp1 += cub_comp1;
			}
			cout << endl;
			cout << "*************************************************************" << endl;
			cout << endl;
			cout << "the sum of the numbers of the MAN: " <<summa_man1<< endl;
			cout << "the sum of the numbers of the COMPUTER: " <<summa_comp1<< endl;
			if (summa_man1 > summa_comp1)
			{
				cout << endl;
				cout << "****** THE MAN IS WINNER *************" << endl;
				cout << endl;
			}
			else if (summa_man1 < summa_comp1)
			{
				cout << endl;
				cout << "****** COMPUTER IS WINNER *************" << endl;
				cout << endl;
			}
			else if (summa_man1 == summa_comp1)
			{
				cout << "Drop the cube again!" << endl;
			}
		}
		else if (cub_man < cub_comp)
		{
			cout << endl;
			cout << "The first COMPUTER starts!" << endl;
			cout << "Congratulations! We start the game !!!" << endl;
			cout << endl;
			cout << "*************************************************************" << endl;
			cout << endl;
			for (k; k <= y; k++)
			{
				cub_comp1 = rand() % 6;
				cout << "A COMPUTER throws a cube for the " << k << " time: " << cub_comp1 << endl;
				summa_comp1 += cub_comp1;
			}
			cout << endl;
			cout << "*************************************************************" << endl;
			cout << endl;
			for (i; i <= y; i++)
			{
				cub_man1 = rand() % 6;
				cout << "A man throws a cube for the " << i << " time: " << cub_man1 << endl;
				summa_man1 += cub_man1;
			}
			cout << endl;
			cout << "********************************************************************" << endl;
			cout << endl;
			cout << "the sum of the numbers of the COMPUTER: " << summa_comp1 << endl;
			cout << "the sum of the numbers of the MAN: " << summa_man1 << endl;
			if (summa_man1 > summa_comp1)
			{
				cout << endl;
				cout << "****** THE MAN IS WINNER *************" << endl;
				cout << endl;
			}
			else if (summa_man1 < summa_comp1)
			{
				cout << endl;
				cout << "****** COMPUTER IS WINNER *************" << endl;
				cout << endl;
			}
			else if (summa_man1 == summa_comp1)
			{
				cout << endl;
				cout << "Drop the cube again!" << endl;
				cout << endl;
			}
		}
		else if (cub_man == cub_comp)
		{
			cout << endl;
			cout << "*****************************************************************************" << endl;
			cout << "Drop the cube again" << endl;
			cout << "*****************************************************************************" << endl;
			cout << endl;
		}

	

		
	

	system("pause");
return 0;

}