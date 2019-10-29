# include <iostream>
# include <ctime>
# include <stdio.h> 


using namespace std;

/*1. Äàíà ñòðîêà, ñîñòîÿùàÿ èç  ñëîâ, íàáðàííûõ çàãëàâíûìè áóêâàìè è ðàçäåëåííûõ "_". 
Íàéòè êîëè÷åñòâî ñëîâ, êîòîðûå ñîäåðæàò õîòÿ áû îäíó áóêâó «À».

2. Äàíî ðÿäîê, íàïèñàíèé ìàëåíüêèìè ë³òåðàìè. Çàì³íèòè âñ³ ìàëåíüê³ ë³òåðè íà âåëèê³.

3. Äàíà ñòðîêà, ñîäåðæàùàÿ ïîëíîå èìÿ ôàéëà, òî åñòü èìÿ äèñêà, ñïèñîê êàòàëîãîâ (ïóòü), ñîáñòâåííî èìÿ è ðàñøèðåíèå.
Âûäåëèòü èç ýòîé ñòðîêè èìÿ ôàéëà (áåç ðàñøèðåíèÿ).*/

int main()
{
	/*1. Äàíà ñòðîêà, ñîñòîÿùàÿ èç  ñëîâ, íàáðàííûõ çàãëàâíûìè áóêâàìè è ðàçäåëåííûõ "_". 
Íàéòè êîëè÷åñòâî ñëîâ, êîòîðûå ñîäåðæàò õîòÿ áû îäíó áóêâó «À».*/
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
	
	
	//ÍÅ ÏÐÀÖÞª ÊÎÐÅÊÒÍÎ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//2. Äàíî ðÿäîê, íàïèñàíèé ìàëåíüêèìè ë³òåðàìè. Çàì³íèòè âñ³ ìàëåíüê³ ë³òåðè íà âåëèê³.
	
	cout << "\nExercice 2: " << endl;
	char sentence[255];

	cin >> sentence;
	

	char *sentence_ = new char[strlen(sentence)];

	for (int i = 0; i <= strlen(sentence); i++)
	{
		if (int(sentence[i]) >= 97 && int(sentence[i]) <= 122)
		{
			
			sentence_[i] = (int(sentence[i]) - 32);

		}
	}

	for (int i = 0; i < strlen(sentence); i++)
	{
		cout << sentence_[i];
	}
	cout << endl;

	delete[] sentence_;
	sentence_=nullptr;


	/*3. Äàíà ñòðîêà, ñîäåðæàùàÿ ïîëíîå èìÿ ôàéëà, òî åñòü èìÿ äèñêà, ñïèñîê êàòàëîãîâ(ïóòü), ñîáñòâåííî èìÿ è ðàñøèðåíèå.
		Âûäåëèòü èç ýòîé ñòðîêè èìÿ ôàéëà(áåç ðàñøèðåíèÿ).*/

	char letter[255] = "D:/My_file/Doc.txt";
	cout << "*********** Before ***********************" << endl;
	cout << letter <<endl;
	
	
	
	cout << "\n**********************************" << endl;
	// Øóêàºìî ñê³ëüêè ðàç³â çóñòð³÷àºòüñÿ çíàê "/"
	int coordsSize = 0;
	int coordsCounter = 0;
	for (int i =0; i< strlen(letter); i++)
	{
		if (int(letter[i]) == 47)
		{
			coordsSize++;
		}
		
	}
	// Ñòâîðþºìî äèíàì³÷íèé ìàñèâ äëÿ çáåðåæåííÿ êîîðäèíàò çíàêó "/"
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
	// Âèâîäèìî ìàñèâ ç êîîðäèíàòàìè çíàêó "/"
	for (int i = 0; i < coordsCounter; i++)
	{
		cout << "Sleg = >>" << coords[i] << endl;
		sleg = coords[i];
	}

	
	// Øóêàºìî ñê³ëüêè ðàç³â çóñòð³÷àºòüñÿ çíàê "."
	int coordsSize_ = 0;
	int coordsCounter_ = 0;
	for (int i =0; i< strlen(letter); i++)
	{
		if (int(letter[i]) == 46)
		{
			coordsSize_++;
		}

	}
	
	// Ñòâîðþºìî äèíàì³÷íèé ìàñèâ äëÿ çáåðåæåííÿ êîîðäèíàò çíàêó "."
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
	
	// Âèâîäèìî ìàñèâ ç êîîðäèíàòàìè çíàêó "."
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
