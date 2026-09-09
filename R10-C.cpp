#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x;
    const int mark = 100;
    cout << "GRADE TRACKER" << endl;
    cout << "How many grades do you want to add?: " << endl;
    cin >> x;
    vector<int> nums;
    for(int i =0; i < x; i++){
        string choice;
        cout << "DO U WANT TO ENTER A GRADE OR EXIT: " << endl;
        cin >> choice;
        if(choice == "GRADE"){
            int mark;
            cout << "ENTER YOUR MARKS: ";
            cin >> mark;
            nums.push_back(mark);
            continue;
        }
        else if (choice == "EXIT"){
            break;
        }

    }
    for (int mark : nums){
        if(mark < 40){
            cout << "YOU FAILED" << endl;
        }
        else if(mark >= 40){
            cout << "YOU PASSED" << endl;
        }
       
    }
    int sum = 0;
    for(int mark : nums){
    sum += mark;
  }
    double average = sum / (double)nums.size();
    cout << "AVERAGE: " << average << endl;
    return 0;
}