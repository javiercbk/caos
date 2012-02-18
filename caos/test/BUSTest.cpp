#include "BUSTest.h"

void BUSTest::SetUp(){
  bus = new pc::BUS();
  busWritters = new std::vector<MockUpBusWritter*>();
  busListeners = new std::vector<MockUpBusListener*>();
}

void BUSTest::TearDown(){
  delete busWritters;
  delete busListeners;
  delete bus;
}

void BUSTest::createListeners(){
  for(int i=0; i < 5; i++){
    MockUpBusListener* l = new MockUpBusListener();
    busListeners->push_back(l);
    bus->appendListener(l);
  }
}

void BUSTest::createWritters(){
  for(int i=0; i < 5; i++){
    MockUpBusWritter* w = new MockUpBusWritter(bus);
    busWritters->push_back(w);
  }
}

// Tests the default c'tor.
TEST_F(BUSTest, DefaultConstructor) {
  createWritters();
  createListeners();
  unsigned int signalToSend = 0;
  for (std::vector<MockUpBusWritter*>::iterator it = busWritters->begin(); it!=busWritters->end(); ++it) {
    (*(it))->sendSignal(signalToSend);
    signalToSend++;
  }
  signalToSend--;
  for (std::vector<MockUpBusListener*>::iterator it = busListeners->begin(); it!=busListeners->end(); ++it) {
    std::vector<unsigned int>::iterator intIt;
    intIt = std::find((*(it))->signalReceived->begin(), ((*(it))->signalReceived->end()),signalToSend);
    signalToSend--;
    ASSERT_NE(intIt, (*(it))->signalReceived->end());
  }
}
