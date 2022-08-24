#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

string Salsas[5];
int sales[5];
int  HighSail = 0, HighCase, LowerSail = 0, LowerCase;

int main()
{

	Salsas[0] = "Mild", Salsas[1] = "Medium"; Salsas[2] = "Sweet"; Salsas[3] = "hot"; Salsas[4] = "Zesty";
	int total = 0;
	for (int Types = 0; Types <= 4; Types++)
	{
		cout << "Enter number of sold " << Salsas[Types] << " jars: ";
		cin >> sales[Types];
		total = total + sales[Types];
		if (Types == 0)
		{ HighSail = sales[Types]; HighCase = Types; LowerSail = sales[Types]; LowerCase = Types; }//Action
		else if (HighSail<sales[Types])//action
		{ HighSail = sales[Types]; HighCase = Types; }
		if (LowerSail>sales[Types]) //action
		{ LowerSail = sales[Types]; LowerCase = Types; }
	}

	cout << " Sold salsas:"<<endl;
	for (int Price = 0; Price <= 4; Price++)
	{
		cout << sales[Price] << " " << Salsas[Price] << " jars" << endl;
	}

	cout << "Total sales: " << total << " jars";
	cout << "Highest sales: " << HighCase << " (" << Salsas[HighCase] << " Salsa)" << endl;
	cout << "Lowest sales: " << LowerCase << " (" << Salsas[LowerCase] << " Salsa)" << endl;
	system("pause>0");
}
