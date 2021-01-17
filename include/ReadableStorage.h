#ifndef READABLE_STORAGE_H
#define READABLE_STORAGE_H

#include <mutex>
#include <memory>
#include <Storage.h>
namespace StorageSpace
{
    class ReadableStorage
    {
    public:
        virtual void read() = 0;
        virtual void info() = 0;
        virtual ~ReadableStorage() = default;

    private:
        std::mutex mu_;
        std::unique_ptr<StorageSpace::Storage> storage_;
    };
} // namespace Storage
#endif
