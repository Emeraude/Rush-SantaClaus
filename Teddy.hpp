#ifndef TEDDY_HPP
# define TEDDY_HPP

# include <iostream>
# include "Toy.hpp"

class Teddy : public Toy {
public:
  Teddy(std::string const& name = "Teddy");
  ~Teddy();

  virtual void isTaken();
};

#endif
