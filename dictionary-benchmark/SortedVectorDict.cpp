#include "SortedVectorDict.hpp"

// all pretty much the same as unsorted just making sure to keep integrity
void SortedVectorDict::insert(int key) {
    std::size_t low = 0;
    std::size_t high = data.size();
    while (low < high) {
        std::size_t middle = low + (high - low) / 2;
        if (data[middle] < key) {
            low = middle + 1;
        } else {
            high = middle;
        }
    }
    data.insert(data.begin() + low, key);
}

std::size_t SortedVectorDict::lookup_idx(int key) const {
    std::size_t low = 0;
    std::size_t high = data.size();
    while (low < high) {
        std::size_t middle = low + (high - low) / 2;
        if (data[middle] < key) {
            low = middle + 1;
        } else {
            high = middle;
        }
    }
    return low;
}

bool SortedVectorDict::lookup(int key) const {
    std::size_t index = lookup_idx(key);
    return index < data.size() && data[index] == key;
}

void SortedVectorDict::remove(int key) {
    std::size_t index = lookup_idx(key);
    if (index < data.size() && data[index] == key) {
        data.erase(data.begin() + index);
    }
}