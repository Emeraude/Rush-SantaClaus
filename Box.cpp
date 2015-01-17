#include "Box.hpp"

Box::Box(std::string const &name) : Wrap(name) {
  _isOpen = false;
}

Box::~Box() {}

void Box::closeMe() {
  _isOpen = false;
}

bool Box::wrapMeThat(Object* o) {
  if (!o || !isOpen() || _content)
    return false;
  _content = o;
  return true;
}
