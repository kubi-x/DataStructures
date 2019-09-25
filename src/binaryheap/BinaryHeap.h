//
// Created by Kubilay Karapinar on 05.09.19.
//

#ifndef DATASTRUCTURES_BINARYHEAP_H
#define DATASTRUCTURES_BINARYHEAP_H


template<class T>
class BinaryHeap {
public:
    virtual void push(const T &elem) = 0;

    virtual T pop() = 0;

    virtual T getTop() = 0;

    virtual int getSize() = 0;

    virtual bool isEmpty() = 0;

private:

};

#endif //DATASTRUCTURES_BINARYHEAP_H
