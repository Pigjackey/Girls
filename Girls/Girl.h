#pragma once
#include <iostream>
#include <string>

using namespace std;

class Girl
{
	private:
		string name;
		string hairColor;
		int age;
		int height;
	public:
		Girl(string nameIn, string hairColorIn, int ageIn, int heightIn)
		{
			name = nameIn;
			hairColor = hairColorIn;
			age = ageIn;
			height = heightIn;
		}
		~Girl() {}

		string getName();

		string getHairColor();

		int getAge();

		int getHeight();
};