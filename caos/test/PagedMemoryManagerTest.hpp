/*
 * PagedMemoryManagerTest.h
 *
 *  Created on: Sep 25, 2012
 *      Author: javier
 */

#pragma once

#include "gtest/gtest.h"
#include <memory/PagedMemoryManager.hpp>

class PagedMemoryManagerTest  : public testing::Test{
protected:
	virtual void SetUp();
	virtual void TearDown();
	os::PagedMemoryManager* pagedMemoryManager;
	pc::BUS* bus;
};
