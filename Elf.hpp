#ifndef ELF_HPP
# define ELF_HPP

# include <string>
# include "IElf.hpp"
# include "Teddy.hpp"
# include "LittlePony.hpp"
# include "GiftPaper.hpp"
# include "Box.hpp"
# include "ConveyorBeltPePeNoel.hpp"
# include "Table.hpp"

class Efl
{
public:
  Elf();
  ~Elf();

  virtual void startWork();

protected:
  bool sendGift();

private:
  std::string _gender;
  std::string _name;
  ITable *_table;
  IConveyorBelt *_cb;

};

#endif
