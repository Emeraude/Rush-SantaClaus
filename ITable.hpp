#ifndef ITABLE_HPP
# define ITABLE_HPP

# include "Object.hpp"

class ITable
{
  virtual Object *Take() = 0;
  virtual bool Put(Object *) = 0;
  virtual std::string * const & Look() const = 0;
};

#endif
