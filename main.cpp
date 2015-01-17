
#include "Object.hpp"
#include "Toy.hpp"
#include "Teddy.hpp"
#include "LittlePony.hpp"
#include <stdio.h>

int	main(void)
{

  printf("\n_____________\n# Teddy class\n\n");
  Teddy PedoBear;
  PedoBear.isTaken();

  printf("\n____________\n# LittlePony class\n\n");
  LittlePony Brownie;
  Brownie.isTaken();

  return 0;
}
