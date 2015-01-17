#include "Teddy.hpp"

Teddy::Teddy() : Toy("bisounours") {
  
}

Teddy::~Teddy() {

}

void Teddy::isTaken() {
  _inUse = true;
  std::cout << "gra hu" << std::endl;
}
