//
// Created by Kubilay Karapinar on 25.09.19.
//

#ifndef DATASTRUCTURES_NODETWO_H
#define DATASTRUCTURES_NODETWO_H

template<class T>
class NodeTwo {
public:
    NodeTwo(const T &data);

    NodeTwo(NodeTwo<T> const &node);

    NodeTwo(const T &data, NodeTwo *parent, NodeTwo *right, NodeTwo *left);

    void setParent(NodeTwo *node);

    void setRight(NodeTwo *node);

    void setLeft(NodeTwo *node);

    void setData(const T &node);

    NodeTwo<T> *getParent();

    NodeTwo<T> *getRight();

    NodeTwo<T> *getLeft();

    T getData();

private:
    T data;
    NodeTwo<T> *parent;
    NodeTwo<T> *right;
    NodeTwo<T> *left;

};

#include "NodeTwo.ipp"

#endif //DATASTRUCTURES_NODETWO_H
