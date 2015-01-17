#ifndef BOX_HPP
# define BOX_HPP

# define BOX_NAME "Box"

#include "Wrap.hpp"

class Box : public Wrap {
private:
  bool _isOpen;
public:
  Box(std::string const& name = BOX_NAME);
  ~Box();

  void closeMe();
  void openMe();

  bool isOpen() const;
};

#endif
