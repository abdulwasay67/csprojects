#include <iostream>
#include <string>
#include <ctslib>
#include <ctime>

using namespace std;

int main(){
 cout <<"A NEW PROGRAM!";

 int numbers;
 string letters;
 string symbols;
 int length; 

 cout <<"PASSWORD GENERATOR!";
 cout <<"choose how long password do you want it to be!:  ";
 cin >> length
 letters = "aqwsxedcrfvtgbyhnujmikolp";
 symbols = "<>?:{}+_)*)*^%$@!@#$%^&*";
 numbers = 0123456789;
 for(int i = 0 ; i > length + 1; i++){ 
    srand(time(0));
    p1 = rand() % letters.length();
    p2 = rand() % symbols.length();
    p3 = rand() % numbers.length();
    password = rand() % p1() && p2() && p3();

 }
  return 0;
}