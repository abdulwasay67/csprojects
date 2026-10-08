#include <iostream>
using namespace std;

void swap_values(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[5] = {7, 1, 4, 2, 6};

    for (int pass = 0; pass < 4; pass++) {
        for (int i = 0; i < 4; i++) {
            if (arr[i] > arr[i + 1]) {
                swap_values(&arr[i], &arr[i + 1]);
            }
        }
    }

    cout << "Sorted bubble array" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}