cmake_minimum_required(VERSION 3.14)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

#add_library(DataStructuresLib ${SOURCE_FILES})

add_executable(DataStructures main.cpp
        nodes/NodeOne.cpp nodes/NodeOne.h
        nodes/NodeOne.cpp nodes/NodeOne.h
        linkedlist/LinkedList.h linkedlist/LinkedList.cpp
        doublylinkedlist/DoublyLinkedList.cpp doublylinkedlist/DoublyLinkedList.h
        stack/Stack.cpp stack/Stack.h
        queue/Queue.cpp queue/Queue.h binaryheap/BinaryHeapArrayImp.cpp binaryheap/BinaryHeapArrayImp.h binaryheap/BinaryHeapTreeImp.cpp binaryheap/BinaryHeapTreeImp.h binaryheap/BinaryHeap.cpp binaryheap/BinaryHeap.h)


