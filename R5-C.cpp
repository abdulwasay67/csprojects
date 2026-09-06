#include <iostream>
using namespace std;

int main(){
  while (true){
    int num;
    cout << "ENTER A NUMBER: ";
    cin >> num;
    if(num != 0){
        cout << "Try agian!" << endl;
    }
    else if(num == 0){
        cout << "CONGRATS!" << endl;
        break;
        return 0;
    }
}
}
