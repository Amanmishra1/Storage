#ifndef READABLE_STORAGE_B_H
#define READABLE_STORAGE_B_H

#include <ReadableStorage.h>
namespace StorageSpace
{
    class ReadableStorageB : public ReadableStorage
    {
    public:
        explicit ReadableStorageB();
        void read() override;
        void info() override;
    };
} // namespace StorageSpace
#endif
