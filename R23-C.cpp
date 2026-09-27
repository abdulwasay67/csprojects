#include <iostream>
#include <vector>
using namespace std;

class Employee {
    public:
        virtual double calculatePay() = 0;
};

class FullTimeEmployee : public Employee {
    double salary;
    public:
        FullTimeEmployee(double s) : salary(s) {}
        double calculatePay() override { return salary; }
};

class HourlyEmployee : public Employee {
    double rate, hours;
    public:
        HourlyEmployee(double r, double h) : rate(r), hours(h) {}
        double calculatePay() override { return rate * hours; }
};

int main() {
    Employee* e1 = new FullTimeEmployee(5000);
    Employee* e2 = new HourlyEmployee(20, 40);

    vector<Employee*> employees;
    employees.push_back(e1);
    employees.push_back(e2);

    for (Employee* e : employees) {
        cout << e->calculatePay() << endl;
    }
    return 0;
}