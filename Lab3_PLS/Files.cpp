#include "Dictionary.h"
#include "Dictionary_manager.h"
#include "Inputs.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <regex>

using namespace std;

bool is_filepath_valid(string filepath) {

    regex filepath_regex("^(?:[a-zA-Z]\\:|\\\\)\\\\([^\\\\]+\\\\)*[^\\/:*?\"<>|]+\\.txt$");

    if (!regex_match(filepath, filepath_regex)) {
        cerr << "Error: Invalid file path." << endl;
        return false;
    }

    return true;
}

bool is_filename_valid(string filename) {

    regex filename_regex("^[^\\/:*?\"<>|]+\\.txt");

    if (!regex_match(filename, filename_regex)) {
        cerr << "Error: Invalid file name." << endl;
        return false;
    }

    return true;
}

string get_valid_fullpath() {

    string fullpath;

    while (true) {
        fullpath = InputString("Input fullpath to file (only txt acceptable): ");

        if (is_filepath_valid(fullpath)) {
            return fullpath;
        }
    }
}

string get_valid_filename() {

    string filename;

    while (true) {
        filename = InputString("Input filename (only txt acceptable): ");

        if (is_filename_valid(filename)) {
            return filename;
        }
    }

}

string get_text_from_file(string filename) {

    string text{""};

    Dictionary file;

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return text;
    }

    getline(input_file, text);

    input_file.close();

    return text;

}