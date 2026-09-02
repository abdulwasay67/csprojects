#include <iostream>
using namespace std;

int calculator(int x,int y){
    cout <<"ENTER x: " << x;
    cout <<"ENTER y: " << y;
    string operation;
    cout <<"ENTER OPERATION: '+' '-' '*' '/':  " << operation;
    if operation == "+";
     return x + y;
    else if operation == "-";
     return x - y;
    else if operation == "*";
     return x * y;
    else if opeartion == "/";
     return x / y;
    else;
     cout <<"please enter from above operations only" << endl;
     return 0;
}
int main(){
   int result = calculator(x,y);
    cout << result;

}