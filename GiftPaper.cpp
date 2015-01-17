#include "GiftPaper.hpp"

GiftPaper::GiftPaper(std::string const &name) : Wrap(name) {
  _isOpen = false;
}

GiftPaper::~GiftPaper() {}

bool GiftPaper::wrapMeThat(Object *) {
  
}
