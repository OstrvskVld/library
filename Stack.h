

#ifndef LABA_7_STACK_H
#define LABA_7_STACK_H

#include <iostream>
#include "DoubleLinkedList.h"

using namespace std;
template <typename T>
class Stack{
private:
    DoubleLinkedList<T> list;
public:
    Stack() : list() {};
    bool isEmpty() const{
        return list.isEmpty();
    }

    void Push(const T& value){
        list.insertAtEnd(value);
    }
    void Pop(){
        if(list.isEmpty()){
            throw out_of_range("Stack is empty");
        }
        else{
            list.removeFromEnd();
        }
    }
    int Peek(){
        if(list.isEmpty()){
            throw out_of_range("Stack is empty");
        }
        else{
            return list[Size() - 1];
        }
    }
    int Size() const{
        return list.getSize();
    }
    friend ostream& operator<<(ostream& os, Stack<T> &obj) {
        os << obj.list;
        return os;
    }
};


#endif //LABA_7_STACK_H
