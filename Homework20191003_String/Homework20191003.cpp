# include <iostream>
# include <ctime>
# include <stdio.h> 


using namespace std;

/*1. ���� ������, ��������� ��  ����, ��������� ���������� ������� � ����������� "_". 
����� ���������� ����, ������� �������� ���� �� ���� ����� ���.

2. ���� �����, ��������� ���������� �������. ������� �� ������� ����� �� �����.

3. ���� ������, ���������� ������ ��� �����, �� ���� ��� �����, ������ ��������� (����), ���������� ��� � ����������.
�������� �� ���� ������ ��� ����� (��� ����������).*/

int main()
{
	/*1. ���� ������, ��������� ��  ����, ��������� ���������� ������� � ����������� "_". 
����� ���������� ����, ������� �������� ���� �� ���� ����� ���.*/
	cout << "Exercice 1: " << endl;
	char text[255] = {};
	int counter = 0;
	cout << "Enter sentence: " << endl;
	cin>>text;

	for (int i = 0; i < strlen(text); i++)
	{
		
		
		if (int(text[i]) >= 65 && int(text[i]) <= 90 || int(text[i]) >= 97 && int(text[i]) <= 122 || int(text[i-1]) == 95)
		{
			if (int(text[i]) == 65 || int(text[i]) == 97)
			{
				cout << text[i] << " ";
				counter++;
				if (counter==2)
				{
					break;
				}
			}
		}
		
		
	}
	cout << "SUMMA =" <<counter << endl;
	
	
	//�� ����ު ��������!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//2. ���� �����, ��������� ���������� �������. ������� �� ������� ����� �� �����.
	/*cout << "\nExercice 2: " << endl;
	char sentence[] = { 255 };
	
	cin >> sentence;

	for (int i = 0; i <= strlen(sentence); i++)
	{
		if (int(sentence[i]) >= 97 && int(sentence[i]) <= 122)
		{
			
			sentence[i] = int (sentence[i]) - 32;
		}
	}

	
	
	for (int i = 0; i < strlen(sentence); i++)
	{
		cout << "i = "<< i <<"  "<< sentence[i];
		cout << endl;
	}
	cout << endl;*/

	/*3. ���� ������, ���������� ������ ��� �����, �� ���� ��� �����, ������ ���������(����), ���������� ��� � ����������.
		�������� �� ���� ������ ��� �����(��� ����������).*/

	char letter[255] = { 'D',':','/','M','y','_','f','i','l','e','/','D','o','c','.','t','x','t'};
	cout << "*********** Before ***********************" << endl;
	cout << letter << endl;

	int size = 0;
	int *arrFlag = new int[size];

	for (int i = 0; i < strlen(letter); i++)
	{
		if (int(letter[i]) == 47 || int(letter[i]) == 46)
		{
			int *newArrFlag = new int[size + 1];
			for (int j = 0; j < size; j++)
			{
				newArrFlag[j] = arrFlag[j];
			}
			newArrFlag[size] = i;
			
			delete[] arrFlag;
			size++;
			arrFlag = newArrFlag;
		}
	}

	cout << endl;

	char arr[255] = {};
	int counter1 = 0;

	for (int i = 0; i < strlen(letter); i++)
	{
		if (i - 1 >= arrFlag[size - 2] && i + 1 <= arrFlag[size - 1])
		{
			arr[counter1] = letter[i];

			counter1++;
		}
	}
	cout << endl;


	
	
	cout << "*********** After ***********************" << endl;

	for (int i = 0; i < strlen(arr); i++)
	{
		cout << arr[i];
	}
	cout << endl;

	system("pause");
	return 0;

}