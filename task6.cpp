#include "iostream"
#include "task6.h"
using namespace std;

void smaller_5(int size, int arr[]) {
    cout << "The result of task6 is: ";
    int count = 0;
    for (int i = 0; i < size; i++) {
        if(arr[i] < 5) {
            cout << arr[i] << " ";
            count++;
        }
    }
    if(count == 0) {
        cout << "There is no number less than 5";
    }
    cout << "\n";
}
