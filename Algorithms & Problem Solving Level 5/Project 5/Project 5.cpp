#include <iostream>
#include "clsMyQueueArr.h"

using namespace std;

int main()
{
	clsMyQueueArr <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "Queue:\n";
	MyQueue.Print();

	cout << "\nQueue Size : " << MyQueue.Size();
	cout << "\nQueue Front: " << MyQueue.front();
	cout << "\nQueue Back : " << MyQueue.back();

	MyQueue.pop();
	cout << "\nQueue After Pop:\n";
	MyQueue.Print();

	cout << "\n\nItem 2: " << MyQueue.GetItem(2);

	MyQueue.Reverse();
	cout << "\n\nQueue After Reverse:\n";
	MyQueue.Print();

	MyQueue.UpdateItem(2, 600);
	cout << "\n\nQueue After Update Item(2) to 600:\n";
	MyQueue.Print();

	MyQueue.InsertAfter(2, 800);
	cout << "\n\nQueue After Insert 800 After Item(2):\n";
	MyQueue.Print();

	MyQueue.InsertAtFront(1000);
	cout << "\n\nQueue After Insert 1000 at Front:\n";
	MyQueue.Print();

	MyQueue.InsertAtEnd(2000);
	cout << "\n\nQueue After Insert 2000 at End:\n";
	MyQueue.Print();

	MyQueue.Clear();
	cout << "\n\nQueue After Clear:\n";
	MyQueue.Print();

	system("pause>0");
	return 0;
}