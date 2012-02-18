#ifndef PAGEFRAME_H
#define PAGEFRAME_H

namespace os{

class PageFrame
{
  public:
    PageFrame();
    virtual ~PageFrame();
    unsigned int getDirectory();
    unsigned int getPage();
    unsigned int getFrame();
    unsigned int getTable();
    unsigned int getOffset();
    bool isPresent();
    unsigned int getAccessed();
    bool isDirty();
    long getPageSize();
    void setDirectory(unsigned int dir);
    void setPage(unsigned int page);
    void setFrame(unsigned int frame);
    void setTable(unsigned int table);
    void setOffset(unsigned int offset);
    void setPresent(bool present);
    void setAccessed(unsigned int accessed);
    void setDirty(bool dirty);
    void setPageSize(long pageSize);
  protected:
    unsigned int directory;///posicion de la tabla de paginas en la tabla de directorio de paginas
    unsigned int page;///numero de la pagina
    unsigned int frame;///numero de frame
    unsigned int table;///posicion de la pagina en la tabla de paginas
    unsigned int offset;///offset en la pagina
    bool present;///flag que indica si la pagina esta en memoria principal
    unsigned int accessed;///cuenta las veces que la pagina fue accedida
    bool dirty;
    long pageSize;
};

}
#endif // PAGEFRAME_H
