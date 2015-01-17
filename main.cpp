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
  Object *titi = new LittlePony;
  
  toto->isTaken();
  titi->isTaken();
  box.openMe();
  box.wrapMeThat(toto);
  box.closeMe();
  box.wrapMeThat(titi);
  return 0;
}
