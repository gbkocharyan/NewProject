#include <iostream>

void max_arr(int length, int arr[]) {
    int max = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    std::cout << max << "\n";
}

int main() {

    const int length = 4;
    int array[length] = {21, 3, 52, 19};
    max_arr(length, array);

    return 0;
}
