
#ifndef LABA_7_SINGLENODE_H
#define LABA_7_SINGLENODE_H

#include <memory>
using namespace std;
template <typename T>
struct SingleNode {
    T data;
    unique_ptr <SingleNode> next;
    SingleNode(int value) : data{value}, next{nullptr} {};
};

#endif //LABA_7_SINGLENODE_H
