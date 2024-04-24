cmake_minimum_required(VERSION 3.27)
project(Laba_7)

set(CMAKE_CXX_STANDARD 23)

add_executable(Laba_7 main.cpp
        DoubleLinkedList.h
        DoubleNode.h
        SinglyLinkedList.h
        SingleNode.h
        StackArray.h
        Stack.h
        QueueArray.h
        Queue.h
        PriorityNode.h
        PriorityQueue.h)
