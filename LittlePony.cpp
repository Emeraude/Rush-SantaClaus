#include "LittlePony.hpp"

LittlePony::LittlePony(std::string const& name) : Toy(name) {
  
}

LittlePony::~LittlePony() {}

void LittlePony::isTaken() {
  _inUse = true;
  std::cout << "yo man" << std::endl;
}
