#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "NUMBER FILTER" << endl;
    while(true){
      cout << "ENTER ANY NUMBER: " << endl;
      cin >> num;
        if(num > 0){
            cout << "YOU ENTERED A POSTIVE INTEGER!" << endl;
            break;
        }
        else if(num < 0){
            cout << "YOU ENTERED A NEGATTIVE INTEGER!" << endl;
            continue;
        }
        else if(num == 0){
            cout << "YOU ENTERED A NEUTRAL INTEGER!" << endl;
            continue;
        }
        else {
            cout << "INVALID INPUT! ENTER A NUMBER ONLY!" << endl;
            continue;
        }
    }

}