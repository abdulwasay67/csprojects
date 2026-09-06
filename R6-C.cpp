#include <iostream>
using namespace std;
int main(){
    cout << "DO-WHILE conditionals" << endl;
    int tries = 0;
    int num;
        do {
        cout << "ENTER A NUMBER: " << endl;
        cin >> num;
            if (num != 0){
                cout <<"KEEP GOING" << endl;
                tries++;
            }
            else if (num == 0){
                cout << "YES!" << endl;
                cout << tries;
            }
    }
     while (num != 0);   

}