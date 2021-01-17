#ifndef READABLE_STORAGE_A_H
#define READABLE_STORAGE_A_H

#include <ReadableStorage.h>
namespace StorageSpace
{
    class ReadableStorageA : public ReadableStorage
    {
    public:
        explicit ReadableStorageA();
        void read() override;
        void info() override;
    };
} // namespace StorageSpace
#endif
