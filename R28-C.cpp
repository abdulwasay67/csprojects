#include <iostream>
#include <string>
using namespace std;

class Filehandler{
    private:
    string File;
    public:
    Filehandler(string F) : File(F) {
        cout << "This is file " << this->File << endl;
    }
    ~Filehandler() {
        cout << " The file" << this->File << " was destroyed!" << endl;
    }
    void write(string text){
        cout << "Writing; " << text << endl;
    }
};

int main() {
    cout << "CREATING FILE!" << endl;
    Filehandler F1(" f1 ");
    F1.write("This is file f1 and this is a file.");

    cout << "CREATING FILE!" << endl;
    Filehandler* F2 = new Filehandler(" f2 ");
    F2->write("File f2, this is the second file.");

    cout << "DELETING FILES" << endl;
    delete F2;

    return 0;
}