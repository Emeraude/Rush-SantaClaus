#ifndef TABLEPEPENOEL_HPP_
# define TABLEPEPENOEL_HPP_

# include "ITable.hpp"

class TablePePeNoel : public ITable {
private:
  Object* _content[10];

public:
  TablePePeNoel();
  ~TablePePeNoel();
  Object *Take();
  bool Put(Object*);
  std::string[] Look() const;
};

#endif
