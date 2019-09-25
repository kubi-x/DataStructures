//
// Created by Kubilay Karapinar on 25.09.19.
//
template<class T>
NodeTwo<T>::NodeTwo(const T &data) {
    this->data = data;
    this->parent = nullptr;
    this->right = nullptr;
    this->left = nullptr;
}

template<class T>
NodeTwo<T>::NodeTwo(const NodeTwo<T> &node) {
    this->data = node.data;
    this->parent = node.parent;
    this->right = node.right;
    this->left = node.left;
}

template<class T>
NodeTwo<T>::NodeTwo(const T &data, NodeTwo *parent, NodeTwo *right, NodeTwo *left) {
    this->data = data;
    this->parent = parent;
    this->right = right;
    this->left = left;
}

template<class T>
void NodeTwo<T>::setParent(NodeTwo *node) {
    this->parent = node;
}

template<class T>
void NodeTwo<T>::setRight(NodeTwo *node) {
    this->right = node;
}

template<class T>
void NodeTwo<T>::setLeft(NodeTwo *node) {
    this->left = node;
}

template<class T>
void NodeTwo<T>::setData(const T &data) {
    this->data = data;

}

template<class T>
NodeTwo<T> *NodeTwo<T>::getParent() {
    return this->parent;
}

template<class T>
NodeTwo<T> *NodeTwo<T>::getRight() {
    return this->right;
}

template<class T>
NodeTwo<T> *NodeTwo<T>::getLeft() {
    return this->left;
}

template<class T>
T NodeTwo<T>::getData() {
    return this->data;
}


