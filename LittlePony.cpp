#include "LittlePony.hpp"

LittlePony::LittlePony() : Toy("gay pony") {
  
}

LittlePony::~LittlePony() {}

void LittlePony::isTaken() {
  _inUse = true;
  std::cout << "yo man" << std::endl;
}
