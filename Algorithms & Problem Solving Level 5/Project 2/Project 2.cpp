#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
    clsMyQueue<int> MyQueue;

    MyQueue.push(1);
    MyQueue.push(2);
    MyQueue.push(3);
    MyQueue.push(4);
    MyQueue.push(5);

    cout << "Queue:\n";
    MyQueue.print();

    cout << "\nQueue Size : " << MyQueue.size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back : " << MyQueue.back();


    return 0;
}