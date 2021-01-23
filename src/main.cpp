#include <ReadableStorageA.h>
#include <ReadableStorageB.h>
#include <memory>

int main()
{
    int dimension, sz;

    auto readableStorageA = std::make_shared<StorageSpace::ReadableStorageA>(3, 3);
    auto readableStorageB = std::make_shared<StorageSpace::ReadableStorageB>(5, 10);

    readableStorageA->printElementCount();
    readableStorageB->printElementCount();

    readableStorageA->read();
    readableStorageA->read();
    readableStorageA->read();
    readableStorageA->read();
    readableStorageA->read();
    readableStorageA->read();
    readableStorageA->read();
    readableStorageA->read();

    readableStorageB->read();
    readableStorageB->read();
    readableStorageB->read();
}