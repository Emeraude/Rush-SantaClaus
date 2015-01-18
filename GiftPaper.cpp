#include "GiftPaper.hpp"

GiftPaper::GiftPaper(std::string const &name) : Wrap(name, PAPER_NAME) {
}

GiftPaper::~GiftPaper() {}

bool GiftPaper::wrapMeThat(Object * o) {
  (void) o;
  return true;
}
