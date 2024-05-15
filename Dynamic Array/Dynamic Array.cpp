
#include <iostream>
#include"clsDynamicArray.h"
using namespace std;
int main()
{

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);
    MyDynamicArray.SetItem(5, 60);
    MyDynamicArray.SetItem(6, 70);

    cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    //MyDynamicArray.Resize(4);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";
    MyDynamicArray.PrintList();
    cout << endl << MyDynamicArray.GetItem(0);

    cout << "\n";
    MyDynamicArray.Reverse();
    MyDynamicArray.PrintList();
    //MyDynamicArray.Clear();
    MyDynamicArray.PrintList();
    cout << "\nList after Delete item\n";
    MyDynamicArray.DeleteItemAt(2);
    MyDynamicArray.PrintList();
    MyDynamicArray.DeleteFirstItem();
    MyDynamicArray.PrintList();
    MyDynamicArray.DeleteLastItem();
    MyDynamicArray.PrintList();

    int Index = MyDynamicArray.Find(30);
    if (Index == -1)
        cout << "\nItem was not Found :-(\n ";
    else
        cout << "\n30 is found at index : " << Index;

    //MyDynamicArray.DeleteItem(30);
    cout << "\n\nArray Items after deleting 30:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAt(0, 600);
    MyDynamicArray.PrintList();
    MyDynamicArray.InsertAtBeginning(383);
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertBefore(2, 299);
    MyDynamicArray.PrintList();




}

