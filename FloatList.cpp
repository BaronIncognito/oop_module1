#include <iostream>

class FloatList {
    class Element {
    public:
        Element* next;
        Element* prev;
        float value;

        Element(float value, Element* next, Element* prev) {
            this -> value = value;
            this -> next = next;
            this -> prev = prev;
        }
    };

    Element* first = NULL;

public:
    void print() {
        Element current = *first;
        do {
            std::cout << current.value << " ";
            if (current.next) {
                current = *current.next;
            }
        }
        while (current.next);
        std::cout << std::endl;
    }

    void insert(int index, float value) {
        if (!first) {
            Element* newElement = new Element(value, NULL, NULL);
            first = newElement;
            return;
        }
        Element* current = first;
        for (int i = 0; i < index; i++) {
            if (!current->next) {
                Element* newElement = new Element(value, NULL, current);
                current->next = newElement;
                return;
            }
            current = current->next;
        }
        Element* newElement = new Element(value, current, current->prev);
        if (current->prev) {
            std::cout << (current->prev)->value << std::endl;
            (current->prev)->next = newElement;
        }
        current->prev = newElement;
    }

    void remove(int index) {
        Element current = *first;
        for (int i = 0; i < index; i++) {
            if (!current.next) {
                return;
            }
            current = *current.next;
        }
        if (current.next) {
            (*current.next).prev = current.prev;
        }
        if (current.prev) {
            (*current.prev).next = current.next;
        }
    }
};