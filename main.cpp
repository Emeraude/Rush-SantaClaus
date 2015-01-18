#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

Object* MyUnitTests(Object**);
Object** MyUnitTests();

int		main(void)
{
  LittlePony	pony;
  Teddy		teddy;

  Box		box;
  GiftPaper	giftPaper;

  Object *toto = new Teddy;
  // Object *titi = new LittlePony;

  Object *tab[3];
  box.isOpen();
  
  tab[0] = toto;
  tab[1] = &box;
  tab[2] = &giftPaper;
  Object *unit = MyUnitTests(tab);
  Object **test = MyUnitTests();
  std::cout << unit->getName() << std::endl;
  std::cout << test[0]->getName() << std::endl;
  std::cout << test[1]->getName() << std::endl;

//  std::cout << unit->XML() << std::endl;
//  std::cout << test[0]->XML() << std::endl;
//  std::cout << test[1]->XML() << std::endl;

  //unit->setContent(tab[1]);
  //unit->getContent()->setContent(tab[0]);
  std::cout << unit->XML() << std::endl;
  return 0;
}
