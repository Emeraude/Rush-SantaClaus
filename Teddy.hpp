#ifndef TEDDY_HPP
# define TEDDY_HPP

# define TEDDY_NAME "bisounours"
# include <iostream>
# include "Toy.hpp"

class Teddy : public Toy {
public:
  Teddy();
  ~Teddy();

  virtual void isTaken();
};

#endif
