#include <iostream>
#include <vector>
using namespace std;
int main() {
    cout << "BOOKS" << endl;
    const double max_rating = 10.0;
    const int max_books = 3;
    struct book1 {
        string name;
        int pages;
        double rating;
        string author;
    };
    book1 s1;
    vector<book1> book1_list;
    int numBOOKS;
    cout << "HOW MANY BOOKS? " << endl;
    cin >> numBOOKS;
    while (numBOOKS > max_books){
        cout << "YOU CANT ADD MORE THEN" << max_books << " ! " << endl;
        cout << "HOW MANY BOOKS: " << endl;
        cin >> numBOOKS; 
    }
    for(int b = 0; b < numBOOKS; b++){   
     book1 temp_struct;
     cout << "--BOOK--" << b + 1 << " . " << endl;
     for(int i = 0; i < 4; i++){
         cout << "ENTER VALUE" << i + 1 << " : " << endl;
         switch(i){
             case 0: cin >> temp_struct.name; break;
             case 1: cin >> temp_struct.pages; break;
             case 2: cin >> temp_struct.rating; break;
             case 3: cin >> temp_struct.author; break;
         }
     } 
    book1_list.push_back(temp_struct);
    }
    for(book1 b : book1_list){
      cout << b.name << " " << b.pages << " " << b.rating << " " << b.author << endl;
    }
}