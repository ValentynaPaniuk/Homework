# include <iostream>
using namespace std;
int main()
{
	//////////////////////////////////////////////////////////////////
	// �����������
	int i, j,k, number;
	cin >> number;

	/*for (i = 0; i < number; i++)
	{
		for (j = 0; j < number; j++)
		
		{
			cout<<"*";
		}
		cout<<endl;
	}
	///////////////////////////////////////////////////////////////
	
	// ���������
	//  *
	//  **
	//  ***
	//  ****
	//  *****


	for (i = 0; i < number; i++)
	{
		for (j = 0; j <i; j++)

		{
			cout << "*";
		}
		cout << endl;
	}
	
/////////////////////////////////////////////////////////////////////////////////////////////

	// ���������
	// *****
	// ****
	// ***
	// **
	// *
	for (i = 0; i < number; i++)
	{
		for (j = number; j > i; j--)

		{
			cout << "*";
		}
		cout << endl;
	}
//////////////////////////////////////////////////////////////////////////////////////////////

	// ���� ���� /
	//         *
	//       *
	//     *
	//   *
	// *
	

	for (i = 0; i < number; i++)
	{
		for (j = number; j > i; j--)

		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
///////////////////////////////////////////////////////////////////////////////////////////////

	// ����� ���� \
	//*
	//  *
	//    *
	//      *
	//        *
	//          *

	for (i = number; i > 0; i--)
	{
		for (j = number; j > i; j--)
		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
		
	}
	
	/////////////////////////////////////////////////////////////////////////////////////////////////
	
	// ��������� 
	//     *
	//    **
	//   ***
	//  ****
	// *****
	for (i = number; i > 0; i--)
	{
		for (j = 0; j <= number ; j++)
		{
			if (j>=i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			
		}
		cout << endl;
	}
	*/
	///////////////////////////////////////////////////////////////////////////////////////
//��������� 
// ******
//  *****
//   ****
//    ***
//     **
//      *
	for (i = 0; i < number; i++)
	{
		for (j = 0; j < number; j++)
		{
			if (i > j)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}

		}
		cout << endl;
	}
	
	




system("pause");
return 0;

}