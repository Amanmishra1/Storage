#include <ReadableStorageB.h>
#include <cstdlib>

using namespace StorageSpace;

std::mutex mu;

ReadableStorageB::ReadableStorageB(int dimension, int size) : ReadableStorage(dimension, size), dimension_(dimension), size_(size)
{
}

void ReadableStorageB::read()
{
    std::lock_guard<std::mutex> lock(mu);
    
    static std::shared_ptr<DataStorage> data;
    static bool bvist = false;
    bool bIndexVisited = false;

    if (!bvist) // first read called
    {
        data = getDataStorage();
        bvist = true;
    }

    while (1)
    {
        bIndexVisited = false;
        int row_rand = rand() % size_;
        int col_rand = rand() % size_;
        int dim_rand = rand() % dimension_;

        std::string concat = to_string(dim_rand) + to_string(row_rand) + to_string(col_rand);
        for (auto index : visited_indexes_)
        {
            if(concat == index) // key already visited
                bIndexVisited = true;
        }

        if(!bIndexVisited)  // first time visit
        {
            std::cout << "key:[" << dim_rand << row_rand << col_rand << "]"
                  << " value:" << data->get_element_at_pos(dim_rand, row_rand, col_rand) << std::endl; 
            visited_indexes_.push_back(concat);
            break;
        }

        if(visited_indexes_.size() >= dimension_*size_*size_)
        {
            std::cout << "end of storage reached" << std::endl;
            break;
        }
    }
}
