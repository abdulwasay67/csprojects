#include <iostream>
#include <string>
using namespace std;

class Abstractemployee {
public:
    virtual void AskForRaise() = 0;
};
class Employee : public Abstractemployee {
    private:
        string company;
        int age;
    protected:
        string name;
    public: 
    Employee(string name, string company, int age) {
        this->name = name;
        this->company = company;
        this->age = age;
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

class Developer : public Employee {
private:
    string favProgrammingLanguage;

public:
    Developer(string name, string company, int age, string language)
        : Employee(name, company, age)
        {
            favProgrammingLanguage = language;
        }
    void Lang(){
        cout << name << " favourite programming language is " << favProgrammingLanguage << endl;
    }
};
class Teacher : public Employee{
private:
    string Lesson;

public:
  Teacher(string name, string company, int age, string lesson)
      :  Employee(name, company, age)
      {
        Lesson = lesson;
      }
    void Teach() {
        cout << name << " is teaching " << Lesson << " at noon. " << endl;
    }  
};

int main(){
    Developer d ("Daw krizler", "Google", 19, "C++");
    d.info();
    d.AskForRaise();
    d.Lang();
    Teacher T ("Angela Houdini", "ABC School", 48, "English Lit.");
    T.info();
    T.AskForRaise();
    T.Teach();
};