
#ifndef LABA_7_QUEUEARRAY_H
#define LABA_7_QUEUEARRAY_H


#include <iostream>
using namespace std;
template <typename T>
class QueueArray{
    T *element;
    int front;
    int back;
    int capacity;
public:
    QueueArray(){
        front = -1;
        back = -1;
        capacity = 10;
        element = new T[capacity];
    }

    bool isEmpty() const {
        return front == -1 && back == -1;
    }
    bool isFull()const{
        return back == capacity;
    }
    void enqueue(T value){
        if (isEmpty()){
            front = back = 0;
        }else{
            back++;
        }
        element[back] = value;
    }
    T dequeue(){
        if (isEmpty()){
            throw std::underflow_error("Queue is empty");
        }
        T removedElem = element[front];
        if (front == back){
            front = back = -1;
        }else{
            front++;
        }
        return removedElem;
    }
    T peek(){
        if (isEmpty()){
            throw std::out_of_range("Queue is empty");
        }
        return element[front];
    }

    friend ostream& operator<<(std::ostream& os, QueueArray<T>& queue) {
        if (queue.isEmpty()) {
            os << "Queue is empty!!!";
        } else {
            int i = queue.front;
            while (i != queue.back) {
                os << queue.element[i] << " ";
                i = (i + 1) % queue.capacity;
            }
            os << queue.element[i];
        }
        return os<<endl;
    }
};


#endif //LABA_7_QUEUEARRAY_H
