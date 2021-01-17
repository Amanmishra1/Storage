#ifndef DATA_STORAGE_H
#define DATA_STORAGE_H

#include <array>
#include <cmath>
#include <iostream>
#include <random>
#include <vector>

#include <Storage.h>

using namespace StorageSpace;

class DataStorage : public Storage
{
public:
    DataStorage(int dimension_size, int size);

    int get_storage_size() const override;
    //copy Stuff to default
    DataStorage(const DataStorage &) = default;
    DataStorage &operator=(const DataStorage &) = default;
    // Move stuff to be default
    DataStorage(DataStorage &&) = default;
    DataStorage &operator=(DataStorage &&) = default;
    virtual ~DataStorage() = default;

public:
    std::vector<std::vector<vec_of_ints>> &get_stored_element();

private:
    const int dimension_size_;
    const int size_;
    std::vector<std::vector<vec_of_ints>> vec_; // This data member holds Everything
    std::random_device ran_dev;
    std::mt19937 mt;
    std::uniform_int_distribution<int> uniform_dist;
};

#endif
