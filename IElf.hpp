#ifndef IELF_HPP
# define IELF_HPP

# include "ConveyorBeltPePeNoel.hpp"
# include "TablePePeNoel.hpp"

class IEfl
{
protected:
  virtual ~IEfl() {}
  virtual void startWork() = 0;
  virtual bool sendGift() = 0;
};

#endif
