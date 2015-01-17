#ifndef OBJECT_HH
# define OBJECT_HH

#include <string>

class Object {
private:
  std::string const _name;

protected:
  bool _inUse;

public:
  Object(std::string const &);
  ~Object();

  virtual void isTaken();
};

#endif
