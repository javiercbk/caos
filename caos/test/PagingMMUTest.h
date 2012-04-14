#ifndef MMUTEST_H
#define MMUTEST_H

#include "gtest/gtest.h"
#include "../include/memory/MMU.h"
#include "../include/BUS.h"
#include "../include/memory/PagingTranslator.h"
#include "../include/memory/ProcessPage.h"

class PagingMMUTest : public testing::Test
{
    protected:
        virtual void SetUp();
        virtual void TearDown();
        pc::MMU<os::ProcessPage*>* pagedMMU;
        pc::BUS* bus;
        os::ProcessPage* ppage;
};

#endif // MMUTEST_H
