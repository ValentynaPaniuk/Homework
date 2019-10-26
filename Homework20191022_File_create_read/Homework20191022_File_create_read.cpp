# include <iostream>
# include <ctime>
# include <string>
# include <fstream> //бібліотека fstream
#include <cstdlib>


using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	
	/*string path = "bd.txt";
	// ofstream - для запису даних у файл
	ifstream fin; //об'єкт fin типу ifstream (відкриває файл або не відкриває)
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Error!!! " << endl;
	}
	else
	{
		cout << "Opened!!! " << endl;
		
		
		//char ch;
		//while (fin.get(ch)) // Об'єкт fin має метод get, який зчитує текст посимвольно
		//{
		//	cout<<ch;
		//}

	}
		
	string text;
	char arr[50];
	string arrive[2];
	int i = 0;
	while (!fin.eof()) //об'єкт fin має метод eof, який відслідковує кінець файлу (Файл працює поки не наступить кінець файлу)
	{
		text = ""; //Стираємо попереднє значення змінної в циклі (щоб в кінці не повторювались дані)
		//========================================================================================
		// МЕТОД, ЩО ЗЧИТУЄ ПОСИМВОЛЬНО. Дістаємо рядки з об'єкту fin. Зчитування йде до першого пробілу (тобто по словах з переносом на інший рядок)
		//fin >> text; 
		//cout << text;

		//===================================================================================
		// МЕТОД, ЩО ЗЧИТУЄ ПОРЯДКОВО. Метод getline бере два параметри: дані з об'єкту fin  і записує в змінну text. fin, text - парамерти. 
		getline(fin, text);
		arrive[i] = text;
		cout << text << endl;
		i++;


		//===================================================================================
		// МЕТОД, ЩО ЗЧИТУЄ ПОРЯДКОВО. Метод getline бере два параметри: масив чарів arr і кількість символів в масиві.
		// Не зручно працювати з типом string. Це має бути масив типу char.
		//fin.getline(arr, 50);
		//cout << arr;


	}

	fin.close();
	cout << "\n===========================================" << endl;

	
	cout << "********** ARRIVE PRINT: ********************" << endl;
	for (int i = 0; i < 2; i++)
	{
		cout <<"arr["<< i <<"] = " <<arrive[i] << endl;
	}
	cout << endl;
	
	string password;
	string login;
	bool exit = false;

	
	while (!exit)
	{
		cout << "Enter login: " << endl;
		cin >> login;
		cout << "Enter password: " << endl;
		cin >> password;

		//Перевірка на відповідність логіну і паролю
		for (int i = 0; i < 2; i++)
		{
			
			if (arrive[i] == login && arrive[i + 1] == password)
			{
				cout << "It's correct! Congratulations!" << endl;
				exit = true;
				break;
			}
			else
			{
				cout << "Try againe " << endl;
				break;
			}
		}

		//Якщо він є admin то вивести: це є адмін
		for (int i = 0; i < 2; i++)
		{
			if (arrive[i] == login && arrive[i + 1] == password)
			{
				cout << "You are the administration" << endl;
				break;
			}
			else
			{
				cout << "You are not the administration" << endl;
				break;

			}
		}
	
	}
	*/
	
	/*1. Фільтр файлу шифрування.Шифрування файлів - це наука про запис вмісту файлу в секретний код.
Ваша програма шифрування повинна працювати як фільтр, читаючи вміст одного файлу, змінюючи дані в код,
а потім записувати кодований вміст у другий файл.Другий файл буде версією першого файлу, але записаний у секретному коді.
Хоча існують складні методи шифрування, вам слід придумати простий власний.Наприклад, ви можете прочитати перший файл
по одному символу і додайте 10 до коду ASCII кожного символу до того, як він буде записаний у другий файл.*/

	string address = "bd1.txt";
	ifstream fin1; //об'єкт fin1 типу ifstream (відкриває файл або не відкриває)
	fin1.open(address);

	if (!fin1.is_open())
	{
		cout << "Error!!! " << endl;
	}
	else
	{
		cout << "Opened!!! " << endl;
	}

	
	char arr1[50];
	string arrive1[20];
	string text1;
	int i_ = 0;
	
	
	while (!fin1.eof()) //об'єкт fin має метод eof, який відслідковує кінець файлу (Файл працює поки не наступить кінець файлу)
	{
		//arr1[50] = ""; //Стираємо попереднє значення змінної в циклі (щоб в кінці не повторювались дані)
		//========================================================================================
		// МЕТОД, ЩО ЗЧИТУЄ ПОСИМВОЛЬНО. Дістаємо рядки з об'єкту fin. Зчитування йде до першого пробілу (тобто по словах з переносом на інший рядок)
		//fin1 >> text1; 
		//cout << text1;

		//===================================================================================
		// МЕТОД, ЩО ЗЧИТУЄ ПОРЯДКОВО. Метод getline бере два параметри: дані з об'єкту fin  і записує в змінну text. fin, text - парамерти. 
		getline(fin1, text1);
		arrive1[i_] = text1;
		cout << text1 << endl;
		i_++;


		//===================================================================================
		// МЕТОД, ЩО ЗЧИТУЄ ПОРЯДКОВО. Метод getline бере два параметри: масив чарів arr і кількість символів в масиві.
		// Не зручно працювати з типом string. Це має бути масив типу char.
		/*fin1.getline(arr1, 50);
		cout << arr1<<"\n";*/
		

	}

	fin1.close();

	cout << "Text to encryption: " << endl;
	cout << "\n=========================================================" << endl;
	int size = 0;

	string *arr2 = new string[size];
	for (int i = 0; i<20; i++)
	{
		cout << arrive1[i] <<"\n" ;
		size++;
	}
	cout << "\n=========================================================" << endl;
	
	
	// Шифрування тексту	 
	for (int i = 0; i < size; i++)
	{
		arr2[i] = atoi(arrive1[i].c_str()) + 12;
		
	}
	cout << "Text after encryption: " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << arr2[i]<<"\n";
	}
	cout << "\n=========================================================" << endl;
	   	 
	// Перезапис в іншу базу даних
	ofstream fout;
	string path1 = "bd3.txt";
	fout.open(path1, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Error!!!! " << endl;
	}
	else
	{
		cout << "Open file! " << endl;

		
	}

	for (int i = 0; i < 20; i++)
	{
		fout << arrive1;
	}
	cout << endl;


	fout.close();

	system("pause");
	return 0;
}


