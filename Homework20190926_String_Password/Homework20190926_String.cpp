# include <iostream>
# include <conio.h>

using namespace std;


/*1. �������� ������. �����, �� �� ����������� ���������� �����, 
���� ������ �� ������������ �������� ������� ������. 
��������� ������������ ������, ��� ����� ������������ ��������� ��������� ��������:
�. ������ ������� ���� �� ����� ����� �������.
�. ������ ������� ������ �������� ���� ������ � ���� �����.
c. ������ ������� ���� �������� ���� �����.
�������� ��������, ��� ������ ������, � ���� ��������, �� ������� ���� ���������� ��������. 
���� �� �� ���, �������� ������� ���������� �����������, ��� ��������� ������������ ����*/

int main()
{
	char password[255] = {};
	int counter[4];
	bool exit = false;

	// ����, �� ��������� ����, ���� �� ���� ��������� ������
	for (int j = 0; exit == false; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			counter[i] = 0;
		}

		// ��� ������
		cout << "Enter your password: " << endl;
		for (int i = 0; ; i++)
		{
			
			password[i]=_getch(); //����� "password" ���� �������� ��� ��������� ������
			if (int(password[i]) == 13) // ������ ��������� ���� �� ���� ������� ������ "�����"
			{
				break;
			}
		}
		// �������� ��� ���� ��������: 
		
		for (int i = 0; i < strlen(password); i++)
		{
			// �������� �� ������� ����� 6
			if (strlen(password) >= 6)
			{
				counter[0] = 1;
			}
			// �������� �� ������� �����
			if (int(password[i]) >= 97 && int(password[i]) <= 122)
			{
				counter[1] = 2;
			}
			//�������� �� ����� �����
			if (int(password[i]) >= 65 && int(password[i]) <= 90)
			{
				counter[2] = 3;
			}
			//�������� �� ��������� ����� � �����
			if (int(password[i]) >= 48 && int(password[i]) <= 57)
			{
				counter[3] = 4;
			}
		}

		// ������� �� ���������� ������
		if (counter[0] == 0)
		{
			cout << "Your passwort must have SIX letters" << endl;
		}
		if (counter[1] == 0)
		{
			cout << "Your password must have LOWERCASE letter" << endl;
		}
		if (counter[2] == 0)
		{
			cout << "Your password must have CAPITAL letter" << endl;
		}
		if (counter[3] == 0)
		{
			cout << "Your password must have NUMBER" << endl;
		}


		// �������� �������� ������
		int suma_counter = 0;
		for (int i = 0; i < 4; i++)
		{
			suma_counter += counter[i];
			if (suma_counter >= 10)
			{
				cout << "You have excellent password" << endl;
				exit = true;
			}
		}

	}
	

	system("pause");
	return 0;
}