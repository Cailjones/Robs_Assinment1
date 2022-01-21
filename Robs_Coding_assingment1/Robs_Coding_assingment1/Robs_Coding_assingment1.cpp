// Robs_Coding_assingment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	string adveturesName, YesOrNO, Choice;
	bool again = true;// to allow the progrmam to rename the charactor

	cout << "-----------------\n";//title
	cout << "-Adventure-Quest-\n";//title
	cout << "-----------------\n";//title
	
	cout << "What's your advetures name?\n";//Characters neme being collected
	cin >> adveturesName;//Charaters name Input

	cout << "would you like to continue with" << adveturesName << " as your name? y/n";//Asking if the namme they put in is correct
	cin >> YesOrNO;//Answer y/n

	while(again);
	{


		if (YesOrNO == "y" || YesOrNO == "Y")
		{
			cout << "lets continue Shall we\n";// continues with the progeamm after the loop
			again = true;
			return 0;
		}
		else if (YesOrNO == "N" || YesOrNO == "n")
		{

			again = false;
			return again;
		}
	}
	

}

	

