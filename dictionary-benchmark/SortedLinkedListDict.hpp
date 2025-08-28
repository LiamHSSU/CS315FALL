#pragma once
#include "Dictionary.hpp"

class SortedLinkedListDict : public Dictionary {
public:

    SortedLinkedListDict();
    ~SortedLinkedListDict();

    void insert(int key) override;
    bool lookup(int key) const override;
    void remove(int key) override;

private:
    struct Node {
        int data;
        Node* next;
    };

    Node* head;
};