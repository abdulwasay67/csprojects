#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[5] = {72, 1, 14, 2, 62};
    sort(arr, arr + 5);
    for (int i =0; i < 5; i++){
        cout << arr[i] << endl;
    }    
    return 0;
}

