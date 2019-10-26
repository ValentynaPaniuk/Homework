# include <iostream>
# include <ctime>
# include <string>
# include <fstream>

using namespace std;

int main()
{
	/*Дано текстовий файл з .cpp програмою.
		Видалити з файлу однорядкові коментарі(утворити новий файл без коментарів). */
	
	string path = "database.txt";
	ifstream fin;
	fin.open(path);



	if (!fin.is_open())
	{
		cout << "Error" << endl;
	}
	else
	{
		cout << "Opened!" << endl;
		
		
	}

	string arr[10];
	string data;
	int size = 0;
	int i = 0;
	char ch;
	char arr1[100];
	for (int i = 0; i < 10; i++)
	{
		fin >> data;
		cout << data << endl;
		getline(fin, data);
		arr[i] = data;
		size++;

	}
	cout << endl;
	fin.close();

	cout << "Size= " << size << endl;
	



	

	ofstream fout;
	string newPath = "database1.txt";
	fout.open(newPath, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Error" << endl;
	}
	else
	{
		cout << "Opened!" << endl;
	}
	
	fout.close();

	system("pause");
	return 0;
}
