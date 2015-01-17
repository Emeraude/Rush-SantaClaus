#ifndef WRAP_HPP
# define WRAP_HPP

#include <iostream>
#include "Object.hpp"

class Wrap : public Object {
protected:
  Object* _content;
  bool _isOpen;

public:
  Wrap(std::string const&);
  ~Wrap();

  void isTaken();
  void openMe();
  bool isOpen() const;
  virtual bool wrapMeThat(Object*);
};

#endif
