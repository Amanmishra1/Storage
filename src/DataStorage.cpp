#include <DataStorage.h>
using namespace StorageSpace;

DataStorage::DataStorage(int dimension_size, int size)
    : dimension_size_(dimension_size), size_(size), vec_(dimension_size_, std::vector<vec_of_ints>(size_, vec_of_ints(size_))), mt_(ran_dev_()), uniform_dist_((0, 100))
{
    for (int i = 0; i < dimension_size_; ++i)
    {
        for (int row = 0; row < size; ++row)
        {
            for (int col = 0; col < size; ++col)
            {
                vec_[i][row][col] = uniform_dist_(mt_);
            }
        }
    }
}

int DataStorage::get_storage_size() const
{
    return dimension_size_ * pow(size_, 2);
}

auto &DataStorage::get_stored_element() { return vec_; }

int DataStorage::get_element_at_pos(int dim, int row, int col)
{
    return vec_[dim][row][col];
}