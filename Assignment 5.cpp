#include <iostream>
#include <string>
#include<cstdlib>
#include <ctime>
using namespace std;


int rollDie();

void printDie();
void rollDnD();


double choice;



int main()
{
	
	rollDie();

system("pause");
return 0;
}








int rollDie()
{
	do
	{
		cout << "would you like to play Yahtzee, or D and D?" << endl;
		cout << "for Yahtzee enter 1 " << endl;
		cout << "for D and D enter 2 " << endl;
		cout << "for Quit enter 3 " << endl;
		cin >> choice;
	


	int yatzee = 1, dnD = 2;



	if (choice == yatzee)
	{
		int dicee1, dicee2, dicee3, dicee4, dicee5;
		

		dicee1 = rand() % 6 + 1;
		dicee2 = rand() % 6 + 1;
		dicee3 = rand() % 6 + 1;
		dicee4 = rand() % 6 + 1;
		dicee5 = rand() % 6 + 1;
		printDie();
	}

	else if (choice == dnD)
	{

		int die4, die8, die12, die20;
		

		die20 = rand() % 20 + 1;
		die12 = rand() % 12 + 1;
		die8 = rand() % 8 + 1;
		die4 = rand() % 4 + 1;
		rollDnD();
	}
	
	} while (choice > 3 || choice < 3);
	return choice;
}





void printDie()
{
	int dicee1, dicee2, dicee3, dicee4, dicee5;
	

	dicee1 = rand() % 6 + 1;
	dicee2 = rand() % 6 + 1;
	dicee3 = rand() % 6 + 1;
	dicee4 = rand() % 6 + 1;
	dicee5 = rand() % 6 + 1;
	


		cout << "________" << endl;
		cout << "|       |" << endl;
		cout << "|   "<< dicee1 <<"   |" << endl;
		cout << "|       |" << endl;
		cout << " -------" << endl;
		
		cout << "________" << endl;
		cout << "|       |" << endl;
		cout << "|   " << dicee2 << "   |" << endl;
		cout << "|       |" << endl;
		cout << " -------" << endl;

		cout << "________" << endl;
		cout << "|       |" << endl;
		cout << "|   " << dicee3 << "   |" << endl;
		cout << "|       |" << endl;
		cout << " -------" << endl;

		cout << "________" << endl;
		cout << "|       |" << endl;
		cout << "|   " << dicee4 << "   |" << endl;
		cout << "|       |" << endl;
		cout << " -------" << endl;

		cout << "________" << endl;
		cout << "|       |" << endl;
		cout << "|   " << dicee5 << "   |" << endl;
		cout << "|       |" << endl;
		cout << " -------" << endl;
	
}



void rollDnD()
{
	int die4, die8, die12, die20;
	

	die20 = rand() % 20 + 1;
	die12 = rand() % 12 + 1;
	die8 = rand() % 8 + 1;
	die4 = rand() % 4 + 1;


	cout << "_________" << endl;
	cout << "|        |" << endl;
	cout << "|   " << die20 << "   |" << endl;
	cout << "|        |" << endl;
	cout << " --------" << endl;

	cout << "_________" << endl;
	cout << "|        |" << endl;
	cout << "|   " << die12 << "   |" << endl;
	cout << "|        |" << endl;
	cout << " --------" << endl;

	cout << "_________" << endl;
	cout << "|        |" << endl;
	cout << "|   " << die8 << "   |" << endl;
	cout << "|        |" << endl;
	cout << " --------" << endl;

	cout << "_________" << endl;
	cout << "|        |" << endl;
	cout << "|   " << die4 << "   |" << endl;
	cout << "|        |" << endl;
	cout << " --------" << endl;
}