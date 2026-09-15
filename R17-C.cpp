#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int speed;

    void info(){
    cout << brand << "" << endl;
    cout << model << "" << endl;
    cout << speed << "" << endl;
    }
    Car(string NAME, string MODEL, int SPEED){
        brand = NAME;
        model = MODEL;
        speed = SPEED;
    }
};
int main(){
    Car car1 = Car("Toyota", "Camry", 250);
    car1.info();
}