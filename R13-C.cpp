#include <iostream>
using namespace std;
void double_value(int *db){
    *db = *db * 2;
}
int main(){
    int num;
    cout << "ENTER NUM VALUE: " << endl;
    cin >> num;
    double_value(&num);
    cout << num;
}

void swap_values(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    cout << "ENTER VALUE FOR a: " << endl;
    cin >> a;
    cout << "ENTER VALUE FOR b: " << endl;
    cin >> b;
    swap_values(&a, &b);
    cout << a;
    cout << b;
}
