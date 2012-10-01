#pragma once

#include <memory/Address.h>
#include <memory/PageDescriptor.h>

namespace os{

class ProcessPage : public Address<PageDescriptor>
{
  public:
    ProcessPage(unsigned long long dir, unsigned long long page, unsigned long long offset);
    virtual ~ProcessPage();
    unsigned long long getDirectory();
    unsigned long long getPage();
    unsigned long long getTable();
    unsigned long long getOffset();
    bool isPresent();
    unsigned int getAccessed();
    bool isDirty();
    long getPageSize();
    void setDirectory(unsigned long long dir);
    void setPage(unsigned long long page);
    void setTable(unsigned long long table);
    void setOffset(unsigned long long offset);
    void setPresent(bool present);
    void setAccessed(unsigned int accessed);
    void setDirty(bool dirty);
    void setPageSize(unsigned long pageSize);
    unsigned long long getDecimalDir(unsigned int bitsDir, unsigned int bitsPag, unsigned int bitsOffset);
    unsigned long long getDecimalDir(PageDescriptor wordDescriptor);
  protected:
    unsigned long long directory;///posicion de la tabla de paginas en la tabla de directorio de paginas
    unsigned long long page;///numero de la pagina
    unsigned long long table;///posicion de la pagina en la tabla de paginas
    unsigned long long offset;///offset en la pagina
    bool present;///flag que indica si la pagina esta en memoria principal
    unsigned int accessed;///cuenta las veces que la pagina fue accedida
    bool dirty;
    long pageSize;
};

}
