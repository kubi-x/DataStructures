#include <iostream>
#include "nodes/NodeZero.h"
#include "nodes/NodeZero.cpp"
#include "nodes/NodeOne.h"
#include "nodes/NodeOne.cpp"
#include "linkedlist/LinkedList.h"
#include "linkedlist/LinkedList.cpp"
#include "doublylinkedlist/DoublyLinkedList.h"
#include "doublylinkedlist/DoublyLinkedList.cpp"
#include "stack/Stack.h"
#include "stack/Stack.cpp"
#include "queue/Queue.h"
#include "queue/Queue.cpp"

int main() {

    LinkedList<int> linkedList = LinkedList<int>();

    linkedList.insertEnd(4);
    linkedList.insertEnd(5);
    linkedList.insertEnd(6);
    linkedList.insertEnd(7);
    linkedList.insertEnd(8);
    linkedList.insertBeg(3);
    //linkedList.insertBeg(NodeZero<int>(3));
    //linkedList.printTraverse();
    linkedList.reverse();
    //linkedList.print();

    //linkedList.removeWithValue(NodeZero<int >(5));
    //linkedList.removeWithValue(NodeZero<int >(5));
    //linkedList.removeWithValue(NodeZero<int >(8));
    //linkedList.removeWithValue(NodeZero<int >(7));
    //linkedList.removeWithValue(NodeZero<int >(6));
    /*
    try {
        linkedList.removeWithIndex(7);
    } catch (const std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
     */


    //linkedList.print();

    DoublyLinkedList<int> doublyLinkedList = DoublyLinkedList<int>();

    doublyLinkedList.insertEnd(4);
    doublyLinkedList.insertEnd(5);
    doublyLinkedList.insertEnd(6);
    doublyLinkedList.insertEnd(7);
    doublyLinkedList.insertEnd(8);
    doublyLinkedList.insertBeg(3);


    /*
    linkedList.removeWithValue(NodeZero<int >(5));
    linkedList.removeWithValue(NodeZero<int >(5));
    linkedList.removeWithValue(NodeZero<int >(8));
    */


    //doublyLinkedList.print();
    //doublyLinkedList.reverse();
    //doublyLinkedList.print();

    Stack<int> stack = Stack<int>();
    stack.push(5);
    stack.push(4);
    stack.push(3);
    stack.push(2);
    stack.push(1);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    Queue<int> queue = Queue<int>();
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);

    int x = queue.pop()->getData();


    return 0;
}