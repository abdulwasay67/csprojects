#include <iostream>
#include <string>
using namespace std;

class AbstractEmployee {
   virtual void AskForPromotion() = 0;
};

class Employee : public AbstractEmployee {
private:
   string name;
   string company;
   int age;

public:
   Employee(string name, string company, int age)
      : name(name), company(company), age(age) {}

   void setNAME(string name) {
      this->name = name;
   }

   string getNAME() {
      return name;
   }

   void setCOMPANY(string company) {
      this->company = company;
   }

   string getCOMPANY() {
      return company;
   }

   void setAGE(int age) {
      if (age > 18) {
         this->age = age;
      } else {
         cout << "YOU CANT BE UNDERAGED!" << endl;
      }
   }

   int getAGE() {
      return age;
   }

   void info() {
      cout << "THE NAME IS " << name << endl;
      cout << name << " IS " << age << " YEARS OLD." << endl;
      cout << name << " WORKS FOR " << company << endl;
   }

   void AskForPromotion() override {
      if (age > 30) {
         cout << "ELIGIBLE FOR PROMOTION!" << endl;
      } else {
         cout << "NOT ELIGIBLE FOR PROMOTION" << endl;
      }
   }
};

int main() {
   Employee e1("Arthur Morgan", "Saint Louis pvt. ltd", 49);
   e1.info();
   Employee e2("Lucia Sahur", "Miami Capital", 27);
   e2.info();

   e1.AskForPromotion();
   e2.AskForPromotion();
}
