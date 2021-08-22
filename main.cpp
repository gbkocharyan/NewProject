#include <iostream>

int main() {

    int i = 1;
    while(i < 6) {
        int j = 6;
        while(j > i) {
            printf("  ");
            j--;
        }
        j = 1;
        while(j < 2*i) {
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
