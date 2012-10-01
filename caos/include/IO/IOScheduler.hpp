#pragma once
namespace os {

class IOScheduler
{
  public:
    IOScheduler(int currentBlock);
    virtual ~IOScheduler();
    int getCurrentBlock();
    int getMoveCost();
    int getReadCost();
    void setMoveCost(int moveCost);
    void setReadCost(int readCost);
    virtual void pushBlock(int block) = 0;
    virtual int getNextBlock() = 0;
  protected:
    virtual unsigned int readBlock(int block);
    virtual unsigned int goToBlock(int block);
    int currentBlock;
    int moveCost;
    int readCost;
  private:
};

}
