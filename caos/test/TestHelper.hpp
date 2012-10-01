#pragma once

#include <stdlib.h>
#include <time.h>
#include <list>

namespace test{

class TestHelper
{
    public:
        static int makeRandomBlock(){
            srand (time(NULL));
            return rand() % 100 + 1;
        }
};

}
