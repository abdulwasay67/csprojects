#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    cout << "!TEST MARKSHEET!";
    int marks[5];
    int sum = 0;
    int average;
    int highest;
 string subject[5] = {
         "PHYSICS",
          "COMPSCI", 
         "MATHS",
         "STATS",
          "ENGLISH", 
    };
 
    string grade;

    for (int i = 0; i < 5; i++){
        cin >> marks[i];
    }

    for (int i = 0; i < 5; i++){
    sum = sum + marks[i];}

    average = sum / 5; 
    cout << "You had an average of \n"  << average ;

    for (int i = 0; i < 5; i++){
     if (marks[i] > 80){
        grade = "A+";
    }
    else if (marks[i] > 70){
        grade = "A";
    
    }
    else if(marks[i] > 60){
        grade = "B";
    }
    else if (marks[i] > 50){
        grade = "C";
    }
    else if (marks[i] > 40){
        grade = "D";
    }
    else {
        grade = "Fail!";
    }  
      cout << "\nYOUR GRADES ARE "  << grade <<  " IN "  << subject[i] ;
        }

    
    
    for(int i = 0; i < 5 ; i++ ){
     cout << "\nYOU HAD "  << marks[i] <<  " IN "  << subject[i] ;
    }
    
    return 0;
}