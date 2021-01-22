#ifndef READABLE_STORAGE_B_H
#define READABLE_STORAGE_B_H

#include <ReadableStorage.h>
namespace StorageSpace
{
    class ReadableStorageB : public ReadableStorage
    {
    public:
        ReadableStorageB(int,int);
        void read() override;
    };
} // namespace StorageSpace
#endif
