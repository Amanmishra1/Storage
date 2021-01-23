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
        ReadableStorage(int dimension, int sz) : data_storage_(std::make_shared<DataStorage>(dimension, sz)), dimension_(dimension), size_(sz)
        {
        }

        virtual ~ReadableStorage() = default;

        void info(){
            std::cout << "storage has " << data_storage_->get_storage_size() << " values" << std::endl;
        };

        virtual void read() = 0;
        auto getDataStorage() const
        {
            return data_storage_;
        }
        
    private:
        std::mutex mu_;
        std::shared_ptr<DataStorage> data_storage_;
        int dimension_;
        int size_;
    };
} // namespace StorageSpace
#endif
