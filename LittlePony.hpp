#ifndef LITTLEPONY_HPP
# define LITTLEPONY_HPP

# define PONY_NAME "Little Pony"
# include <iostream>
# include "Toy.hpp"

class LittlePony : public Toy {
public:
  LittlePony(std::string const& name = );
  ~LittlePony();

  virtual void isTaken();
};

#endif
