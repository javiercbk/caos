#include "PCBTest.h"

void PCBTest::SetUp() {
    pcb = new os::PCB(24);
}

void PCBTest::TearDown(){
  delete pcb;
}


// Tests the default c'tor.
TEST_F(PCBTest, DefaultConstructor) {
  EXPECT_EQ(20, pcb->getNice());
  EXPECT_EQ(0, pcb->getIp());
  EXPECT_EQ(os::NEW, pcb->getEstado());
  EXPECT_EQ(24, pcb->getPid());
  EXPECT_EQ(0, pcb->getQExecuted());
}
