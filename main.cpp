#include <iostream>
#include "LinkedList/LinkedList.h"
#include "LinkedList/LinkedList.cpp"
#include "LinkedList/LLNode.h"
#include "LinkedList/LLNode.cpp"
#include "DoublyLinkedList/DoublyLinkedList.h"
#include "DoublyLinkedList/DoublyLinkedList.cpp"
#include "DoublyLinkedList/DLLNode.h"
#include "DoublyLinkedList/DLLNode.cpp"

int main() {

    LinkedList<int> linkedList = LinkedList<int>();

    linkedList.insertEnd(4);
    linkedList.insertEnd(5);
    linkedList.insertEnd(6);
    linkedList.insertEnd(7);
    linkedList.insertEnd(8);
    linkedList.insertBeg(3);
    //linkedList.insertBeg(LLNode<int>(3));
    //linkedList.printTraverse();
    linkedList.reverse();
    //linkedList.print();

    //linkedList.removeWithValue(LLNode<int >(5));
    //linkedList.removeWithValue(LLNode<int >(5));
    //linkedList.removeWithValue(LLNode<int >(8));
    //linkedList.removeWithValue(LLNode<int >(7));
    //linkedList.removeWithValue(LLNode<int >(6));
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
    linkedList.removeWithValue(LLNode<int >(5));
    linkedList.removeWithValue(LLNode<int >(5));
    linkedList.removeWithValue(LLNode<int >(8));
    */


    //doublyLinkedList.print();
    doublyLinkedList.reverse();
    doublyLinkedList.print();


    return 0;
}