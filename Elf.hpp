#ifndef ELF_HPP
# define ELF_HPP

# include <string>
# include "IElf.hpp"
# include "Teddy.hpp"
# include "LittlePony.hpp"
# include "GiftPaper.hpp"
# include "Box.hpp"
# include "ConveyorBeltPePeNoel.hpp"
# include "TablePePeNoel.hpp"

class Elf : public IElf
{
public:
  Elf();
  ~Elf();

  virtual void startWork();

protected:
  bool SendGift();
  bool CheckIfBoxOnTable();
  bool CheckIfPaperOnTable();
  bool CheckIfToyOnTable();
  bool TableHasPlace();
  bool CheckIfGiftOnTable();
  bool TableHasPlace();
  void EnumTable();
  Object *TakeFirstToy();
  Object *TakeFirstBox();
  Object *TakeFirstPaper();
  void MakeAGift();
  bool TakeAWarp();

private:
  std::string _gender;
  std::string _name;
  ITable *_table;
  IConveyorBelt *_cb;
  Object *_gift;

};

#endif
