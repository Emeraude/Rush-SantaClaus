#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

int		main(void)
{
  LittlePony	pony("pony");
  Teddy		teddy("teddy");

  Box		box("box");
  GiftPaper	giftPaper("giftpaper");

  Object *toto = new Teddy;
  // Object *titi = new LittlePony;

  Object *tab[3];
  // box.isOpen();
  
  tab[0] = toto;
  tab[1] = &box;
  tab[2] = &giftPaper;
  Object *unit = MyUnitTests(tab);
  std::cout << unit->getName() << std::endl;
  return 0;
}
