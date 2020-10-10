#pragma once
#include <vector>
#include <sstream>
#include "Girl.h"

class Dorm
{
	private:
		vector <Girl*> girlVec;

	public:
		Dorm() {}
		~Dorm() {}

		bool addGirl(string info);

		bool removeGirl(string info);

		Girl* getGirl(string name);

		void listGirls();

		void selectPrime();
};

