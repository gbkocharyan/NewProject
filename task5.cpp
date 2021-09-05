#include "iostream"
#include "task5.h"
using namespace std;


void not_divisible_by_10(int start, int end) {
    cout << "The result of task5 is: ";
    if(start <= end) {
        for(; start <= end; start++) {
            if(start % 10 == 0) {
                continue;
            }
            cout << start << " ";
        }
        cout << "\n";
    } else {
        cout << "Incorrect inputs" << "\n";
    }
}

