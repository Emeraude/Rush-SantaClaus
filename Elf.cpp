#include "Elf.hpp"

Elf::Elf() :
    _gender("None"),
    _name("Dobby")
{
  _table = createTable();
  _cb = createConveyorBelt();
}

Elf::~Elf()
{
  std::cout << _name << " est liiiiiiiiiibre !!!" << std::endl;
}

bool Elf::CheckIfBoxOnTable()
{
  std::string *s = _table->Look(); // list of objects
  for (int i; !s.empty(); i++)
    if (s[i] == BOX_NAME)
      return true;
  return false;
}

bool Elf::CheckIfPaperOnTable()
{
  std::string *s = _table->Look(); // list of objects
  for (int i; !s.empty(); i++)
    if (s[i] == PAPER_NAME)
      return true;
  return false;
}

bool Elf::CheckIfToyOnTable()
{
  std::string *s = _table->Look(); // list of objects
  for (int i; !s.empty(); i++)
    if (s[i] == TEDDY_NAME || s[i] == PONY_NAME)
      return true;
  return false;
}

bool Elf::CheckIfGiftOnTable()
{
  return CheckIfBoxOnTable() && CheckIfPaperOnTable() && CheckIfToyOnTable();
}

bool Elf::TableHasPlace()
{
  std::string *s = _table->Look();
  for (int i; !s.empty(); i++);
  return i - 10;
}

void Elf::EnumTable()
{
  std::string *s = _table->Look();
  std::cout << _name << " go to check the table..." << std::endl;
  for (int i = 0; s[i]; i++)
    std::cout << "There is a " << *s << " on the table" << std::endl;
}

Object *Elf::takeFirstToy()
{
  std::string *s = _table->Look(); // list of objects
  for (int i; !s.empty(); i++)
    if (s[i] == TEDDY_NAME || s[i] == PONY_NAME)
      return _table->Take(i);
  return NULL;
}

Object *Elf::takeFirstBox()
{
  std::string *s = _table->Look(); // list of objects
  for (int i; !s.empty(); i++)
    if (s[i] == BOX_NAME)
      return _table->Take(i);
  return NULL;
}

Object *Elf::takeFirstPaper()
{
  std::string *s = _table->Look(); // list of objects
  for (int i; !s.Empty(); i++)
    if (s[i] == PAPER_NAME)
      return _table->Take(i);
  return NULL;
}

void Elf::makeAGift()
{
  Object *toy = takeFirstToy();
  Object *box = takeFirstBox();
  Object *paper = takeFirstPaper();
  box->openMe();
  box->warpMeThat(toy);
  box->closeMe();
  paper->warpMeThat(box);
  _gift = paper;
}

bool Elf::takeAWarp()
{
  _cb->IN();
  if (!_table->Put(_cb->Take()))
    return false;
  return true;
}

bool Elf::StartWork()
{
  // if a gift is dispo or if a toy AND place for a warp
  while (CheckIfGiftOnTable() || (CheckIfToysOnTable() && TableHasPlace()))
    {
      EnumTable();
      if (CheckIfGiftOnTable())
        {
          makeAGift(); // set the _gift
          _cb->Put(_gift);
          _cb->OUT();
          _gift = NULL;
        }
      else
        {
          if (!takeAWarp())
            return false;
        }
    }
  return true;
}
