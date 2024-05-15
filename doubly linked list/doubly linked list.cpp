#include <iostream>
#include"clsDblLinkedList.h"
int main()
{


    clsDblLinkedList <int> MyDblLinkedList;

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content:\n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N1 = MyDblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    MyDblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MyDblLinkedList.Find(4);
    MyDblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MyDblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MyDblLinkedList.DeleteLastNode();
    MyDblLinkedList.PrintList();

    cout << "\nSize is : " << MyDblLinkedList.Size();

    if (MyDblLinkedList.IsEmpty())
        cout << "\nItems is Empty\n";
    else
        cout << "\nItems is Not Empty\n";

    cout << "\nClear: \n";

    //MydblLinkedList.Clear();
    cout << "\nSize is : " << MyDblLinkedList.Size() << endl;
    MyDblLinkedList.PrintList();

    cout << "\nAfter Reverse\n";
    MyDblLinkedList.Reverse();
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int> ::Node* N;
    N = MyDblLinkedList.GetNode(3);
    cout << "\nGet Node: " << N->value;
    cout << "\nItems of index 2 is: " << MyDblLinkedList.GetItem(2);
    cout << "\nAfter Update item:\n";
    MyDblLinkedList.UpdateItem(1, 308);
    MyDblLinkedList.PrintList();

    cout << "\nInsert After:\n";
    MyDblLinkedList.InsertAfter(1, 999);
    MyDblLinkedList.PrintList();

    system("pause>0");
    return 0;
}

