﻿#ifndef DAGAL_GRAPHICALOBJECT_H
#define DAGAL_GRAPHICALOBJECT_H

#include "Object.h"

namespace Dagal {

	class GraphicalObject : public Object
	{
	public:
		GraphicalObject(Object* parent);
	};

} // namespace Dagal

#endif // DAGAL_GRAPHICALOBJECT_H
