#include "SortedLinkedListDict.hpp"

SortedLinkedListDict::SortedLinkedListDict() : head(nullptr) {}

SortedLinkedListDict::~SortedLinkedListDict() {
   Node* current = head;
   while (current) {
       Node* next_node = current->next;
       delete current;
       current = next_node;

    }
}
// Do not know what's wrong and making it taking so long, I feel like it
// should not be THAT long, this applies to all of them
void SortedLinkedListDict::insert(int key) {
    Node* previous = nullptr;
    Node* current = head;
    while (current && current->data < key) {
        previous = current;
        current = current->next;
    }
    Node* new_node = new Node{key, current};
    if (previous) previous->next = new_node;
    else head = new_node;
}


bool SortedLinkedListDict::lookup(int key) const {
    const Node* current = head;

    while (current && current->data <= key) {
        if (current->data == key) return true;
        current = current->next;
    }
    return false;
}

void SortedLinkedListDict::remove(int key) {
    Node* previous = nullptr;
    Node* current = head;
    while (current && current->data < key) {
        previous = current;
        current = current->next;
    }
    if (current && current->data == key) {
        if (previous) previous->next = current->next;
        else head = current->next;
        delete current;
    }
}
