#ifndef LITTLEPONY_HPP
# define LITTLEPONY_HPP

# define LITTLE_PONY_NAME "gay pony"
# include <iostream>
# include "Toy.hpp"

class LittlePony : public Toy {
public:
  LittlePony();
  ~LittlePony();

  virtual void isTaken();
};

#endif
