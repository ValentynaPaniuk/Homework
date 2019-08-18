# include <iostream>
using namespace std;
int main()
{
	//******************************************************************************************
	float price, time, cost;
	cout << "Enter price 1 minute: " << endl;
	cin >> price;
	cout << "Enter the length of the conversation in minutes: " << endl;
	cin >> time;
	cost = price * time;
	cout << "The cost of the call is: "<<cost << endl;
	//*******************************************************************************************

	const float gas=8, price1=30, km=100;
	float way;
	cout << "Enter the length of the road in kilometers: " << endl;
	cin >> way;
	float cost1 = (way / km)*gas*price1;
	cout << "The cost of gasoline is"<<cost1 <<" grn"<< endl;
	system("pause");
	return 0;
}