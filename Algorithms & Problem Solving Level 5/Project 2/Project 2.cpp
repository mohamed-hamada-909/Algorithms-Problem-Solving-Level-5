#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
    clsMyQueue<int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "Queue:\n";
    MyQueue.print();

    cout << "\nQueue Size : " << MyQueue.size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back : " << MyQueue.back();

    //Extension 1
    cout << "\n\nItem (2): " << MyQueue.GetItem(2);

    //Extension 2
    MyQueue.Reverse();
    cout << "\n\nQueue After Reverse: ";
    MyQueue.print();

    //Extension 3
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nMy Queue After Updating Item(2) to 600:\n";
    MyQueue.print();

    //Extension 4
    MyQueue.InsertAfter(2, 800);
    cout << "\n\nMy Queue After Inserting 800 After Item(2): \n";
    MyQueue.print();

    //Extension 5
    MyQueue.InsertAtFront(1000);
    cout << "\n\nMy Queue After Inserting 1000 At Front:\n";
    MyQueue.print();

    //Extension 6
    MyQueue.InsertAtBack(2000);
    cout << "\n\nMy Queue After Inserting 2000 At Back:\n";
    MyQueue.print();

    //Extension 7
    MyQueue.Clear();
    cout << "\n\nMy Queue After Clear:\n";
    MyQueue.print();

    system("pause>0");
    return 0;
}