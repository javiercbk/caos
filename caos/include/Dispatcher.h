#ifndef DISPATCHER_H
#define DISPATCHER_H

namespace os{

class Dispatcher
{
  public:
    Dispatcher();
    virtual ~Dispatcher();
    void contextSwitch();
  protected:
  private:
};

}
#endif // DISPATCHER_H
