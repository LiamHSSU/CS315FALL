#include "UnsortedLinkedListDict.hpp"

UnsortedLinkedListDict::UnsortedLinkedListDict() : head(nullptr) {}

// Thankfully this is somewhat fine with timing.
UnsortedLinkedListDict::~UnsortedLinkedListDict() {
    while (head) {
        Node* next_node = head->next;
        delete head;
        head = next_node;
    }
}

void UnsortedLinkedListDict::insert(int key) {
    Node* new_node = new Node{key, head};
    head = new_node;
}


bool UnsortedLinkedListDict::lookup(int key) const {
    const Node* current = head;

    while (current && current->data <= key) {
        if (current->data == key) return true;
        current = current->next;
    }
    return false;
}

void UnsortedLinkedListDict::remove(int key) {
    Node* previous = nullptr;
    Node* current = head;
    while (current) {
        if (current->data == key) {
            if (previous) previous->next = current->next;
            else head = current->next;
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
}
