#pragma once

#include "gtest/gtest.h"
#include <memory/MMU.hpp>
#include <BUS.hpp>
#include <memory/PagingTranslator.hpp>
#include <memory/ProcessPage.hpp>
#include <memory/PageDescriptor.hpp>

class PagingMMUTest : public testing::Test
{
    protected:
        virtual void SetUp();
        virtual void TearDown();
        pc::MMU<os::ProcessPage*, os::PageDescriptor>* pagedMMU;
        pc::BUS* bus;
        os::ProcessPage* ppage;
};
