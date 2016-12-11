#ifndef DAGAL_FILE_H
#define DAGAL_FILE_H

#include "Object.h"

namespace Dagal {
  class File : public Object
  {
  public:
    File(Object* parent);
    virtual ~File();
  };
  
} // namespace Dagal

#endif // DAGAL_FILE_H
