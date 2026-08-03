#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList<int> MyDblLinkedList;

    //Insert At Beginning
    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "Linked List Content:\n";
    MyDblLinkedList.Print();

    //Find Node
    clsDblLinkedList<int>::Node* N1 = MyDblLinkedList.Find(2);

    if (N1 != NULL)
    {
        cout << "\n\nNode With Value 2 is Found :)\n";
    }
    else
    {
        cout << "\n\nNode is Not Found :(\n";
    }

    //Insert After
    MyDblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 After 2:\n";
    MyDblLinkedList.Print();

    //Insert At End
    MyDblLinkedList.InsertAtEnd(700);
    cout << "\n\nAfter Inserting 700 at End:\n";
    MyDblLinkedList.Print();

    //Delete Node
    clsDblLinkedList<int>::Node* N2 = MyDblLinkedList.Find(4);
    MyDblLinkedList.DeleteNode(N2);
    cout << "\n\nAfter Delete 4:\n";
    MyDblLinkedList.Print();

    //Delete First Node
    MyDblLinkedList.DeleteFirstNode();
    cout << "\n\nAfter Delete First Node:\n";
    MyDblLinkedList.Print();

    //Delete Last Node
    MyDblLinkedList.DeleteLastNode();
    cout << "\n\nAfter Delete Last Node:\n";
    MyDblLinkedList.Print();

    cout << "\nNumber Of Item In The Linked List = " << MyDblLinkedList.Size();

    system("pause>0");
    return 0;
}