#include "Teddy.hpp"

Teddy::Teddy() : Toy(TEDDY_NAME) {
  
}

Teddy::~Teddy() {

}

void Teddy::isTaken() {
  _inUse = true;
  std::cout << "gra hu" << std::endl;
}
