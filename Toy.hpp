#ifndef TOY_HPP
# define TOY_HPP

#include "Object.hpp"

class Toy : public Object {

public:
  Toy(std::string const&);
  ~Toy();

  virtual isTaken();
};

#endif
