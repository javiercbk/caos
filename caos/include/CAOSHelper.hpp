#pragma once

#include <string>

/**
* @brief Helper de Caos
* Esta clase implementa funcionalidades que no resuelve
* ni el hardware ni el sistema operativo y solo aportan
* a la funcionalidad interna de caos.
*/
class CAOSHelper
{
  public:
    /**
    * Devuelve siempre una unica instancia utilizando el patron singleton
    */
    static CAOSHelper* getInstance(){
      if(CAOSHelper::instance == NULL){
        CAOSHelper::instance = new CAOSHelper();
      }
      return instance;
    }
    /**
    * De un string que contiene un numero binario, devuelve un
    * entero decimal.
    * @param strBinary Numero binario representado como string.
    */
    long parseBinary(std::string strBinary);
  protected:
  private:
    static CAOSHelper* instance;
    CAOSHelper();
};
