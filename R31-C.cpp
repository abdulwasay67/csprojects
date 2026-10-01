#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {
    stack<int> s;
    queue<int> q;

    int values[] = {4, 16, 256, 5, 25, 625};

    for (int c: values){
        q.push(c);
        s.push(c);
    }

    while(!s.empty()){
        cout<< s.top() << endl;
        s.pop();
    }
        while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

}
