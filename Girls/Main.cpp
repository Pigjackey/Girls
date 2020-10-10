#include <iostream>
#include "Dorm.h"

using namespace std;

int main()
{
	Dorm* dptr = new Dorm();
	string input;
	bool isDone = false;

	dptr->addGirl("Anna Brown 19 70");

	cout << "Enter girls formatted \"Name Hair-Color Age Height\" pressing enter after each. Enter 0 to end." << endl;
	while (isDone == false)
	{
		getline(cin, input);
		if (input == "0")
		{
			isDone = true;
		}
		else
		{
			dptr->addGirl(input);
		}
	}
	cout << endl;

	dptr->listGirls();

	dptr->selectPrime();

	system("pause");
	return 0;
}