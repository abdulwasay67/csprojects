#include <iostream>
#include <string>
using namespace std;

class Abstractemployee {
    virtual void AskForRaise() = 0;
};
class Employee : public Abstractemployee {
    private:
        string name;
        string company;
        int age;
    
    public: 
    void setNAME (string name){
        this->name = name;
    }
    string getNAME() {
        return name;
    }
    void setCOMPANY(string company){
        this->company = company;
    }
    string getCOMPANY(){
        return company;
    }
    void setAGE(int age){
        this->age = age;
    }
    int getAGE(){
        return age;
    }
    void info() {
      cout << "THE NAME IS " << name << endl;
      cout << name << " IS " << age << " YEARS OLD." << endl;
      cout << name << " WORKS FOR " << company << endl;
   }

   void AskForRaise() override {
      if (age > 30) {
         cout << "ELIGIBLE FOR PROMOTION!" << endl;
      } else {
         cout << "NOT ELIGIBLE FOR PROMOTION" << endl;
      }
   }


};

int main(){
    Employee e1("Morley Hitchenson", "KVMP", 46);
    e1.info();
    Employee e2("Eqbal Jequiz", "CIA", 38);
    e2.info();
}