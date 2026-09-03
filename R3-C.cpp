#include <iostream>
using namespace std;

int number(int &a){
    cout << "ENTER a: " ;
    cin >> a;
    return a*a;
}
int doublenumber(int x){
    return 2*x;
}
int main(){
    int a;
    int result1 = number(a)
    int result2 = doublenumber(a)
    cout << result1 << endl;
    cout << result2 << endl;
    return 0;
}