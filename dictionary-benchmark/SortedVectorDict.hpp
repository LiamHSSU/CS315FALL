#pragma once
#include "Dictionary.hpp"
class SortedVectorDict : public Dictionary {
public:
    void insert(int) override;
    bool lookup(int) const override;
    void remove(int) override;

private:
    std::vector<int> data;
    std::size_t lookup_idx(int key) const;

};