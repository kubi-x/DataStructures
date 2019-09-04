//
// Created by Kubilay Karapinar on 03.09.19.
//

#ifndef DATASTRUCTURES_NODEONE_H
#define DATASTRUCTURES_NODEONE_H

template<class T>
class NodeOne {

public:

    NodeOne(T data);

    NodeOne(NodeOne<T> const &node);

    void setNext(NodeOne *node);

    void setPrev(NodeOne *node);

    NodeOne<T> *getNext();

    NodeOne<T> *getPrev();

    T getData();


private:
    T data;
    NodeOne<T> *next;
    NodeOne<T> *prev;

};

#endif //DATASTRUCTURES_NODEONE_H
