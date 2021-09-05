#include "iostream"
#include "task3.h"
using namespace std;

int sum_of_digits(int num) {
    int sum = 0;
    int digit = 0;
    int i = 0;
    while(num > 0) {
        digit = num % 10;
        sum += digit;
        num = num/10;
    }
    return sum;
}
