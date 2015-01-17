#include "LittlePony.hpp"

LittlePony::LittlePony() : Toy(LITTLE_PONY_NAME) {
  
}

LittlePony::~LittlePony() {}

void LittlePony::isTaken() {
  _inUse = true;
  std::cout << "yo man" << std::endl;
}
