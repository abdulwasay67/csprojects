#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main() {
    stack<char> P;
    queue<char> C;
    string word;
    string reversed;

    char palindrome[] = {'R', 'A', 'C', 'E', 'C', 'A', 'R'};

    for(char S: palindrome){
        P.push(S);
        C.push(S);
    }
    
    while (!P.empty()) {
        reversed += P.top();
        P.pop(); 
    }
    while(!C.empty()){
        word += C.front();
        C.pop();
    }
    if (word == reversed){
        cout << "ITS A PALINDROME!" << endl;
    }
    else {
        cout << "its not a palindrome" << endl;
    }
    
}

