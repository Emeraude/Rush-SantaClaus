#ifndef WRAP_HPP
# define WRAP_HPP

#include <iostream>
#include "Object.hpp"

class Wrap : public Object {
protected:
  Object* _content;

public:
  Wrap(std::string const&);
  ~Wrap();

  void isTaken();
  virtual bool wrapMeThat(Object*);
};

#endif
