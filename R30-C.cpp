#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
stack<int> s;

s.push(10); 
s.push(20);
s.push(30);

while (!s.empty()){
    cout << s.top() << endl;
    s.pop();
}
}
//LIFO, LAST IN FIRST OUT

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}
//FIFO, first in first out