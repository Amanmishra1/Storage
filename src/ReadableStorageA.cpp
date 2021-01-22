#include <ReadableStorageA.h>
using namespace StorageSpace;

ReadableStorageA::ReadableStorageA(int dimension, int size) : ReadableStorage(dimension, size), dimension_(dimension), size_(size)
{
}

void ReadableStorageA::read()
{
    static int dim, row, col;
    static std::shared_ptr<DataStorage> data;
    static bool bvist = false;

    if (!bvist) // first read called
    {
        data = getDataStorage();
        std::cout << "key:[" << dim << row << col << "]"
                  << " value:" << data->get_element_at_pos(dim, row, col) << std::endl;
        bvist = true;
        return;
    }

    col++;
    if (col == size_)
    {
        col = 0;
        row++;
    }
    if (row == size_)
    {
        row = 0;
        col = 0;
        dim++;
    }

    if (col < size_ && row < size_ && dim < dimension_)
    {
        std::cout << "key:[" << dim << row << col << "]"
                  << " value:" << data->get_element_at_pos(dim, row, col) << std::endl;
    }
    else
    {
        std::cout << "end of storage reached" << std::endl;
        return;
    }
}