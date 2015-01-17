#include <iostream>
#include <cstdlib>
#include "ConveyorBelftPePeNoel.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

IConveyorBelt *createConveyorBelt()
{
  return new ConveyorBeltPePeNoel;
}

ConveyorBeltPePeNoel::ConveyorBeltPePeNoel() {
  _content = NULL;
}

ConveyorBeltPePeNoel::~ConveyorBeltPePeNoel() {
  delete _content;
}

Object *ConveyorBeltPePeNoel::Take() {
  if (!_content)
    std::cerr << "Lazy little elf T_PAAMAYIM_NEKUDOTAYIM Conveyor Belt is empty !" << std::endl;
  Object *tmp = _content;
  _content = NULL;
  return tmp;
}

bool ConveyorBeltPePeNoel::Put(Object *tmp) {
  if (_content) {
    std::cerr << "Conveyor Belt queue overflow ! It's not empty !" << std::endl;
    return false;
  }
  _content = tmp;
  return true;
}

bool ConveyorBeltPePeNoel::IN() {
  if (_content) {
    std::cerr << "Conveyor Belt queue overflow ! It's not empty !" << std::endl;
    return false;
  }
  if (random() % 2)
    _content = new Box;
  else
    _content = new GiftPaper;
  return true;
}

bool ConveyorBeltPePeNoel::OUT() {
  if (!_content) {
    std::cerr << "Lazy little elf T_PAAMAYIM_NEKUDOTAYIM Conveyor Belt is empty !" << std::endl;
    return false;
  }
  delete _content;
  _content = NULL;
  return true;
}

std::string const& ConveyorBeltPePeNoel::Look() const {
  if (!_content) {
    std::cerr << "/me take a sleep" << std::endl;
    return NULL;
  }
  return _content->getName();
}
