//
// Created by Kubilay Karapinar on 05.09.19.
//
#include <vector>
#include "BinaryHeapArrayImp.h"


template<class T>
BinaryHeapArrayImp<T>::BinaryHeapArrayImp() {
}

template<class T>
BinaryHeapArrayImp<T>::BinaryHeapArrayImp(int allocSize) {
    this->heap.reserve(allocSize);
}

template<class T>
void BinaryHeapArrayImp<T>::push(const T &elem) {
    this->heap.push_back(elem);
    int insertIndex = getSize() - 1;
    heapify_up(insertIndex);
}

template<class T>
T BinaryHeapArrayImp<T>::pop() {
    int lastLeafIndex = getSize() - 1;
    std::swap(this->heap[0], this->heap[lastLeafIndex]);
    this->heap.pop_back();
    heapify_down(0);
}

template<class T>
void BinaryHeapArrayImp<T>::heapify_up(int index) {
    if (index == 0)
        return;
    int parentIndex;
    if (index % 2 == 0) {
        parentIndex = index / 2 - 1;
        if (this->heap[index] < this->heap[parentIndex]) {
            std::swap(this->heap[index], this->heap[parentIndex]);
        }
    } else {
        parentIndex = (index - 1) / 2;
        if (this->heap[index] < this->heap[parentIndex]) {
            std::swap(this->heap[index], this->heap[parentIndex]);
        }
    }
    heapify_up(parentIndex);
}

template<class T>
void BinaryHeapArrayImp<T>::heapify_down(int index) {
    int childLeftIndex = 2 * index + 1;
    int childRightIndex = 2 * index + 2;

    if (childLeftIndex >= getSize() && childRightIndex >= getSize()) {
        return;
    } else if (childLeftIndex >= getSize()) {
        //Go right
        std::swap(this->heap[index], this->heap[childRightIndex]);
        heapify_down(childRightIndex);
    } else if (childRightIndex >= getSize()) {
        //Go left
        std::swap(this->heap[index], this->heap[childLeftIndex]);
        heapify_down(childLeftIndex);
    } else if (this->heap[index] < this->heap[childLeftIndex] && this->heap[index] < this->heap[childRightIndex]) {
        return;
    } else if (this->heap[childLeftIndex] < this->heap[childRightIndex]) {
        //Go left
        std::swap(this->heap[index], this->heap[childLeftIndex]);
        heapify_down(childLeftIndex);
    } else {
        //Go right
        std::swap(this->heap[index], this->heap[childRightIndex]);
        heapify_down(childRightIndex);
    }

}

template<class T>
T BinaryHeapArrayImp<T>::getTop() {
    if (!isEmpty()) {
        return this->heap[0];
    } else {
        throw std::runtime_error("Heap is empty!");
    }
}

template<class T>
int BinaryHeapArrayImp<T>::getSize() {
    return this->heap.size();
}

template<class T>
bool BinaryHeapArrayImp<T>::isEmpty() {
    return this->heap.empty();
}

template<class T>
BinaryHeapArrayImp<T>::~BinaryHeapArrayImp() {
    //EMPTY
}


