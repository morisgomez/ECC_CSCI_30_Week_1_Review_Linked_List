#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;
int main() 
{
    //step 1: create an empy linked list called classmates.
    LinkedList mates;
    
    //step 2: create the first Node of the list.
    mates.head = new Node;
    mates.head->data = 5;
    
    //step 2: create the second Node of the list.
    mates.head->next = new Node;
    mates.head->next->data = 6;
    
    //step 3: create the third Node of the list.
    mates.head->next->next = new Node;
    mates.head->next->next->data = 7;
    
    //step 4: create the fourth Node of the list.
    mates.head->next->next->next = new Node;
    mates.head->next->next->next->data = 8;
    
    //step 5: display all nodes.
    Node *current = mates.head;
    while(current != nullptr)
    {
        cout << current->data << endl;
        cout << current->next << endl;
        cout << "=======" << endl;
        current = current->next;
    }
    return 0;
}
