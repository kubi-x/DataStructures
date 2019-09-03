cmake_minimum_required(VERSION 3.14)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructures main.cpp
        LinkedList/LinkedList.h LinkedList/LinkedList.cpp LinkedList/LLNode.cpp LinkedList/LLNode.h
        DoublyLinkedList/DoublyLinkedList.cpp DoublyLinkedList/DoublyLinkedList.h DoublyLinkedList/DLLNode.cpp DoublyLinkedList/DLLNode.h)