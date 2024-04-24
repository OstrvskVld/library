

#ifndef LABA_7_PRIORITYNODE_H
#define LABA_7_PRIORITYNODE_H


#include <memory>

namespace generic_node {
    template<typename T>
    struct Node {
        T data;
        std::shared_ptr<Node<T>> next;

        Node(const T& value) : data{value}, next{nullptr} {};
    };
}

#endif //LABA_7_PRIORITYNODE_H
