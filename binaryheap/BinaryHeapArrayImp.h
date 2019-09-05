//
// Created by Kubilay Karapinar on 05.09.19.
//

#ifndef DATASTRUCTURES_BINARYHEAPARRAYIMP_H
#define DATASTRUCTURES_BINARYHEAPARRAYIMP_H

#include <vector>
#include "BinaryHeap.h"

template<class T>
class BinaryHeapArrayImp : public BinaryHeap<T> {

public:
    BinaryHeapArrayImp();

    BinaryHeapArrayImp(int allocSize);

    ~BinaryHeapArrayImp();

    void push(const T &elem);

    T pop();

    T getTop();

    int getSize();

    bool isEmpty();


private:
    void heapify_up(int index);

    void heapify_down(int index);

    std::vector<T> heap;

};


#endif //DATASTRUCTURES_BINARYHEAPARRAYIMP_H
