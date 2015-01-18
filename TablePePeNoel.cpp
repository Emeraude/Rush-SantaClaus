#include <iostream>
#include "TablePePeNoel.hpp"

TablePePeNoel::TablePePeNoel() {
  for (int i = 0; i < 10; ++i)
    _content[i] = NULL;
}

TablePePeNoel::~TablePePeNoel() {}

Object *TablePePeNoel::Take() {
  for (int i = 0; i < 10; ++i)
    if (_content[i]) {
      _content[i]->isTaken();
      Object *tmp = _content[i];
      _content[i] = NULL;
      return tmp;
    }
  std::cerr << "The table is empty" << std::endl;
  return NULL;
}

Object *TablePePeNoel::Take(int i) {
  if (_content[i])
    return _content[i];
  std::cerr << "This Object does not exists !" << std::endl;
  return NULL;
}

bool TablePePeNoel::Put(Object *) {
  for (int i = 0; i < 9; ++i)
    if (!_content[i]) {
      _content[i] = NULL;
      return true;
    }
  std::cerr << "Too many Objects on the table ! It collapses !" << std::endl;
  return false;
}

std::string[] TablePePeNoel::Look() const {
  std::string strings[11];

  int i = -1;
  int j = -1;
  while (++i < 10)
    if (_content[i])
      strings[++j] = _content[i]->getName();
  strings[++j] = "";
  return strings;
}

ITable *createTable()
{
  ITable *table = new Table;
}
