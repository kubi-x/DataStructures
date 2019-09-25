//
// Created by Kubilay Karapinar on 03.09.19.
//

template<class T>
NodeZero<T>::NodeZero(T data) {
    this->data = data;
    this->next = nullptr;
}

template<class T>
NodeZero<T>::NodeZero(const NodeZero<T> &node) {
    this->data = node.data;
    this->next = node.next;
}


template<class T>
void NodeZero<T>::setNext(NodeZero *node) {
    this->next = node;

}

template<class T>
NodeZero<T> *NodeZero<T>::getNext() {
    return this->next;
}

template<class T>
T NodeZero<T>::getData() {
    return this->data;
}

template<class T>
void NodeZero<T>::setData(T data) {
    this->data = data;
}

