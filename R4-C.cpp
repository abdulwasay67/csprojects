#include <iostream>
#include <cctype>
using namespace std;

string password(string k){
    cout << "ENTER YOUR PASSWORD: " << endl;
    cin >> k;
    return k;
}
int length = 0;
password = password(k);
cout << passowrd.length();
int x;
int count;
x = pass.length();
count = 0;
for (int i = 0; i < x; i++){
    if (k.isidigit()){
        count = count + 1;
        return;
    }
    if (k.isupper()){
        count = count + 1;
        return;
    }
    if (k.islower()){
        count = count + 1;
        return
    }
}
if (count > 1){
    cout << "YOUR PASSWORD IS WEAK!";
}
else if (1 < count < 3){
    cout << "YOUR PASSWORD IS MEDOIOCORE!";
}
else if (count >= 3){
    cout << "YOUR PASSWORD IS STRONG!"
}