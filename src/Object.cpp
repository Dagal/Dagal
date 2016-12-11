#include "Dagal/Object.h"

namespace Dagal {
  Object::Object(Object* parent) : m_parent(parent) {
    s_objects.push_back(this);
    
    parent->addChild(this);
  }
  
  Object::~Object() {
    // Retire cet objet de la liste des enfants de son parent
    m_parent->removeChild(this);
    // Retire cet objet de la liste générale
    s_objects.remove(this);
  }

  void Object::addChild(Object* child) {
    m_children.push_back(child);
  }

  void Object::removeChild(Object* child) {
    m_children.remove(child);
  }
} // namespace Dagal
    
