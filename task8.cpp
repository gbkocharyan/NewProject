#include "iostream"
#include "task8.h"
using namespace std;

void interrupt_odd() {
    int num;
    while(true) {
        cin >> num;
        if(num % 2 != 0) {
            break;
        }
    }
}
