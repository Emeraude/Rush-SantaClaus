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

class Efl
{
public:
  Elf();
  ~Elf();

  virtual void startWork();

protected:
  bool sendGift();
  bool CheckIfBoxOnTable();
  bool CheckIfPaperOnTable();
  bool CheckIfToyOnTable();
  bool TableHasPlace();
  bool CheckIfGiftOnTable();
  bool TableHasPlace();
  void EnumTable();
  Object *takeFirstToy();
  Object *takeFirstBox();
  Object *takeFirstPaper();
  void makeAGift();
  bool takeAWarp();

private:
  std::string _gender;
  std::string _name;
  ITable *_table;
  IConveyorBelt *_cb;

};

#endif
