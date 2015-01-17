#ifndef OBJECT_HH
# define OBJECT_HH

#include <string>

class Object {
private:
  bool _inUse;
  std::string const _name;

public:
  Object(std::string const &);
  ~Object();

  virtual void isTaken();
}

#endif
