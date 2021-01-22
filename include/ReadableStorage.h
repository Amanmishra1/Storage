#ifndef READABLE_STORAGE_H
#define READABLE_STORAGE_H

#include <mutex>
#include <memory>
#include <DataStorage.h>
#include <thread>

namespace StorageSpace
{
    class ReadableStorage
    {
    public:
        ReadableStorage(int dimension, int sz) : data_storage_(std::make_shared<DataStorage>(dimension, sz)),dimension_(dimension) ,size_(sz)
        {
        }

        virtual ~ReadableStorage() = default;

        void info(){

        };

        virtual void read() = 0;
        auto getDataStorage() const
        {
            return data_storage_;
        }

        int getDimension() const
        {
            return dimension_;
        }

        int getSize() const
        {
            return size_;
        }

    private:
        std::mutex mu_;
        std::shared_ptr<DataStorage> data_storage_;
        int dimension_;
        int size_;
    };
} // namespace StorageSpace
#endif
