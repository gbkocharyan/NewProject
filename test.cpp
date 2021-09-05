#include "iostream"
using namespace std;
#include "test.h"

int mult(int num1, int num2) {
    return num1 * num2;
}



void test(int start, int end) {
    if(start > end) {
        for(; start >= end; start--) {
            cout << start << " ";
        }
        cout << "\n";
    } else {
        for(; start <= end; start++) {
            cout << start << " ";
        }
        cout << "\n";
    }
}



int min(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    return num2;
}
