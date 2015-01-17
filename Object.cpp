#include "Object.hpp"

Object::Object(std::string const& name) :
  _name(name)
{
  _inUse = false;
}

Object::~Object() {}
