#include <iostream>
#include <string>
using namespace std;

class AbstractStudents {
public:
    virtual void AskForLeave() = 0;
    virtual ~AbstractStudents() = default;
};

class Students : public AbstractStudents {
protected:
    string Name;
    int Age;
    string Grade;
    int Ranking;

public:
    Students(string name, int age, string grade, int ranking)
        : Name(name), Age(age), Grade(grade), Ranking(ranking) {}

    void info() {
        cout << Name << " is " << Age << " years old and studies in " << Grade << endl;

        if (Ranking == 1) {
            cout << Name << " was " << Ranking << "st this year " << endl;
        }
        else if (Ranking == 2) {
            cout << Name << " was " << Ranking << "nd this year " << endl;
        }
        else if (Ranking == 3) {
            cout << Name << " was " << Ranking << "rd this year " << endl;
        }
        else {
            cout << Name << " was " << Ranking << "th this year " << endl;
        }
    }

    void AskForLeave() override {
        if (Ranking > 4) {
            cout << "PERMISSION FOR A LEAVE DAY GRANTED!" << endl;
        }
        else {
            cout << "PERMISSION FOR LEAVE NOT GRANTED!" << endl;
        }
    }

    virtual void introduction() {
        cout << "A respectable student who is very disciplined." << endl;
    }
};

class student1 : public Students {
protected:
    string subject;
    string behaviour;

public:
    student1(string name, int age, string grade, int ranking, string subject, string behaviour)
        : Students(name, age, grade, ranking), subject(subject), behaviour(behaviour) {}

    void introduction() override {
        cout << Name << " is a diligent student; his " << behaviour
             << " is exemplary and excels particularly at " << subject << endl;
    }
};

class student2 : public Students {
protected:
    string subject;
    string behaviour;

public:
    student2(string name, int age, string grade, int ranking, string subject, string behaviour)
        : Students(name, age, grade, ranking), subject(subject), behaviour(behaviour) {}

    void introduction() override {
        cout << Name << " is a diligent student; their " << behaviour
             << " is exemplary and excels particularly at " << subject << endl;
    }
};

class student3 : public Students {
protected:
    string subject;
    string behaviour;

public:
    student3(string name, int age, string grade, int ranking, string subject, string behaviour)
        : Students(name, age, grade, ranking), subject(subject), behaviour(behaviour) {}

    void introduction() override {
        cout << Name << " is an extraordinary overachiever; their " << behaviour
             << " is exemplary and excels particularly at " << subject << endl;
    }
};

class student4 : public Students {
protected:
    string subject;
    string behaviour;

public:
    student4(string name, int age, string grade, int ranking, string subject, string behaviour)
        : Students(name, age, grade, ranking), subject(subject), behaviour(behaviour) {}

    void introduction() override {
        cout << Name << " is an extraordinary overachiever; their " << behaviour
             << " is exemplary and excels particularly at " << subject << endl;
    }
};

int main() {
    student1 S1("Kepler jin", 17, "XI", 2, "mathematics", "discipline");
    student2 S2("Nia Hadid", 18, "XII", 1, "physics", "teamwork");
    student3 S3("Eren Yeager", 18, "XII", 8, "science", "dedication");
    student4 S4("Habibi Al-Khawrizmi", 17, "XI", 20, "computer science", "curiosity");

    student1* p1 = &S1;
    student2* p2 = &S2;
    student3* p3 = &S3;
    student4* p4 = &S4;

    S1.info();
    S1.AskForLeave();
    p1->introduction();
    S2.info();
    p2->introduction();
    S3.info();
    p3->introduction();
    S4.info();
    S4.AskForLeave();
    p4->introduction();

    return 0;
}


