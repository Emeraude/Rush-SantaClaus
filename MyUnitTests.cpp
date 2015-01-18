#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

Object *MyUnitTests(Object **t)
{
  std::string msg[3] = {
    "No Toy provided ! You made a children sad :(",
    "No Box provided :'( Your Toy is now broken. Dirty soul ...",
    "No GiftPaper provided ! This is an ugly box ..."
  };

  if (!t)
    std::cerr << "You didn't provide a valid list of Objects" << std::endl;
  else if (!dynamic_cast<Teddy*>(t[0]))
    std::cerr << msg[0] << std::endl;
  else if (!dynamic_cast<Box*>(t[1]))
    std::cerr << msg[1] << std::endl;
  else if (!dynamic_cast<GiftPaper*>(t[2]))
    std::cerr << msg[2] << std::endl;
  else
    {
      if (!t[1]->isOpen())
        t[1]->openMe();
      t[1]->wrapMeThat(t[0]);
      t[2]->wrapMeThat(t[1]);
      return t[2];
    }
  return NULL;
}
