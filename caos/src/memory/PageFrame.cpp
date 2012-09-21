#include "memory/PageFrame.h"

namespace os{
PageFrame::PageFrame()
{
  //ctor
}

PageFrame::~PageFrame()
{
  //dtor
}

unsigned int PageFrame::getDirectory(){
  return directory;
}
unsigned int PageFrame::getPage(){
  return page;
}
unsigned int PageFrame::getFrame(){
  return frame;
}
unsigned int PageFrame::getTable(){
  return table;
}
unsigned int PageFrame::getOffset(){
  return offset;
}
bool PageFrame::isPresent(){
  return present;
}
unsigned int PageFrame::getAccessed(){
  return accessed;
}
bool PageFrame::isDirty(){
  return dirty;
}
long PageFrame::getPageSize(){
  return pageSize;
}
void PageFrame::setDirectory(unsigned int dir){
  this->directory = dir;
}
void PageFrame::setPage(unsigned int page){
  this->page = page;
}
void PageFrame::setFrame(unsigned int frame){
  this->frame = frame;
}
void PageFrame::setTable(unsigned int table){
  this->table = table;
}
void PageFrame::setOffset(unsigned int offset){
  this->offset = offset;
}
void PageFrame::setPresent(bool present){
  this->present = present;
}
void PageFrame::setAccessed(unsigned int accessed){
  this->accessed = accessed;
}
void PageFrame::setDirty(bool dirty){
  this->dirty = dirty;
}
void PageFrame::setPageSize(long pageSize){
  this->pageSize = pageSize;
}

}
