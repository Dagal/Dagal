﻿#ifndef DAGAL_BINARYFILE_H
#define DAGAL_BINARYFILE_H

#include "File.h"

namespace Dagal {
  class BinaryFile : public File
  {
  public:
    BinaryFile(Object* parent);
  };
  
} // namespace Dagal

#endif // DAGAL_BINARYFILE_H
