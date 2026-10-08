#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    int arr[6] = {12, 9, 6, 1, 4, 7};
    int target = 9;

    sort(arr, arr +6);
    int high = 5;
    int low = 0;
    bool found = false;

    while(low <= high){
        int mid = (low + high) / 2; 

        cout << "low = " << low << " high = " << high << " mid = " << mid << " arr[mid] = " << arr[mid] << endl;

        if (arr[mid] == target){
            cout << "Found at position " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] > target){
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
   if (!found){
     cout << "The target is not in the array!" << endl;
    }
    return 0;
}