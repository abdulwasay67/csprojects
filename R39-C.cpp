#include <map>
#include <iostream>

using namespace std;

int main() {
    map<string, int> ages;
    ages["Ali"] = 20;
    ages["Sara"] = 22;
    
    for (auto p : ages) {
    cout << p.first << " " << p.second << endl; }
}