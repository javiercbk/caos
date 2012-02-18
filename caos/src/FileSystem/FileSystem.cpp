#include "../../include/FileSystem/FileSystem.h"

namespace os{

FileSystem::FileSystem(unsigned long long size, unsigned int blockSize, unsigned short pointerSize){
    this->size = size;
    this->blockSize = blockSize;
    this->pointerSize = pointerSize;
}

unsigned long long FileSystem::getSize(){
    return this->size;
}

unsigned int FileSystem::getBlockSize(){
    return this->blockSize;
}

}
