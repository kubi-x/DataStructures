//
// Created by Kubilay Karapinar on 05.09.19.
//

template<class T>
BinaryHeapTreeImp<T>::BinaryHeapTreeImp() {
    this->root = nullptr;
    this->size = 0;
    this->leafList = DoublyLinkedList<NodeTwo<T> *>();
}

template<class T>
void BinaryHeapTreeImp<T>::push(const T &elem) {
    if (this->isEmpty()) {
        this->root = new NodeTwo<T>(elem, nullptr, nullptr, nullptr);
        this->leafList.insertBeg(this->root);
    } else {
        NodeTwo<T> *parent = this->leafList.getTail()->getData();
        NodeTwo<T> *node = new NodeTwo<T>(elem, parent, nullptr, nullptr);
        if (parent->getLeft() == nullptr) {
            parent->setLeft(node);
        } else if (parent->getRight() == nullptr) {
            parent->setRight(node);
        } else {
            this->leafList.popEnd();
            throw std::runtime_error("DEBUG - Sth wrong");
        }
        this->leafList.insertBeg(node);
        this->heapify_up(node);
    }
    this->size++;
}

template<class T>
T BinaryHeapTreeImp<T>::pop() {
    if (this->isEmpty()) {
        throw std::runtime_error("Binary heap is already empty!");
    } else {
        NodeTwo<T> *node;
        T data;
        if (this->leafList.isEmpty()) {
            node = this->root;
            data = node->getData();
            this->root = nullptr;
        } else {
            node = this->leafList.popBeg();
            data = node->getData();
        }
        delete node;
        this->size--;
        return data;
    }
}

template<class T>
void BinaryHeapTreeImp<T>::heapify_up(NodeTwo<T> *node) {
    if (node->getParent() != nullptr && node->getData() < node->getParent()->getData()) {
        T temp = node->getParent()->getData();
        node->getParent()->setData(node->getData());
        node->setData(temp);
        this->heapify_up(node->getParent());
    }
}

template<class T>
void BinaryHeapTreeImp<T>::heapify_down(NodeTwo<T> *node) {
    if (node == nullptr) {
        return;
    }
    if (node->getData() < node->getLeft()->getData() && node->getData() < node->getRight()->getData()) {
        return;
    } else {
        if (node->getLeft()->getData() < node->getRight()->getData()) {
            T temp = node->getLeft()->getData();
            node->getLeft()->setData(node->getData());
            node->getData(temp);
            this->heapify_down(node->getLeft());
        } else {
            T temp = node->getRight()->getData();
            node->getRight()->setData(node->getData());
            node->getData(temp);
            this->heapify_down(node->getRight());
        }
    }
}

template<class T>
T BinaryHeapTreeImp<T>::getTop() {
    return this->root->getData();
}

template<class T>
int BinaryHeapTreeImp<T>::getSize() {
    return this->size;
}

template<class T>
bool BinaryHeapTreeImp<T>::isEmpty() {
    return this->size == 0;
}

template<class T>
BinaryHeapTreeImp<T>::~BinaryHeapTreeImp() {

}



