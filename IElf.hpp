#ifndef IELF_HPP
# define IELF_HPP

# include "ConveyorBeltPePeNoel.hpp"
# include "TablePePeNoel.hpp"

class IElf
{
protected:
  virtual ~IElf() {}
  virtual void startWork() = 0;
  virtual bool sendGift() = 0;
  virtual bool CheckIfBoxAvailable() const = 0;
  virtual bool CheckIfPaperAvailable() const = 0;
  virtual bool CheckIfToyAvailable() const = 0;
  virtual bool CheckIfGiftAvailable() const = 0;
  virtual bool TableHasPlace() const = 0;
  virtual void EnumTable() const = 0;
  virtual Object *TakeFirstToy() = 0;
  virtual Object *TakeFirstBox() = 0;
  virtual Object *TakeFirstPaper() = 0;
  virtual void MakeAGift() = 0;
  virtual bool TakeAWarp() = 0;
};

#endif
