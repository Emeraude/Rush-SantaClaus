#ifndef IELF_HPP
# define IELF_HPP

# include "ConveyorBeltPePeNoel.hpp"
# include "Table.hpp"

class IEfl
{
public:
  virtual void startWork() = 0;

protected:
  virtual bool sendGift() = 0;
};

#endif
