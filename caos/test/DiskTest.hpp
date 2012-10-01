#pragma once

#include "gtest/gtest.h"
#include <IO/Disk.hpp>

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
