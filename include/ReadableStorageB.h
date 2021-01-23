#ifndef READABLE_STORAGE_B_H
#define READABLE_STORAGE_B_H

#include <ReadableStorage.h>
namespace StorageSpace
{
    class ReadableStorageB : public ReadableStorage
    {
    public:
        ReadableStorageB(int, int);
        void read() override;
    private:
        std::vector<std::string> visited_indexes_;
        int dimension_;
        int size_;
    };
} // namespace StorageSpace
#endif
