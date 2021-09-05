#include "iostream"
#include "task4.h"
using namespace std;

void count_of_digits(int num) {
    int count = 0;
    for(; num > 0;) {
        num = num / 10;
        count += 1;
    }

    cout << "The result of task4 is: " << count << "\n";
}

