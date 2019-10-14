# include <iostream>
# include <conio.h>

using namespace std;


/*1. Перевірка паролів. Уявіть, що ви розробляєте програмний пакет, 
який вимагає від користувачів введення власних паролів. 
Програмне забезпечення вимагає, щоб паролі користувачів відповідали наступним критеріям:
а. Пароль повинен бути не менше шести символів.
б. Пароль повинен містити принаймні одну велику і малу літери.
c. Пароль повинен мати принаймні одну цифру.
Напишіть програму, яка запитує пароль, а потім перевіряє, чи відповідає вона зазначеним критеріям. 
Якщо це не так, програма повинна відображати повідомлення, яке повідомляє користувачеві чому*/

int main()
{
	char password[255] = {};
	int counter[4];
	bool exit = false;

	// Цикл, що спрацьовує доти, поки не буде безпечний пароль
	for (int j = 0; exit == false; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			counter[i] = 0;
		}

		// Ввід паролю
		cout << "Enter your password: " << endl;
		for (int i = 0; ; i++)
		{
			
			password[i]=_getch(); //Змінній "password" буде присвоєно код натиснутої клавіші
			if (int(password[i]) == 13) // Пароль вводиться поки не буде введено клавішу "Ентер"
			{
				break;
			}
		}
		// Перевірка всіх умов завдання: 
		
		for (int i = 0; i < strlen(password); i++)
		{
			// Перевірка чи довжина більша 6
			if (strlen(password) >= 6)
			{
				counter[0] = 1;
			}
			// Перевірка на маленькі літери
			if (int(password[i]) >= 97 && int(password[i]) <= 122)
			{
				counter[1] = 2;
			}
			//Перевірка на великі літери
			if (int(password[i]) >= 65 && int(password[i]) <= 90)
			{
				counter[2] = 3;
			}
			//Перевірка на наявеність чисел в паролі
			if (int(password[i]) >= 48 && int(password[i]) <= 57)
			{
				counter[3] = 4;
			}
		}

		// Причини не відповідності паролю
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


		// Перевірка надійності паролю
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