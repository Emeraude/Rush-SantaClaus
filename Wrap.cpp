#include "Wrap.hpp"

Wrap::Wrap(std::string const & name) : Object(name) {
  _contains = NULL;
}

Wrap::~Wrap() {}

void Wrap::isTaken() {
  std::cout << "whistles while working" << std::endl;
}
