#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

Object *MyUnitTests(Object **t)
{
  if (!t)
    std::cerr << "You did'nt provide a valid list of Object" << std::endl;
  else if (!t[0])
    std::cerr << "No GiftPaper provided ! This is an ugly box ..." << std::endl;
  else if (!t[1])
    std::cerr << "No Box provided :'( Your Toy is now broken. Dirty soul ..." << std::endl;
  else if (!t[2])
    std::cerr << "No Toy provided ! You made a children sad :(" << std::endl;
  else
    {
      if (!t[1]->isOpen())
        t[1]->openMe();
      t[1]->wrapMeThat(t[2]);
      t[0]->wrapMeThat(t[1]);
      return t[0];
    }
  return NULL;
}
