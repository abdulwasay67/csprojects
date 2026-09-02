#include <iostream>
using namespace std;

int calculator() {
    string operation; 
    int x;
    int y;

    cout <<"ENTER x: ";
    cin >> x;
    cout <<"ENTER y: ";
    cin >> y;
    
    cout <<"ENTER OPERATION: '+' '-' '*' '/':  " << operation;
    cin >> operation; 

    if (operation == "+"){
     return x + y;
    }
    else if (operation == "-"){
     return x - y;
    }
    else if (operation == "*"){
     return x * y;
    }
    else if (operation == "/"){
     return x / y;
    }
    else {
     cout <<"please enter from above operations only" << endl;
     return 0;}
}
int main(){
   int result = calculator();
    cout << result;

}