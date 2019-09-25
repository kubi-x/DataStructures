//
// Created by Kubilay Karapinar on 03.09.19.
//

template<class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;

}

template<class T>
void DoublyLinkedList<T>::insertEnd(const T &elem) {
    NodeOne<T> *tmp = new NodeOne<T>(elem);
    if (this->head == nullptr) {
        this->head = tmp;
        this->tail = tmp;
    } else {
        this->tail->setNext(tmp);
        tmp->setPrev(this->tail);
        this->tail = tmp;
    }
    this->size++;
}

template<class T>
void DoublyLinkedList<T>::insertBeg(const T &elem) {
    NodeOne<T> *tmp = new NodeOne<T>(elem);
    if (this->head == nullptr) {
        this->head = tmp;
        this->tail = tmp;
    } else {
        tmp->setNext(this->head);
        this->head->setPrev(tmp);
        this->head = tmp;
    }
    this->size++;
}


template<class T>
T DoublyLinkedList<T>::popEnd() {
    NodeOne<T> *node = this->tail;
    this->tail = this->tail->getPrev();
    this->tail->setNext(nullptr);
    this->size--;
    return node->getData();
}

template<class T>
T DoublyLinkedList<T>::popBeg() {
    NodeOne<T> *node = this->head;
    this->tail = this->tail->getNext();
    this->tail->setPrev(nullptr);
    this->size--;
    return node->getData();
}

template<class T>
void DoublyLinkedList<T>::removeWithValue(const T &elem) {
    NodeOne<T> *current = this->head;
    while (current != nullptr) {

        if (current->getData() == elem) {
            NodeOne<T> *temp = current;
            if (current->getPrev() == nullptr) {
                this->head = this->head->getNext();
                current = this->head;
            } else {
                current->getPrev()->setNext(current->getNext());
                current->getNext()->setPrev(current->getPrev());
                current = current->getNext();
            }
            this->size--;
            delete temp;
        } else {
            current = current->getNext();
        }
    }
}

template<class T>
void DoublyLinkedList<T>::removeWithIndex(int index) {
    if (index < this->size) {
        NodeOne<T> *current = this->head;

        for (int i = 0; i < index; i++) {
            current = current->getNext();
        }
        if (current->getPrev() == nullptr) {
            this->head = this->head->getNext();
            this->head->setPrev(nullptr);
        } else {
            current->getPrev()->setNext(current->getNext());
            current->getNext()->setPrev(current->getPrev());
        }
        this->size--;
        delete current;
    } else {
        throw std::runtime_error("Index is bigger than size!");
    }

}

template<class T>
int DoublyLinkedList<T>::getSize() {
    return this->size;
}

template<class T>
void DoublyLinkedList<T>::print() {
    NodeOne<T> *current = this->head;
    while (current != nullptr) {
        std::cout << "Value: " << (*current).getData() << std::endl;
        current = current->getNext();
    }
}

template<class T>
void DoublyLinkedList<T>::printTraverse() {
    NodeOne<T> *current = this->tail;
    while (current != nullptr) {
        std::cout << "Value: " << (*current).getData() << std::endl;
        current = current->getPrev();
    }
}

template<class T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    NodeOne<T> *current = this->head;

    while (current != nullptr) {
        NodeOne<T> *next = current->getNext();
        delete current;
        current = next;
    }
}

template<class T>
NodeOne<T> *DoublyLinkedList<T>::getHead() {
    return this->head;
}

template<class T>
NodeOne<T> *DoublyLinkedList<T>::getTail() {
    return this->tail;
}

template<class T>
void DoublyLinkedList<T>::reverse() {
    if (this->head != nullptr) {
        NodeOne<T> *current = this->head;
        while (current != nullptr) {
            NodeOne<T> *tmp = current->getNext();
            current->setNext(current->getPrev());
            current->setPrev(tmp);
            current = tmp;
        }
        NodeOne<T> *tmp = this->head;
        this->head = this->tail;
        this->tail = tmp;
    }
}

template<class T>
void DoublyLinkedList<T>::replaceWithValue(const T &elem, const T &elemReplace) {
    NodeOne<T> *current = this->head;
    while (current != nullptr) {
        if (current->getData() == elem) {
            current->setData(elemReplace);
        }
        current = current->getNext();
    }
}

template<class T>
void DoublyLinkedList<T>::replaceWithIndex(int index, const T &elemReplace) {
    if (index < this->size) {
        NodeOne<T> *current = this->head;
        for (int i = 0; i < index; i++) {
            current = current->getNext();
        }
        current->setData(elemReplace);
    } else {
        throw std::runtime_error("Index is bigger than size!");
    }
}

template<class T>
NodeOne<T> *DoublyLinkedList<T>::getNode(int index) {
    if (index < this->size) {
        NodeOne<T> *current = this->head;
        for (int i = 0; i < index; i++) {
            current = current->getNext();
        }
        return current;
    } else {
        throw std::runtime_error("Index is bigger than size!");
    }
}

template<class T>
bool DoublyLinkedList<T>::isEmpty() {
    return this->size == 0;
}




