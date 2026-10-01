#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

int main() {
    Node* first = new Node{5, nullptr};
    Node* second = new Node{15, nullptr};
    Node* third = new Node{25, nullptr};
    Node* four = new Node{35, nullptr};
    Node* newNode = new Node{20, second->next}; 

    first->next = second;
    second->next = newNode;
    newNode->next = third;
    third->next = four;
    Node* current = first;
    while(current != nullptr){
        cout << current->value << endl;
        current = current->next;
    }
    
    delete first;
    delete second;
    delete third;
    delete four;

    return 0;

}