#include "iostream"
using namespace std;
#include "Test2.h"

void even(int start, int end) {
    if(start <= end) {
        for(; start <= end; start++) {
            if(start % 2 == 0) {
                cout << start << " ";
            }
        }
        cout << "\n";
    } else {
        for(; start >= end; start--) {
            if(start % 2 == 0) {
                cout << start << " ";
            }
        }
        cout << "\n";
    }
}
