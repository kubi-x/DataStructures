//
// Created by Kubilay Karapinar on 04.09.19.
//


template<class T>
Stack<T>::Stack() {
    this->top = nullptr;
    this->size = 0;
}

template<class T>
void Stack<T>::push(T elem) {
    NodeZero<T> *tmp = new NodeZero<T>(elem);
    tmp->setNext(this->top);
    this->top = tmp;
    this->size++;
}

template<class T>
NodeZero<T> *Stack<T>::pop() {
    if (this->top != nullptr) {
        NodeZero<T> *tmp = this->top;
        this->top = top->getNext();
        this->size--;
        return tmp;
    } else {
        throw std::runtime_error("Stack is already empty!");
    }
}

template<class T>
int Stack<T>::getSize() {
    return this->size;
}

template<class T>
bool Stack<T>::isEmpty() {
    return this->size == 0;
}


template<class T>
void Stack<T>::clear() {
    while (!isEmpty()) {
        NodeZero<T> *tmp = pop();
        delete tmp;
    }
}


template<class T>
void Stack<T>::print() {
    NodeZero<T> *tmp = this->top;
    while (tmp != nullptr) {
        std::cout << "Value: " << tmp->getData() << std::endl;
        tmp = tmp->getNext();
    }
}

template<class T>
Stack<T>::~Stack() {
    clear();
}
