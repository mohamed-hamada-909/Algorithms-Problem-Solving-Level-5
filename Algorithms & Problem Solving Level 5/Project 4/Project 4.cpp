#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "Is Empty? " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size();
    cout << "\nArray Item:\n";
    MyDynamicArray.Print();

    MyDynamicArray.Resize(4);
    cout << "\n\nArray Size: " << MyDynamicArray.Size();
    cout << "\n\nArray Item After Resize: \n";
    MyDynamicArray.Print();

    cout << "\nItem 2: " << MyDynamicArray.GetItem(2);

    MyDynamicArray.Reverse();
    cout << "\nArray Item After Reverse: \n";
    MyDynamicArray.Print();

    MyDynamicArray.DeleteItem(2);
    cout << "\n\nArray Item After Delete Item(2):\n";
    MyDynamicArray.Print();
    cout << "\nArray Size: " << MyDynamicArray.Size();

    MyDynamicArray.InsertAt(2, 500);
    cout << "\n\nArray After Insert 500 at Index 2:\n";
    MyDynamicArray.Print();
    cout << "\nArray Size: " << MyDynamicArray.Size();

    int Index = MyDynamicArray.Find(30);
    if (Index == -1)
    {
        cout << "\n\nItem Was Not Found\n";
    }
    else
    {
        cout << "\n\n30 Is Found At Index: " << Index;
    }

    MyDynamicArray.DeleteItemByValue(30);
    cout << "\n\nArray Item After Deleting 30:\n";
    MyDynamicArray.Print();

    MyDynamicArray.DeleteFirstItem();
    cout << "\n\nArray Item After Delete FirstItem:\n";
    MyDynamicArray.Print();
    cout << "\nArray Size: " << MyDynamicArray.Size();

    MyDynamicArray.DeleteLastItem();
    cout << "\n\nArray Item After Delete LastItem:\n";
    MyDynamicArray.Print();
    cout << "\nArray Size: " << MyDynamicArray.Size();

    MyDynamicArray.Clear();
    cout << "\nArray Item After Clear:\n";
    MyDynamicArray.Print();

    system("pause>0");
    return 0;
}