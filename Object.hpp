#ifndef OBJECT_HH
# define OBJECT_HH

#include <iostream>
#include <string>

class Object {
private:
  std::string const _name;

protected:
  bool _inUse;

public:
  Object(std::string const &);
  virtual ~Object();

  virtual void isTaken() = 0;
  std::string const & getName() const;

  virtual void openMe();
  virtual bool isOpen();
  virtual bool wrapMeThat(Object *);
};

std::ostream& operator<<(std::ostream &, Object const &);
Object *MyUnitTests(Object **);

#endif
