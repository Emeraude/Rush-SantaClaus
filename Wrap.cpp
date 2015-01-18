#include "Wrap.hpp"

Wrap::Wrap(std::string const & name, std::string const & type) : Object(name, type) {
  _content = NULL;
}

Wrap::~Wrap() {}

void Wrap::isTaken() {
  std::cout << "whistles while working" << std::endl;
}

bool Wrap::isOpen() const {
  std::cout << "isOPEN DANS WRAP"<< std::endl;

  return _isOpen;
}

void Wrap::openMe() {
  _isOpen = true;
}

bool Wrap::wrapMeThat(Object* o) {
  if (!o || _content) 
    return false;
  std::cout << "tuuuut tuuut tuut" << std::endl;
  _content = o;
  return true;
}

Object *Wrap::getContent() const
{
  return _content;
}
  
void Wrap::setContent(Object* o)
{
  _content = o;
}
