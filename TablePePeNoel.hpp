#ifndef TABLEPEPENOEL_HPP_
# define TABLEPEPENOEL_HPP_

# include "ITable.hpp"

class TablePePeNoel : public ITable {
private:
  Object* _content[10];
  std::string _strings[11];

public:
  TablePePeNoel();
  ~TablePePeNoel();
  Object *Take();
  Object *Take(int i);
  bool Put(Object*);
  std::string *Look();
};

ITable *createTable();

#endif
