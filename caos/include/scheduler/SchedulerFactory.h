#ifndef SCHEDULERFACTORY_H
#define SCHEDULERFACTORY_H

#include "../../include/scheduler/Scheduler.h"
#include "../../include/scheduler/RoundRobinScheduler.h"

namespace os{

enum SchedulerType{ROUND_ROBIN=1, VROUND_ROBIN=2, SPN=3, SJF=4};

class SchedulerFactory
{
  public:
    Scheduler* getScheduler(SchedulerType type);
};

}
#endif // SCHEDULERFACTORY_H
