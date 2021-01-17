#include <DataStorage.h>
using namespace StorageSpace;

DataStorage::DataStorage(int dimension_size, int size)
    : dimension_size_(dimension_size), size_(size), vec_(dimension_size_, std::vector<vec_of_ints>(size_, vec_of_ints(size_))), mt(ran_dev()), uniform_dist((0, 1000))
{
    for (int i = 0; i < dimension_size_; ++i)
    {
        for (int row = 0; row < size; row++)
        {
            for (int col = 0; col < size; col++)
            {
                vec_[i][row][col] = i;
            }
        }
    }
}
int DataStorage::get_storage_size() const
{
    return dimension_size_ * pow(size_, 2);
}

std::vector<std::vector<vec_of_ints>> &DataStorage::get_stored_element() { return vec_; }

int main()
{
    DataStorage d(5, 10);
    std::cout << d.get_storage_size() << std::endl;
}
