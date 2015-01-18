#include "Box.hpp"

Box::Box(std::string const &name) : Wrap(name) {
  _isOpen = false;
}

Box::~Box() {}

void Box::closeMe() {
  _isOpen = false;
}

bool Box::isOpen() {
  return _isOpen;
}

bool Box::wrapMeThat(Object* o) {
  if (!isOpen())
    return false;
  return Wrap::wrapMeThat(o);
}
