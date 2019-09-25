//
// Created by Kubilay Karapinar on 04.09.19.
//

template<class T>
Queue<T>::Queue() {
    this->rear = nullptr;
    this->front = nullptr;
    this->size = 0;
}


template<class T>
void Queue<T>::push(T elem) {
    NodeZero<T> *tmp = new NodeZero<T>(elem);
    if (isEmpty()) {
        this->rear = tmp;
        this->front = tmp;
    } else {
        this->rear->setNext(tmp);
        this->rear = tmp;
    }
    this->size++;
}

template<class T>
NodeZero<T> *Queue<T>::pop() {
    NodeZero<T> *tmp = this->front;
    this->front = this->front->getNext();
    this->size--;
    return tmp;
}


template<class T>
T Queue<T>::getFront() {
    if (!isEmpty()) {
        return this->front->getData();
    } else {
        throw std::runtime_error("Empty queue!");
    }
}

template<class T>
T Queue<T>::getRear() {
    if (!isEmpty()) {
        return this->rear->getData();
    } else {
        throw std::runtime_error("Empty queue!");
    }
}

template<class T>
bool Queue<T>::isEmpty() {
    return this->size == 0;
}

template<class T>
int Queue<T>::getSize() {
    return this->size;
}

template<class T>
void Queue<T>::print() {
    NodeZero<T> *tmp = this->front;

    while (tmp != nullptr) {
        std::cout << "Value: " << tmp->getData() << std::endl;
        tmp = tmp->getNext();
    }
}

template<class T>
void Queue<T>::clear() {
    while (!isEmpty()) {
        NodeZero<T> *tmp = pop();
        delete tmp;
    }

}

template<class T>
Queue<T>::~Queue() {
    clear();
}