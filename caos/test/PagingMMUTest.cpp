#include "PagingMMUTest.h"
#include "TestHelper.h"

void PagingMMUTest::SetUp(){
    bus = new pc::BUS();
    pc::TranslationStrategy<os::ProcessPage*>* pagingTranslator = NULL;
    //1MB memory, 8388608 bits, 20 bits pointer, 2 directories, 1024 pages, 512 bytes page size
    pagingTranslator = new pc::PagingTranslator(1, 10, 9, 20);
    pagedMMU = new pc::MMU<os::ProcessPage*>(1048576, pagingTranslator, bus);
}

void PagingMMUTest::TearDown(){
    delete pagedMMU;
    delete bus;
    delete ppage;
}


TEST_F(PagingMMUTest, DefaultConstructor) {
    //1 0001010111 011011101 = 569053
    //Dir 1 Page 87 offset 221
    ppage = pagedMMU->getAddress(569053);
    EXPECT_EQ(1, ppage->getDirectory());
    EXPECT_EQ(87, ppage->getPage());
    EXPECT_EQ(221, ppage->getOffset());
}
