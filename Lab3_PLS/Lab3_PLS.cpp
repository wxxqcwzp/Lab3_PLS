#include <iostream>

#include "Dictionary.h"
#include "Dictionary_manager.h"
#include "Sort.h"
#include "Inputs.h"

using namespace std;

enum menu{ USER_INPUT = 1, FILE_INPUT, SHOW_DICTIONARY, ALP_SORT, NUM_SORT, SAVE_DATA, RUN_TESTS, EXIT };

int main()
{

    bool repeat = true;

    int user_choice = 0;



    Dictionary_manager dictionary;

    
    do {
    
        user_choice = InputInt("Choose menu item", 0, 9);

        switch (user_choice)
        {
        case(USER_INPUT): { set_user_input_dictionary(dictionary); break; }

        case(FILE_INPUT): { break; }

        case(SHOW_DICTIONARY): { dictionary.show_dictionary(); break; }

        case(ALP_SORT): { dictionary.alphabeticaly_sort(); break; }

        case(NUM_SORT): { dictionary.numerical_sort(); break; }

        case(SAVE_DATA): { break; }

        case(RUN_TESTS): { cout << "All tests passed successfully" << endl; break; }

        case(EXIT): { repeat = false; }
        }
    
    } while (repeat);

}


