#include <iostream>
#include "SinglyLinkedList.h"
#include "DoubleLinkedList.h"
#include "Stack.h"
#include "StackArray.h"

using namespace std;

void Shtrix(){
    cout<<"------------------------\n";
}

void SingleList () {
    SinglyLinkedList <int> A;
    Shtrix();
    if(A.isEmpty())
        cout<<"List is empty"<<endl;
    Shtrix();
    A.InsertAtBeginning(3);
    A.InsertAtBeginning(2);
    A.InsertAtBeginning(1);


    if(!A.isEmpty())
        cout<<"List isn`t empty"<<endl;
    cout<<A;
    Shtrix();
    A.InsertAtEnd(6);
    A.InsertAtEnd(5);
    A.InsertAtEnd(4);

    cout<<A;
    Shtrix();

    A.removeFromEnd();
    A.removeFromBeginning();
    cout<<A;
    Shtrix();

    A.removeAtIndex(1);
    A.InsertAtIndex(1,5);
    cout<<A;
    Shtrix();


    if (A.search(2))
        cout<<"List has 2"<<endl;
    else cout<<"List don`t have 2"<<endl;
    cout<<"Size of list: "<<A.getSize()<<endl;
    cout<<A[3]-A[2];
}

void DoubleList(){
    DoubleLinkedList <int> B;
    Shtrix();
    if(B.isEmpty())
        cout<<"List is empty"<<endl;
    Shtrix();
    B.insertAtBeginning(3);
    B.insertAtBeginning(2);
    B.insertAtBeginning(1);


    if(!B.isEmpty())
        cout<<"List isn`t empty"<<endl;
    cout<<B;
    Shtrix();
    B.insertAtEnd(6);
    B.insertAtEnd(5);
    B.insertAtEnd(7);

    cout<<B;
    Shtrix();

    B.removeFromEnd();
    B.removeFromBeginning();
    cout<<B;
    Shtrix();

    B.removeAtIndex(1);
    B.insertAtIndex(1,5);
    cout<<B;
    Shtrix();


    if (B.search(2))
        cout<<"List has 2"<<endl;
    else cout<<"List don`t have 2"<<endl;
    cout<<"Size of list: "<<B.getSize()<<endl;
    cout<<B[3]-B[2]<<endl;
}

void Stacklist(){
    Stack <int> A;
    if(A.isEmpty())
        cout<<"is empty"<<endl;
    else
        cout<<"not empty"<<endl;
//    cout<<A.Peek();
//    A.Pop();
    A.Push(1);
    A.Push(2);
    A.Push(3);
    A.Push(12);
    A.Push(52);
    A.Push(2);
    cout<<A;
    if(A.isEmpty())
        cout<<"is empty"<<endl;
    else
        cout<<"not empty"<<endl;
    cout<<"Pop"<<endl;
    A.Pop();
    cout<<A;
    cout<<"Peek"<<endl;
    cout<<A.Peek()<<endl;

}
int main() {

//SingleList();
//
//DoubleList();

    cout<<"Stack"<<endl;
    Stacklist();


}

