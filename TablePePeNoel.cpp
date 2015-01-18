#include <iostream>
#include "TablePePeNoel.hpp"

TablePePeNoel::TablePePeNoel() {
  for (int i = 0; i < 9; ++i)
    _content[i] = NULL;
  _strings = new std::string[10];
  this->generateStrings();
}

TablePePeNoel::~TablePePeNoel() {
  delete _strings;
}

void TablePePeNoel::generateStrings() {
  for (int i = 0; i < 10; i++)
    _strings[i] = "";
  int i = -1;
  int j = -1;
  while (++i < 10)
    if (_content[i])
      _strings[++j] = _content[i]->getName();
  _strings[++j] = "";
}

Object *TablePePeNoel::Take() {
  for (int i = 0; i < 9; ++i)
    if (_content[i]) {
      _content[i]->isTaken();
      Object *tmp = _content[i];
      _content[i] = NULL;
      this->generateStrings();
      return tmp;
    }
  std::cerr << "The table is empty" << std::endl;
  return NULL;
}

Object *TablePePeNoel::Take(int i) {
  if (_content[i]) {
    _content[i]->isTaken();
    Object *tmp = _content[i];
    _content[i] = NULL;
    this->generateStrings();
    return tmp;
  }
  std::cerr << "This Object does not exists !" << std::endl;
  return NULL;
}

bool TablePePeNoel::Put(Object *) {
  for (int i = 0; i < 9; ++i)
    if (!_content[i]) {
      _content[i] = NULL;
      this->generateStrings();
      return true;
    }
  std::cerr << "Too many Objects on the table ! It collapses !" << std::endl;
  return false;
}

std::string* TablePePeNoel::Look() const {
  return _strings;
}

ITable *createTable()
{
  ITable *table = new TablePePeNoel;
  // TODO : Init with 2 2 2
  return table;
}
