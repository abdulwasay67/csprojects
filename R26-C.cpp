#include <iostream>
#include <string>
using namespace std;

class Robot {
    string name;
public:
    Robot(string n) : name(n) {
        cout << name << " constructed" << endl;
    }
    ~Robot() {
        cout << name << " destroyed" << endl;
    }
};

int main() {
    cout << "Creating r1 on stack" << endl;
    Robot r1("R1");

    cout << "Creating r2 on heap" << endl;
    Robot* r2 = new Robot("R2");

    cout << "End of main approaching" << endl;
    delete r2;

    return 0;
}