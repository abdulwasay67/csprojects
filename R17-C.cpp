#include <iostream>
using namespace std;

class Car{
private:
   string brand;
   string model;
   int speed;
    
public: 
     void setNAME(string brand){
        if (brand == "Toyota" || brand == "Honda")
            this->brand = brand;
     }
     string getNAME(){
        return brand;
     }    
     void setMODEL(string model){
        this->model = model;
     }
     string getMODEL(){
        return model;
     }
     void setSPEED(int speed){
        if(speed >= 100)
            this->speed = speed;
     }
     int getSPEED(){
        return speed;
     }

    void info(){
   cout << "NAME - " << brand << endl;
   cout << "MODEL - " << model << endl;
   cout << "SPEED - " << speed << endl;
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
    
   car1.setSPEED(50);
    cout << car1.getNAME() << " max speed is " << car1.getSPEED() << " ! " << endl;

    return 0;
}
    

