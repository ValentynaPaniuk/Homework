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
			
			sentence[i] = sentence[i] - 32;
		}
	}
	cout << sentence;
	cout << endl;*/

	/*3. ���� ������, ���������� ������ ��� �����, �� ���� ��� �����, ������ ���������(����), ���������� ��� � ����������.
		�������� �� ���� ������ ��� �����(��� ����������).*/

	char letter[255] = { 'D',':','/','M','y','_','f','i','l','e','/','D','o','c','.','t','x','t'};
	cout << letter << endl;

	for (int i = 0; i < strlen(letter); i++)
	{
		for(int j= strlen(letter); j>0; j++)
		if (int(letter[i - 1]) == 47 && int(letter[j]) == 46)
		{
			cout << letter[i];
		}
	}



	system("pause");
	return 0;

}