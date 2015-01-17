#include "Box.hpp"

Box::Box(std::string const &name) : Wrap(name) {
  _isOpen = false;
}

Box::~Box() {}

void Box::closeMe() {
  _isOpen = false;
}


void Box::openMe() {
  _isOpen = true;
}

bool Box::isOpen() const {
  return _isOpen;
}

bool Box::wrapMeThat(Object* o) {
  if (!o || !isOpen() || _content)
    return false;
  _content = o;
  return true;
}
