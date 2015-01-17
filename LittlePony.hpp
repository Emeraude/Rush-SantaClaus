#ifndef LITTLEPONY_HPP
# define LITTLEPONY_HPP

# include <iostream>
# include "Toy.hpp"

class LittlePony : public Toy {
public:
  LittlePony(std::string const& name = "Little Pony");
  ~LittlePony();

  virtual void isTaken();
};

#endif
