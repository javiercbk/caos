#include "../../include/memory/BaseRegistryTranslator.h"

namespace pc{

BaseRegistryTranslator::BaseRegistryTranslator(){
}

long BaseRegistryTranslator::translateDecimalDirection(os::PCB* pcb, long logicalDirection) throw(InvalidAddressException)
{
    return pcb->getBase() + logicalDirection;
}

}
