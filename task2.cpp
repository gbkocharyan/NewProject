#include "iostream"
#include "task2.h"
using namespace std;


void divisible_by_3(int start, int end) {
    cout << "The result of task2 is: ";
    if(start <= end) {
        for(; start <= end; start++) {
            if(start % 3 == 0) {
                cout << start << " ";
            }
        }
        cout << "\n";
    } else {
        cout << "Incorrect inputs";
    }
}