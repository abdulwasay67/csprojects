#include <iostream>
using namespace std;

class employee{
public;
    string name;
    string company;
    string gender;
    int age;
    
    void introduction(){
        cout << "ENTER NAME: " << name << endl;
        cout << "ENTER COMPANY: " << company << endl;
        cout << "ENTER GENDER: " << gender << endl;
        cout << "ENTER AGE: " << age << endl;
    }

};

int main(){
    employee e1;
    e1.name = "Sam Sepiol";
    e1.company = "ALL-Safe";
    e1.gender = "male";
    e1.age = 28;
    e1.introduction();

}