
#include <iostream>
using namespace std;
#include"clsMyStackArr.h"
int main()
{
    clsMyStackArr <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);


    cout << "\nQueue: \n";
    MyStack.Print();

    cout << "\nQueue Size: " << MyStack.Size();
    cout << "\nQueue Front: " << MyStack.front();
    cout << "\nQueue Back: " << MyStack.back();

    MyStack.pop();

    cout << "\n\nQueue after pop() : \n";
    MyStack.Print();


    cout << "\n\n Item(2) : " << MyStack.GetItem(2);


    MyStack.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyStack.Print();


    MyStack.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyStack.Print();


    MyStack.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyStack.Print();



    MyStack.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyStack.Print();


    MyStack.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyStack.Print();


    MyStack.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyStack.Print();

    system("pause>0");
}

