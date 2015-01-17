#ifndef ICONVERYORBELT_HPP
# define ICONVERYORBELT_HPP

# include "Object.hpp"

class IConveyorBelt
{
public:
  virtual Object *Take() = 0;
  virtual bool Put(Object*) = 0;
  virtual bool IN() = 0;
  virtual bool OUT() = 0;
  virtual std::string const & Look() = 0;
};

#endif
