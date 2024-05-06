#include <iostream>

#include "Dictionary.h"
#include "Dictionary_manager.h"

using namespace std;



int main()
{
    string test = "hello, HeLlo  my fedya fedya y oua mama mama mama mama mama My NaMe IS - = + FedYa";

    Dictionary_manager bb;
    Dictionary aa;

    aa.count_words(test);

    bb.set_dictionary(aa);

    bb.numerical_sort();

    bb.show_dictionary();

    cout << test << endl;
}


