#include <iostream>
#include <vector>

using namespace std;



int partition(vector<pair<string, int>>& array, int low, int high, int order) {

	const int ALPHABETYCAL = 1;

	if (order == ALPHABETYCAL) {

		string pivot = array[high].first;
		int i = low - 1;

		for (int j = low; j <= high - 1; j++) {


			if (array[j].first < pivot) {
				i++;

				swap(array[i], array[j]);
			}
		}

		swap(array[i + 1], array[high]);

		return i + 1;
	}
	else {
		double pivot = array[high].second;
		int i = low - 1;

		for (int j = low; j <= high - 1; j++) {


			if (array[j].second > pivot) {
				i++;

				swap(array[i], array[j]);
			}
		}

		swap(array[i + 1], array[high]);

		return i + 1;
	}
}

void quick_sort(vector<pair<string, int>>& array, int low, int high, int order) {

	if (low < high) {

		int pi = partition(array, low, high,order);

		quick_sort(array, low, pi - 1,order);
		quick_sort(array, pi + 1, high,order);

	}

}

void sort(vector<pair<string, int>>& array, int size, int order) {

	quick_sort(array, 0, array.size() - 1, order);

}



