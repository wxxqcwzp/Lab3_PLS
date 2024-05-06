#include "Dictionary.h"
#include "Dictionary_manager.h"
#include "Inputs.h"
#include "Files.h"

#include <iostream>


using namespace std;

void set_user_input_dictionary(Dictionary_manager& dictionary) {

	string text = InputString("Enter your text");

	Dictionary word_counter;

	word_counter.count_words(text);

	dictionary.set_dictionary(word_counter);

}

void import_matrix(Dictionary_manager& dictionary) {

	string file;

	cout << "1 - Enter the fullpath to the file;" << endl;
	cout << "0 - Enter only the filename (for the root folder);" << endl;

	bool user_choice = InputInt("Choose input type:",-1,2);

	if (user_choice) { file = get_valid_fullpath(); }
	else { file = get_valid_filename(); }

	return get_matrix_from_file(file);

}
