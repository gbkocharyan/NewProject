#include <iostream>
using namespace std;
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"
#include "task7.h"
#include "task8.h"
#include "task9.h"
#include "task10.h"

int main() {

   //task1
    calculation(6, 2);

    //task2
    divisible_by_3(1, 10);

    //task3
    int sum = sum_of_digits(1682);
    cout << "The result of task3 is: " << sum << "\n";

    //task4
    count_of_digits(15634);

    //task5
    not_divisible_by_10(10, 30);

    //task6
    const int size = 6;
    int array[size] = {15, 6, 10, 28, 6, 30};
    smaller_5(size, array);

    //task7
    const int length = 5;
    int arr[length] = {3, 9, 4, 13, 2};
    sum_adjacent_elements(length, arr);

    //task9
    cout << "The result of task9 is: ";
    month(12);

    //task10
    const int len = 4;
    int my_array[len] = {12, 5, 8, 1};
    string x = checking(len, my_array);
    cout << "The result of task10 is: " << x;

    //task8
    interrupt_odd();

    return 0;
}