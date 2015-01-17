#ifndef WRAP_HPP
# define WRAP_HPP

#include "Object.hpp"

class Wrap : public Object {
private:
  Object* _contains;

public:
  Wrap(std::string const&);
  ~Wrap();

  virtual bool wrapMeThat(Object *) = 0;
};

#endif
