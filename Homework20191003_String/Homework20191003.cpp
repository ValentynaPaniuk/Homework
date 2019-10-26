# include <iostream>
# include <ctime>
# include <stdio.h> 


using namespace std;

/*1. Дана строка, состоящая из  слов, набранных заглавными буквами и разделенных "_". 
Найти количество слов, которые содержат хотя бы одну букву «А».

2. Дано рядок, написаний маленькими літерами. Замінити всі маленькі літери на великі.

3. Дана строка, содержащая полное имя файла, то есть имя диска, список каталогов (путь), собственно имя и расширение.
Выделить из этой строки имя файла (без расширения).*/

int main()
{
	/*1. Дана строка, состоящая из  слов, набранных заглавными буквами и разделенных "_". 
Найти количество слов, которые содержат хотя бы одну букву «А».*/
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
	
	
	//НЕ ПРАЦЮЄ КОРЕКТНО!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//2. Дано рядок, написаний маленькими літерами. Замінити всі маленькі літери на великі.
	cout << "\nExercice 2: " << endl;
	char sentence[255];
	
	cin >> sentence;
	int Size = 0;

	char *sentence_ = new char[Size];

	for (int i = 0; i <= strlen(sentence); i++)
	{
		if (int(sentence[i]) >= 97 && int(sentence[i]) <= 122)
		{
			
			sentence_[i] = (int (sentence[i]) - 32);
			Size++;
		}
	}
		
	for (int i = 0; i < Size; i++)
	{
		cout << sentence_[i];
	}
	cout << endl;



	/*3. Дана строка, содержащая полное имя файла, то есть имя диска, список каталогов(путь), собственно имя и расширение.
		Выделить из этой строки имя файла(без расширения).*/

	char letter[255] = { 'D',':','/','M','y','_','f','i','l','e','/','D','o','c','.','t','x','t' };
	cout << "*********** Before ***********************" << endl;
	cout << letter <<endl;
	
	
	cout << "\n**********************************" << endl;
	// Шукаємо скільки разів зустрічається знак "/"
	int coordsSize = 0;
	int coordsCounter = 0;
	for (int i =0; i< strlen(letter); i++)
	{
		if (int(letter[i]) == 47)
		{
			coordsSize++;
		}
		
	}
	// Створюємо динамічний масив для збереження координат знаку "/"
	int *coords = new int[coordsSize];

	for (int i = 0; i < strlen(letter); i++)
	{
		if (int(letter[i]) == 47)
		{
			coords[coordsCounter] = i;
			coordsCounter++;
		}
	}
	cout << endl;
	int sleg;
	// Виводимо масив з координатами знаку "/"
	for (int i = 0; i < coordsCounter; i++)
	{
		cout << "Sleg = >>" << coords[i] << endl;
		sleg = coords[i];
	}

	
	// Шукаємо скільки разів зустрічається знак "."
	int coordsSize_ = 0;
	int coordsCounter_ = 0;
	for (int i =0; i< strlen(letter); i++)
	{
		if (int(letter[i]) == 46)
		{
			coordsSize_++;
		}

	}
	
	// Створюємо динамічний масив для збереження координат знаку "."
	int *coords_ = new int[coordsSize_];

	for (int i = 0; i < strlen(letter); i++)
	{
		if (int(letter[i]) == 46)
		{
			coords_[coordsCounter_] = i;
			coordsCounter_++;
		}
	}
	cout << endl;
	
	// Виводимо масив з координатами знаку "."
	int krapka;
	for (int i = 0; i < coordsCounter_; i++)
	{
		cout <<" Krapka =>    " << coords_[i] << endl;
		krapka = coords_[i];
	}
	
	cout << "\n============= RESULT =======================" << endl;

	if (sleg < krapka)
	{
		for (int i = sleg + 1; i <= krapka - 1; i++)
		{
			cout <<letter[i];
			
		}
		cout << endl;
		
	}
	else
	{
		cout << "Enter the file path correctly!" << endl;
	}

	delete[] coords;
	coords = nullptr;
	delete[] coords_;
	coords_ = nullptr;


	

	system("pause");
	return 0;

}