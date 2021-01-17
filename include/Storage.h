#ifndef _STORAGE_H
#define _STORAGE_H

#include <array>
#include <cmath>
#include <iostream>
#include <random>
#include <vector>

using namespace std;

namespace StorageSpace
{

    using vec_of_ints = std::vector<int>;

    //  Need to Create dynamic Array, this is just to comply with the Assignment Question
    // Need to create the object as per the dimension and Size;
    class Storage
    {
    public:
        virtual int get_storage_size() const = 0;

    private:
    };
} // namespace StorageSpace

#endif