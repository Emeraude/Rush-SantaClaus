#ifndef BOX_HPP
# define BOX_HPP

# define BOX_NAME "Box"

# include "Wrap.hpp"
# include "Toy.hpp"

class Box : public Wrap {
public:
  Box(std::string const& name = BOX_NAME);
  ~Box();

  void closeMe();
  bool wrapMeThat(Object*);
};

#endif
