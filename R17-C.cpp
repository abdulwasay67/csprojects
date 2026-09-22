#include <iostream>
using namespace std;

class Car{
private:
   string brand;
   string model;
   int speed;
    
public: 
     void setNAME(string brand){
        (if name == "Toyota" || name == "Honda")
        NAME = brand;
     }
     string getNAME(){
        return NAME;
     }    
     void setMODEL(string model){
        MODEL = model;
     }
     string getMODEL(){
        return MODEL;
     }
     void setSPEED(int speed){
        if(speed >= 100)
        SPEED = speed;
     }
     int getSPEED(){
        return speed;
     }

    void info(){
    cout << "NAME - " << NAME << endl;
    cout << "MODEL - " << MODEL << endl;
    cout << "SPEED - " << SPEED << endl;
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

    Car car2 = Car("Honda" , "Accord", 225);
    car2.info();
    
    car1.getSPEED(50);
    cout << car1.getNAME() << " max speed is " << car1.getSPEED() << " ! " << endl;

    return 0;
    

}