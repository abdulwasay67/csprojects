#include <iostream>
using namespace std;

class AbstractEmployee{ 
    virtual void AskForPromotion()=0
};
class Employee:AbstractEmployee{
 private:
  string name;
  string company;
  int age;
 public: 
 void setNAME(string name){
    name = NAME;
 }
 string getNAME(){
    return NAME;
 }
 void setCOMPANY(string company){
    company = COMPANY;
 }
 string getCOMPANY(){
    return COMPANY;
 }
 void getAGE(int age){
    if( age > 18){
        age = AGE;
    }
    else{
        cout << "YOU CANT BE UNDERAGED!" << endl;
    }
 int getAGE(){
    return AGE;
 }
 }

 void info(){
    cout << "THE NAME IS " << NAME << endl;
    cout << NAME << "IS " << AGE << "YEARS OLD." << endl;
    cout << NAME << "WORKS FOR " << COMPANY << endl;
 }
  void AskForPromotion(){
    if (age > 30){
        cout << "ELIGIBLE FOR PROMOTION!" << endl;
    }
    else{
        cout << "NOT ELIGIBLE FOR PROMOTION" << endl;
    }
 }

};
int main(){
    Employee e1 = Employee("Arthur Morgan", "Saint Louis pvt. ltd", 49);
    e1.info();
    Employee e2 = Employee("Lucia Sahur", "Miami Capital", 27);
    e2.info();

    e1.AskForPromotion();
    e2.AskForPromotion();
}
