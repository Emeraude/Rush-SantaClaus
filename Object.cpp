#include "Object.hpp"

Object::Object(std::string const& name) :
  _name(name)
{
  _inUse = false;
}

Object::~Object() {}

std::string const & Object::getName() const
{
  return _name;
}

void Object::openMe() {
  std::cerr << "Function member in openMe does not exist" << std::endl;
}

void Object::closeMe() {
  std::cerr << "Function member in closeMe does not exist" << std::endl;
}

bool Object::isOpen() {
  std::cerr << "Function member in isOpen does not exist" << std::endl;
  return false;
}

bool Object::wrapMeThat(Object * o) {
  std::cerr << "Function member in wrapMeThat does not exist" << std::endl;
  (void) o;
  return false;
}

std::ostream& operator<<(std::ostream &s, Object const &o)
{
  s << o.getName();
  return s;
}
