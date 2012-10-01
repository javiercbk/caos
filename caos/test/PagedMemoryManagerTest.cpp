/*
 * PagedMemoryManagerTest.cpp
 *
 *  Created on: Sep 25, 2012
 *      Author: javier
 */

#include "PagedMemoryManagerTest.hpp"

void PagedMemoryManagerTest::SetUp(){
	bus = new pc::BUS();
	//1MB memory, 8388608 bits, 20 bits pointer, 2 directories, 1024 pages, 512 bytes page size
	pagedMemoryManager = new os::PagedMemoryManager(1024 * 1024, 1, 10, 9, 20, bus);
}

void PagedMemoryManagerTest::TearDown(){
	delete pagedMemoryManager;
	delete bus;
}


TEST_F(PagedMemoryManagerTest, DefaultConstructor) {
	//EXPECT_EQ(block, sameBlock);
}
