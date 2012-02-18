#ifndef DISKTEST_H
#define DISKTEST_H

#include "gtest/gtest.h"
#include "../include/IO/Disk.h"

#include <vector>


class DiskTest : public testing::Test
{
    protected:
        virtual void SetUp();
        virtual void TearDown();
        pc::Disk* disk;
        std::vector<long>* logicalAddresses;
        std::vector<pc::PhysicalDiskAddress*>* expected;
        void generateLogicalAddresses();
        void generateExpectedAddresses();
        void generateExpectedAddress(long cylinder, long head, long sector);
        bool isSameAddress(pc::PhysicalDiskAddress* pda, pc::PhysicalDiskAddress* otherPda);
};

#endif // DISKTEST_H
