#include <CAOSHelper.h>


long CAOSHelper::parseBinary(std::string strBinary){
    long result = 0;
     for(size_t count = 0; count < strBinary.length() ; ++count)
    {
        result *=2;
        result += strBinary[count]=='1'? 1 :0;
    }
    return result;
}

CAOSHelper::CAOSHelper(){

}
