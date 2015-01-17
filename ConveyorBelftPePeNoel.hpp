#ifndef CONVEYORBELTPEPENOE_HPP
# define CONVEYORBELTPEPENOEL_HPP

# include "Object.hpp"
# include "IConveyorBelt.hpp"

class ConveyorBeltPePeNoel : public IConveyorBelt {
private:
  Object *_content;

public:
  ConveyorBeltPePeNoel();
  ~ConveyorBeltPePeNoel();

  Object *Take();
  bool Put(Object *);
  bool IN();
  bool OUT();
  std::string const& Look() const;
};

#endif
