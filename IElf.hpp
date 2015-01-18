#ifndef IELF_HPP
# define IELF_HPP

# include "ConveyorBeltPePeNoel.hpp"
# include "TablePePeNoel.hpp"

class IElf
{
public:
  virtual ~IElf() {}
  virtual void startWork() = 0;
  virtual bool sendGift() = 0;
};

#endif
