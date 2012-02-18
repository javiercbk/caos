#ifndef BUSTEST_H
#define BUSTEST_H

#include "gtest/gtest.h"
#include <vector>
#include <algorithm>
#include "../include/BUS.h"
#include "../include/BusListener.h"
#include "../include/BusWritter.h"

class MockUpBusListener : public os::BusListener
{
  public:
  std::vector<unsigned int>* signalReceived;
  MockUpBusListener(){
    signalReceived = new std::vector<unsigned int>();
  }
  ~MockUpBusListener(){
    delete signalReceived;
  }
  void receiveSignal(unsigned int signal){
    signalReceived->push_back(signal);
  }
};

class MockUpBusWritter : public pc::BusWritter
{
  public:
  MockUpBusWritter(pc::BUS* bus) : BusWritter(bus){
    this->bus = bus;
  }
  void sendSignal(unsigned int signal){
    bus->transportSignal(signal);
  }
};

class BUSTest : public testing::Test
{
  protected:
    virtual void SetUp();
    virtual void TearDown();
    pc::BUS* bus;
    std::vector<MockUpBusWritter*>* busWritters;
    std::vector<MockUpBusListener*>* busListeners;
    void createListeners();
    void createWritters();
};

#endif // BUSTEST_H
