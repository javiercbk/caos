#include <IO/Disk.hpp>

#include <stdlib.h>

namespace pc{

Disk::Disk(long cylinders, long sectorsTrack, int heads, int sectorSize){
    this->tracks = cylinders;
    this->sectorsTrack = sectorsTrack;
    this->sectorSize = sectorSize;
    this->cylinders = cylinders;
    this->heads = heads;
    this->plates = heads / 2;
}

Disk::~Disk(){

}

PhysicalDiskAddress* Disk::translateLogicalAddress(long logicalAddress){
    PhysicalDiskAddress* ppa = new PhysicalDiskAddress;
    // Obtengo el cilindro
    ppa->cylinder = logicalAddress / (sectorsTrack * heads);
    long r1 = logicalAddress - (ppa->cylinder * sectorsTrack * heads);
    // Obtengo la cabeza
    ppa->head = r1 / sectorsTrack;
    // Obtengo el sector (se le suma 1 porque los sectores arrancan en 1)
    ppa->sector = (r1 - (ppa->head * sectorsTrack)) +1;
    return ppa;
}

std::vector<PhysicalDiskAddress*>* Disk::translateLogicalAddress(std::vector<long> logicalAddresses){
    std::vector<PhysicalDiskAddress*>* addresses = new std::vector<PhysicalDiskAddress*>();
    for(std::vector<long>::iterator it = logicalAddresses.begin(); it!=logicalAddresses.end(); ++it) {
        long logicAdd = (*it);
        PhysicalDiskAddress* pda = this->translateLogicalAddress(logicAdd);
        addresses->push_back(pda);
    }
    return addresses;
}

}
