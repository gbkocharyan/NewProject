#include <iostream>

int main() {

    int i = 1;
    while(i <= 5) {
        int j = 5;
        while(j >= i) {
            printf(" ");
            j--;
        }
        j = 1;
        while(j <= i) {
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
