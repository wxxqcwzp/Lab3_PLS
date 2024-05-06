#pragma once
#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

class Dictionary {

private:

	map<string, int> dictionary;

    void remove_punctuation(string& text) {

        string modified_text;

        for (char c : text) {

            if (!ispunct(static_cast<unsigned char>(c))) {
                modified_text += c;
            }
        }

        text = modified_text;

    }

    void to_lower(string& text) {

        string modified_text = text;

        transform(modified_text.begin(), modified_text.end(), modified_text.begin(), ::tolower);

        text = modified_text;
    }

public:

	void count_words(string text) {

        remove_punctuation(text);
        to_lower(text);

		stringstream ss(text);

		string word;

        while (getline(ss, word, ' ')) { 

            if (word.empty()) { continue; }
            
            dictionary[word]++;
        
        }

	}

    vector<pair<string, int>> convert_to_vector() {

        vector<pair<string, int>> vector_dictionary;

        for (auto& pair : dictionary) { vector_dictionary.push_back(make_pair(pair.first, pair.second)); }

        return vector_dictionary;
    }


};
