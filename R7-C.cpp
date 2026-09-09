#include <iostream>
using namespacec std;
int main() {
    int choice;
    cout << "USER MENU" << endl;
    cout << "CHOOSE: 1) START 2) SETTINGS 3) SAVE 4) EXIT" << endl;
    cin >> choice;
    switch (choice){
        case 1:{
            cout << "GAME STARTING......" << endl;
            break;
        }
        case 2:{
            cout << "SETTINGS INTERFACE" << endl;
            break;
        }
        case 3:{
            cout << "TOTAL SAVES AVALIBLE" << endl;
            break;
        }
        case 4:{
            cout << "EXITING......" << endl;
            break;
        }
        default:{
            cout << "INVALID OPERATION!" << endl;
        }

    }
    return 0;

}