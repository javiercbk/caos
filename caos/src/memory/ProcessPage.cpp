#include "../../include/memory/ProcessPage.h"

namespace os{
ProcessPage::ProcessPage()
{
  //ctor
}

ProcessPage::~ProcessPage()
{
  //dtor
}

unsigned long long ProcessPage::getDirectory(){
  return directory;
}
unsigned long long ProcessPage::getPage(){
  return page;
}
unsigned long long ProcessPage::getTable(){
  return table;
}
unsigned long long ProcessPage::getOffset(){
  return offset;
}
bool ProcessPage::isPresent(){
  return present;
}
unsigned int ProcessPage::getAccessed(){
  return accessed;
}
bool ProcessPage::isDirty(){
  return dirty;
}
long ProcessPage::getPageSize(){
  return pageSize;
}
void ProcessPage::setDirectory(unsigned long long dir){
  this->directory = dir;
}
void ProcessPage::setPage(unsigned long long page){
  this->page = page;
}
void ProcessPage::setTable(unsigned long long table){
  this->table = table;
}
void ProcessPage::setOffset(unsigned long long offset){
  this->offset = offset;
}
void ProcessPage::setPresent(bool present){
  this->present = present;
}
void ProcessPage::setAccessed(unsigned int accessed){
  this->accessed = accessed;
}
void ProcessPage::setDirty(bool dirty){
  this->dirty = dirty;
}
void ProcessPage::setPageSize(unsigned long pageSize){
  this->pageSize = pageSize;
}

unsigned long long ProcessPage::getDecimalDir(unsigned int bitsDir, unsigned int bitsPag, unsigned int bitsOffset){
    unsigned long long decimalDir = this->directory << bitsDir;
    decimalDir += this->page << bitsPag;
    decimalDir += this->offset << bitsOffset;
    return decimalDir;
}

}
