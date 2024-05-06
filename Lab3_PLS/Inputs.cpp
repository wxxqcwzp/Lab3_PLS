#include <iostream>
#include <string>
using namespace std;


int InputInt(string message, int min, int max) {

	int user_input;

	cout << message << endl;

	cin >> user_input;

	while (cin.fail() || user_input <= min || user_input >= max) {

		cin.clear();
		cin.ignore(INT_MAX, '\n');

		cout << "Retype:" << endl;
		cin >> user_input;
	}

	cin.ignore(INT_MAX, '\n');

	return user_input;
}

string InputString(string message) {

	string user_input;

	cout << message << endl;

	getline(cin, user_input);

	while (user_input.empty()) {

		cin.clear();
		cin.ignore(INT_MAX, '\n');

		cout << "Retype:" << endl;
		cin >> user_input;
	}

	return user_input;
}