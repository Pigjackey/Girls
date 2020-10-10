#include "Dorm.h"

inline bool isInteger(const string & s)
{
	if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;

	char * p;
	strtol(s.c_str(), &p, 10);

	return (*p == 0);
}
bool alreadyThere(string info, vector <Girl*> girlVec)
{
	bool test = false;

	for (int i = 0; i < girlVec.size(); i++)
	{
		if (girlVec.at(i)->getName() == info)
		{
			girlVec.erase(girlVec.begin() + i);

			test = true;
		}
	}

	return test;
}
bool Dorm::addGirl(string info)
{
	vector<string> collection;

	istringstream iss(info);
	for (string userInput; iss >> userInput;)
	{
		collection.push_back(userInput);
	}

	string name = collection.at(0);
	string hairColor = collection.at(1);
	int age = 0;
	int height = 0;
	bool testIt = true;

	if (collection.size() == 4)
	{
		if (isInteger(collection.at(2)))
		{
			stringstream ageIn(collection.at(2));
			ageIn >> age;
		}
		else
		{
			testIt = false;
		}

		if (isInteger(collection.at(3)))
		{
			stringstream heightIn(collection.at(3));
			heightIn >> height;
		}
		else
		{
			testIt = false;
		}

		if ((testIt == true) && !alreadyThere(name, girlVec))
		{
			girlVec.push_back(new Girl(name, hairColor, age, height));

			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	testIt = false;
}
bool Dorm::removeGirl(string info)
{
	bool test = false;

	for (int i = 0; i < girlVec.size(); i++)
	{
		if (girlVec.at(i)->getName() == info)
		{
			girlVec.erase(girlVec.begin() + i);

			test = true;
		}
	}

	return test;
}
Girl* Dorm::getGirl(string name)
{
	for (int i = 0; i < girlVec.size(); i++)
	{
		if (girlVec.at(i)->getName() == name)
		{
			return girlVec.at(i);
		}
	}

	return NULL;
}
void Dorm::listGirls()
{
	for (int i = 0; i < girlVec.size(); i++)
	{
		cout << girlVec.at(i)->getName() << endl;
	}
	
	cout << endl;
}
void Dorm::selectPrime()
{

	cout << "The perfect girl for you is:" << endl << "Anna!" << endl << endl;
}