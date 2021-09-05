#include "iostream"
#include "task10.h"
using namespace std;

string checking(int size, int arr[]) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    if(sum % 2 == 0) {
        return "The sum of the numbers is even\n";
    }

    return "The sum of the numbers is odd\n";
}