#include <iostream>
using namespace std;
int main() {
    cout << "BOOKS" << endl;
    const double max_rating = 10.0;
    const int max_books = 3
    struct book1 {
        string name;
        int pages;
        double rating;
        string author;
    };
    book1 s1;
    vector<book1> book1_list;
    book1 temp_struct;
    for(int i = 0; i < 4; i++){
        cout << "ENTER VALUE" << i + 1 << " : "; << endl;
        switch(i){
            case 0: cin >> temp_struct.name; break;
            case 1: cin >> temp_struct.pages; break;
            case 2: cin >> temp_struct.rating; break;
            case 3: cin >> temp_struct.author; break;
        }
    }
    book1_list.push_back(temp_struct);

    string choice;
    cout << "DO YOU WANT TO ADD MORE BOOKS?:'y','n': " << endl;
    cin >> choice;
    struct book2;
    if(choice == "y"){
         struct book2 {
            string name;
            int pages;
            double rating;
            string author;
         };
         book2 s2;
         vector<book2> book2_list;
         book2 temp_struct;
         for(int i = 0; i > 4; i++){
            cout << "ENTER VALUE" << i + 1 << " : " << endl;
            switch(i){
                case 0: cin >> temp_struct.name; break;
                case 1: cin >> temp_struct.pages; break;
                case 2: cin >> temp_struct.rating; break;
                case 3: cin >> temp_struct.author; break;
            }
         }
         book2_list.push_back(temp_struct)
     }
    else if (choice == "n"){
        int choice2;
        cout << "DO YOU WANT TO SEE ANYTHING?; 1) NAME, 2) PAGES, 3) RATING, 4) AUTHOR, 5) EXIT: " << endl;
        cin >> choice2
        switch (choice){
            case 1:{
                cout << s1.name << endl;
            }
            case 2:{
                cout << s1.pages << endl;
            }
            case 3:{
                cout << s1.rating << endl;
            }
            case 4:{
                cout << s1.author << endl;
            }
            case 5:{
                return 0;
            }
            default:{
                cout << "INVALID OPERATION! CHOOSE FROM ABOVE ONLY!" << endl;
            }
        }
        
        
    }
    string choice3;
    cout << "DO YOU WANNA ADD MORE BOOKS:'y','n': " << endl;
    cin >> choice3;
    struct book3
     if(choice3 == "y"){
         struct book3 {
            string name;
            int pages;
            double rating;
            string author;
         };
         book3 s3;
         vector<book3> book3_list;
         book3 temp_struct;
         for (int i = 0; i > 4; i++){
            cout << "ENTER VALUES" << i + 1 << " : " << endl;
            switch(i){
                case 0: cin >> temp_struct.name; break;
                case 1: cin >> temp_struct.pages; break;
                case 2: cin >> temp_struct.rating; break;
                case 3: cin >> temp_struct.author; break;
            }
         }
         book3_list.push_back(temp_struct)
         

    }

    else if(choice3 == "n"){
        int p1;
        cout << "DO YOU WANNA SEE ANY BOOKS?: 1) BOOK1, 2) BOOK2, 3) EXIT,: " << endl;
        cin >> p1;
        switch(p1){
            case 1{
                int p2;
                cout << "WHAT DO U WANNA SEE?: 1) NAME, 2) PAGES, 3) RATING, 4) AUTHOR, 5) EXIT: " << endl;
                cin >> p2;
                 switch (p2){
                 case 1:{
                 cout << s1.name << endl;
                 }
                 case 2:{
                 cout << s1.pages << endl;
                 }
                 case 3:{
                 cout << s1.rating << endl;
                 }
                 case 4:{
                 cout << s1.author << endl;
                 }
                 case 5:{
                 return 0;
                 }
                 default:{
                 cout << "INVALID OPERATION! CHOOSE FROM ABOVE ONLY!" << endl;
                 }
                 }
             }
            case 2{
                int p3;
                cout << "WHAT DO U WANNA SEE?: 1) NAME, 2) PAGES, 3) RATING, 4) AUTHOR, 5) EXIT: " << endl;
                 cin >> p3;
                 switch (p3){
                 case 1:{
                 cout << s2.name << endl;
                 }
                 case 2:{
                 cout << s2.pages << endl;
                 }
                 case 3:{
                 cout << s2.rating << endl;
                 }
                 case 4:{
                 cout << s2.author << endl;
                 }
                 case 5:{
                 return 0;
                 }
                 default:{
                 cout << "INVALID OPERATION! CHOOSE FROM ABOVE ONLY!" << endl;
                 }

            }
            }
            case 3:{
                return 0;
            }
            default:{
                cout << "INVALID OPERATION! CHOOSE FROM ABOVE ONLY!" << endl;
            }
        
        }
     }
     {
     int k1;
         cout << "WHAT DO YOU WANT TO DO?: 1) ADD BOOK, 2) EXIT";
         cin >> k1;
         if (k1 == 1){
            cout <<"INVALID! MAX BOOKS TO BE ADDED ARE 2!" << max_books << endl;
         }
         else if(k1 == 2){
            int k2;
            cout << "DO U WANNA SEE ANY BOOKS? OR EXIT?: 1) BOOK1 2) BOOK2 3) BOOK3 4) EXIT: " << endl;
            cin k2;
            switch (k2){
                case 1:{
                    int i1;
                    cout << "WHAT DO U WANNA SEE?: 1) NAME 2) PAGES 3) RATING 4) AUTHOR 5) EXIT: " << exit 
                    cin >> i1;
                    switch (i1){
                     case 1:{
                     cout << s1.name << endl;
                     }
                     case 2:{
                     cout << s1.pages << endl;
                     }
                     case 3:{
                     cout << s1.rating << endl;
                     }
                     case 4:{
                     cout << s1.author << endl;
                     }
                     case 5:{
                     return 0;
                     }
                     default:{
                     cout << "INVALID OPERATION! CHOOSE FROM ABOVE ONLY!" << endl;
                     }
                 }

                }
                case 2:{
                    int i2;
                    cout << "WHAT DO U WANNA SEE?: 1) NAME 2) PAGES 3) RATING 4) AUTHOR: " << endl;
                    cin >> i2;
                    switch (i2){
                     case 1:{
                     cout << s2.name << endl;
                     }
                     case 2:{
                     cout << s2.pages << endl;
                     }
                     case 3:{
                     cout << s2.rating << endl;
                     }
                     case 4:{
                     cout << s2.author << endl;
                     }
                     case 5:{
                     return 0;
                     }
                     default:{
                     cout << "INVALID OPERATION! CHOOSE FROM ABOVE ONLY!" << endl;
                     }
                 }
                }
                case 3:{
                    int i3;
                    cout << "WAHT DO U WANNA SEE?: 1) NAME 2) PAGES 3) RATING 4) AUTHOR" << endl;
                    cin >> i3;
                    switch (i3){
                     case 1:{
                     cout << s3.name << endl;
                     }
                     case 2:{
                     cout << s3.pages << endl;
                     }
                     case 3:{
                     cout << s3.rating << endl;
                     }
                     case 4:{
                     cout << s3.author << endl;
                     }
                     case 5:{
                     return 0;
                     }
                     default:{
                     cout << "INVALID OPERATION! CHOOSE FROM ABOVE ONLY!" << endl;
                     }
                    }
                }
                case 4:{
                    return 0;
                }
                default:{
                    cout << "INVALID OPERATION!" << endl;
                }
            }
            
         }
    }
  return 0;
}
 
