#ifndef TEDDY_HPP
# define TEDDY_HPP

# define TEDDY_NAME "Teddy"
# include <iostream>
# include "Toy.hpp"

class Teddy : public Toy {
public:
  Teddy(std::string const& name = TEDDY_NAME);
  ~Teddy();

  virtual void isTaken();
};

#endif
