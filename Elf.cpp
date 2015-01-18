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

Elf::startWork()
{
  std::string *s; // list of objects
  Object *toy; // toy to take
  Object *warp; // toy to take

  while (*(s = _table->Look()) != NULL)
    {
      std::cout << _name << " go to check the table..." << std::endl;
      for (int i = 0; s[i]; i++)
        std::cout << "There is a " << *s << " on the table" << std::endl;
      toy = _table->Take();
      std::cout << _name << " go to send the toy to Santa C." << std::endl;
      _cb->IN();
      warp = _cb->Take();
      // open the box if it is
      warp->warpMeThat(toy);
      // close the box if it is
      _cb->Put(toy);
      _cb->OUT();
      toy = NULL;
      warp = NULL;
    }
}
