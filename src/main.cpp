#include <iostream>
#include "linkedlist/LinkedList.h"
#include "doublylinkedlist/DoublyLinkedList.h"
#include "stack/Stack.h"
#include "queue/Queue.h"
#include "binaryheap/BinaryHeapArrayImp.h"
#include "binaryheap/BinaryHeapTreeImp.h"
int main() {

    LinkedList<int> linkedList = LinkedList<int>();

    /*
    linkedList.insertEnd(4);
    linkedList.insertEnd(5);
    linkedList.insertEnd(6);
    linkedList.insertEnd(7);
    linkedList.insertEnd(8);
    linkedList.insertBeg(3);
    */

    //linkedList.insertBeg(NodeZero<int>(3));
    //linkedList.printTraverse();
    //linkedList.reverse();
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

    /*
    doublyLinkedList.insertEnd(4);
    doublyLinkedList.insertEnd(5);
    doublyLinkedList.insertEnd(6);
    doublyLinkedList.insertEnd(7);
    doublyLinkedList.insertEnd(8);
    doublyLinkedList.insertBeg(3);
    */

    /*
    linkedList.removeWithValue(NodeZero<int >(5));
    linkedList.removeWithValue(NodeZero<int >(5));
    linkedList.removeWithValue(NodeZero<int >(8));
    */


    //doublyLinkedList.print();
    //doublyLinkedList.reverse();
    //doublyLinkedList.print();

    Stack<int> stack = Stack<int>();
    /*
    stack.push(5);
    stack.push(4);
    stack.push(3);
    stack.push(2);
    stack.push(1);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
     */

    Queue<int> queue = Queue<int>();
    /*
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);

    int x = queue.pop()->getData();
    */
    BinaryHeapArrayImp<int> binaryHeapArrayImp = BinaryHeapArrayImp<int>(100);
    /*
    binaryHeapArrayImp.push(5);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(4);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(6);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(3);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(3);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(3);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(3);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(3);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(1);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(5);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(5);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(5);
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.push(5);

    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.pop();
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.pop();
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    binaryHeapArrayImp.pop();
    std::cout << binaryHeapArrayImp.getTop() << " " << binaryHeapArrayImp.getSize() << std::endl;
    */
    BinaryHeapTreeImp<int> binaryHeapTreeImp = BinaryHeapTreeImp<int>();
    binaryHeapTreeImp.push(5);
    std::cout << binaryHeapTreeImp.getTop() << " " << binaryHeapTreeImp.getSize() << std::endl;
    binaryHeapTreeImp.push(5);
    std::cout << binaryHeapTreeImp.getTop() << " " << binaryHeapTreeImp.getSize() << std::endl;
    binaryHeapTreeImp.push(5);
    std::cout << binaryHeapTreeImp.getTop() << " " << binaryHeapTreeImp.getSize() << std::endl;
    binaryHeapTreeImp.push(3);
    std::cout << binaryHeapTreeImp.getTop() << " " << binaryHeapTreeImp.getSize() << std::endl;

    return 0;
}