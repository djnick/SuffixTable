//
// Created by djnic on 31.10.2020.
//

#ifndef SUFFIXTABLE_LIST_H
#define SUFFIXTABLE_LIST_H

#include <string>
#include <iostream>
#include "../../view/ResourceBundle.h"

// TODO: change the definitions to the source file

template<typename T>
struct Node {
    T data;
    Node *next;
};

template<typename T>
class List {
    Node<T> *head;
    int size;
public:
    List() : head(nullptr), size(0) {};

    static List emptyList() {
        return List();
    }

    int getSize() const {
        return size;
    }

    bool isEmpty() const {
        return size == 0;
    }

    void add(T val) {
        Node<T> *n = new Node<T>();
        n->data = val;
        n->next = nullptr;
        if (head == nullptr)
            head = n;
        else {
            Node<T> *temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = n;
        }
        size++;
    }

    T pop() {
        if (head) {
            T p = head->data;
            head = head->next;
            return p;
        }
    }

    bool find(T val) {
        Node<T> *temp = head;
        while (temp->next)
            if (temp->data == val)return true;
            else temp = temp->next;
        delete temp;
        return false;
    }

    T get(int index) {
        if (index > size || head == nullptr)
            std::cerr << APP_LOGGER_SEVERE_PREFIX << "Provided index = " << index << " is incorrect" << std::endl;
        Node<T> *temp = head;
        int i = 0;
        while (temp->next) {
            if (i == index) break;
            temp = temp->next;
            i++;
        }
        return temp->data;
    }

    std::string to_string() {
        std::string result = "[";
        Node<T> *temp = head;
        if (temp != NULL) {
            while (temp->next) {
                result += (temp->data + ", ");
                temp = temp->next;
            }
            result += (temp->data);
        }
        result += "]";
        return result;
    }
};

#endif //SUFFIXTABLE_LIST_H
