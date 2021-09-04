#include <iostream>

int max_arr(int length, int arr[]) {
    int max = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {

    const int length = 4;
    int array[length] = {21, 3, 52, 19};
    std::cout << max_arr(length, array) << "\n";

    return 0;
}
