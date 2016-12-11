#ifndef DAGAL_OBJECT_H
#define DAGAL_OBJECT_H

#include <list>

namespace Dagal
{
  /**
   * @brief La classe Object est la base de toutes les classes
   *
   * Défini une hiérarchie entre tous les objets du programme
   */
  class Object
  {
  private:
    static std::list<Object*> s_objects;
    Object* m_parent;
    std::list<Object*> m_children;
    
  public:
    Object(Object* parent);
    virtual ~Object();
    
    void addChild(Object* child);
    void removeChild(Object* child);
  };
} // namespace Dagal

#endif // DAGAL_OBJECT_H
