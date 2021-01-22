#ifndef READABLE_STORAGE_A_H
#define READABLE_STORAGE_A_H

#include <ReadableStorage.h>

namespace StorageSpace
{
    class ReadableStorageA : public ReadableStorage
    {
    public:
        ReadableStorageA(int,int);
        void read() override;
    private:
        int dimension_;
        int size_;
    };
} // namespace StorageSpace
#endif
