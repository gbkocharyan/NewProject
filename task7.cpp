#include "iostream"
#include "task7.h"
using namespace std;

void sum_adjacent_elements(int size, int arr[]) {
    cout << "The result of task7 is: ";
    for (int i = 0; i < size-1; i++) {
        cout << arr[i] + arr[i+1] << " ";
    }

    cout << "\n";
}
