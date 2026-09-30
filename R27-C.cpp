#include <iostream>
#include <string>
using namespace std;

class Complexnumbers {
    private: 
    int real;
    float imaginary;
    public:
    Complexnumbers() {}
    Complexnumbers(int r, float i)
    : real(r), imaginary(i) {}

    void DisplayNumber(){
        cout << "The complexnumber is: "<<real<<" + "<<imaginary<<"i"<<endl<<endl;
    }
    int getRealPart() {
        return real;
    }
    float getImaginaryPart() {
        return imaginary;
    }


};

Complexnumbers add2Numbers(Complexnumbers n1, Complexnumbers n2) {
    int r;
    float i;
    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImaginaryPart() + n2.getImaginaryPart();
    Complexnumbers temp(r, i);
    return temp;
};

int main() {
    Complexnumbers cn1 (5, 4), cn2 (9, 2), cn3;
    cn1.DisplayNumber();
    cn2.DisplayNumber();

    cout << "Addition of Complex number 1 and Complex number 2" <<endl;
    
    cn3 = add2Numbers(cn1, cn2);
    Complexnumbers *ptr;
    ptr = &cn3;
    ptr->DisplayNumber();


    return 0;
}