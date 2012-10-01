#pragma once

#include "gtest/gtest.h"
#include <memory/MMU.h>
#include <BUS.h>
#include <memory/PagingTranslator.h>
#include <memory/ProcessPage.h>
#include <memory/PageDescriptor.h>

class PagingMMUTest : public testing::Test
{
    protected:
        virtual void SetUp();
        virtual void TearDown();
        pc::MMU<os::ProcessPage*, os::PageDescriptor>* pagedMMU;
        pc::BUS* bus;
        os::ProcessPage* ppage;
};
