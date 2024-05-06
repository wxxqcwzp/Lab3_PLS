#pragma once
#include "Dictionary.h"
#include "Utils.h"

#include <iostream>
#include <vector>
#include <map>
#include <sstream>

enum order { ALPHABETYCAL = 1, NUMERICAL };

using namespace std;

class Dictionary_manager {

private:
	
	vector<pair<string, int>> dictionary;

public:

	void set_dictionary(Dictionary old_dictionary) {

		dictionary.clear();

		dictionary = old_dictionary.convert_to_vector();

	}

	void alphabeticaly_sort() {

		sort(dictionary, dictionary.size(), ALPHABETYCAL);

	}

	void numerical_sort() {

		sort(dictionary, dictionary.size(), NUMERICAL);

	}

	void show_dictionary() {

		for (auto& pair : dictionary) { cout << pair.first << ": " << pair.second << endl; }

	}


};