#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outFile("data.txt", ios::app);
    string sentence;
    cout << "ENTER INPUT: " << endl;
    getline(cin, sentence)
    cin >> sentence;
    outFile << sentence << endl;
    outFile.close();

    ifstream inFile("data.txt");
    string line;
    while (getline(inFile, line)){
        cout << line << endl;
    }
    inFile.close();
        
}