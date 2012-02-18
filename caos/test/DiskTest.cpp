#include "DiskTest.h"

#include <stdlib.h>

void DiskTest::SetUp(){
    disk = new pc::Disk(500, 64, 6, 512);
    logicalAddresses = new std::vector<long>();
    expected = new std::vector<pc::PhysicalDiskAddress*>();
    generateLogicalAddresses();
    generateExpectedAddresses();
}

void DiskTest::TearDown(){
    delete disk;
    delete logicalAddresses;
    delete expected;
}

void DiskTest::generateLogicalAddresses(){
    logicalAddresses->push_back(1234);
    logicalAddresses->push_back(204);
    logicalAddresses->push_back(60213);
    logicalAddresses->push_back(9237);
    logicalAddresses->push_back(913);
    logicalAddresses->push_back(8645);
    logicalAddresses->push_back(10652);
    logicalAddresses->push_back(42135);
    logicalAddresses->push_back(8021);
}

void DiskTest::generateExpectedAddresses(){
    generateExpectedAddress(3, 1, 19);
    generateExpectedAddress(0, 3, 13);
    generateExpectedAddress(156, 4, 54);
    generateExpectedAddress(24, 0, 22);
    generateExpectedAddress(2, 2, 18);
    generateExpectedAddress(22, 3, 6);
    generateExpectedAddress(27, 4, 29);
    generateExpectedAddress(109, 4, 24);
    generateExpectedAddress(20, 5, 22);
}

void DiskTest::generateExpectedAddress(long cylinder, long head, long sector){
    pc::PhysicalDiskAddress* ppa = new pc::PhysicalDiskAddress;
    ppa->cylinder = cylinder;
    ppa->head = head;
    ppa->sector = sector;
    expected->push_back(ppa);
}

bool DiskTest::isSameAddress(pc::PhysicalDiskAddress* pda, pc::PhysicalDiskAddress* otherPda){
    bool c = pda->cylinder == otherPda->cylinder;
    bool h = pda->head == otherPda->head;
    bool s = pda->sector == otherPda->sector;
    return c && h && s;
}

// Tests the default c'tor.
TEST_F(DiskTest, DefaultConstructor) {
    std::vector<pc::PhysicalDiskAddress*>* translated = disk->translateLogicalAddress((*logicalAddresses));
    int size = translated->size();
    for (int i = 0; i < size; i++) {
        pc::PhysicalDiskAddress* transAddress = translated->front();
        pc::PhysicalDiskAddress* expectedAddress = expected->front();
        EXPECT_TRUE(isSameAddress(expectedAddress, transAddress));
        translated->erase(translated->begin());
        expected->erase(expected->begin());
        delete expectedAddress;
        delete transAddress;
  }
}
