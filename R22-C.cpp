#include <iostream>
using namespace std;

//Create an abstract class Shape with a pure virtual function double area().
// Create two child classes, Circle and Rectangle, each inheriting from Shape.
/*Circle has a radius, constructor to set it, and overrides area() (π × r²).
Rectangle has width and height, constructor to set them, and overrides area() (width × height).
In main(), create one Circle and one Rectangle, call area() on each, and print the results. */
class Abstractshape {
    protected:
     Abstractshape() = default;
    public:
     virtual void doublearea() = 0;
};
class Circle : public Abstractshape {
    protected: 
    int radius;
    double pi;
    public: 
      Circle(int Radius, double Pi)
      : radius(Radius), pi(Pi) {}
      void doublearea() override {
        cout << "The area of circle is " << radius * radius * pi << "." << endl; 
      }
};
class Rectangle : public Abstractshape {
    protected:
    int width;
    int height;
    public:
     Rectangle(int width, int height)
     : width(width), height(height) {}
     void doublearea() override {
        cout << "The area of rectangle is " << width * height << "." << endl; 
     }
};
int main() {
    Circle C (6, 3.14);
    Rectangle R (10, 15);
    C.doublearea();
    R.doublearea();
    return 0;
}