#ifndef DISK_H
#define DISK_H

#include <vector>

namespace pc{

/**
    @brief direccion fisica de disco
    Esta estructura modela una dirección fisica de un bloque
    @author Javier Lecuona
    @date Diciembre 2011
*/
struct PhysicalDiskAddress{
    unsigned int cylinder;
    unsigned int head;
    unsigned int sector;
};


class Disk
{
    public:
        Disk(long cylinders, long sectorsTrack, int heads, int sectorSize = 512);
        virtual ~Disk();
        PhysicalDiskAddress* translateLogicalAddress(long logicalAddress);
        std::vector<PhysicalDiskAddress*>* translateLogicalAddress(std::vector<long> logicalAddresses);
    private:
        long tracks;
        long sectorsTrack;
        float sectorSize;
        long cylinders;
        int heads;
        int plates;
};

}
#endif // DISK_H
