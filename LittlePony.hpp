#ifndef LITTLEPONY_HPP
# define LITTLEPONY_HPP

#include <iostream>
#include "Toy.hpp"

class LittlePony : public Toy {
public:
  LittlePony();
  ~LittlePony();

  virtual void isTaken();
};

#endif
