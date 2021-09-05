#include "iostream"
#include "task1.h"


void calculation(int start, int end) {
    int sum = 0;
    int mul = 1;
    if(start < end) {
        for(; start <= end; start++) {
            if(start % 2 == 0) {
                sum += start;
            } else {
                mul *= start;
            }
        }
    } else {
        for(; start >= end; start--) {
            if(start % 2 == 0) {
                sum += start;
            } else {
                mul *= start;
            }
        }
    }

    printf("The result of task1 is:: Sum = %d, Mul = %d\n", sum, mul);

}


