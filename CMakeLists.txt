cmake_minimum_required(VERSION 3.14)
project(DataStructures)

set(CMAKE_CXX_STANDARD 11)

add_executable(DataStructures src/main.cpp
        src/binaryheap/BinaryHeapArrayImp.h
        src/binaryheap/BinaryHeapTreeImp.h
        src/nodes/NodeTwo.h
        src/nodes/NodeOne.h
        src/nodes/NodeZero.h
        src/linkedlist/LinkedList.h
        src/doublylinkedlist/DoublyLinkedList.h
        src/stack/Stack.h
        src/queue/Queue.h)



