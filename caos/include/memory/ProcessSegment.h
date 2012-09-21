#ifndef ProcessSegment_H
#define ProcessSegment_H

#include "memory/ProcessPage.h"

namespace os{

enum ProcessSegmentType {CODE=0, DATA=1, STACK=2};

class ProcessSegment
{
  public:
    ProcessSegment(ProcessSegmentType* type, unsigned long long base, unsigned long long size);
    virtual ~ProcessSegment();
    unsigned long long getBase();
    int getGranularityFlag();
    unsigned long long getLimit();
    bool getSystemFlag();
    ProcessSegmentType getType();
    int getDpl();
    bool isProcessSegmentPresent();
    void setProcessSegmentPresent(bool isPresent);
    void setBase(unsigned long long base);
    void setLimit(unsigned long long limit);
  protected:
  private:
    unsigned long long base; ///base del ProcessSegmento.
    int granularityFlag; ///Granularity flag, siempre seteado a 0.
    unsigned long long limit; ///limite del ProcessSegmento.
    bool systemFlag; ///indica si el ProcessSegmento es del kernel.
    ProcessSegmentType* type; ///el tipo de ProcessSegmento.
    int dpl; ///descriptor privilege level.
    bool processSegmentPresent; ///flag que indica si el ProcessSegmento esta en memoria principal.
    unsigned long long size; /// tama–o del segmento
};

}
#endif // ProcessSegment_H
