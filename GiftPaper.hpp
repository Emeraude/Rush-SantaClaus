#ifndef GIFTPAPER_HPP
# define GIFTPAPER_HPP

# define PAPER_NAME "Box"

#include "Wrap.hpp"

class GiftPaper : public Wrap {
public:
  GiftPaper(std::string const& name = PAPER_NAME);
  ~GiftPaper();

  virtual bool wrapMeThat(Object *);
};

#endif
