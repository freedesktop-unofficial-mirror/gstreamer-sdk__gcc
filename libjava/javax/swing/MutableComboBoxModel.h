
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_MutableComboBoxModel__
#define __javax_swing_MutableComboBoxModel__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class MutableComboBoxModel;
      namespace event
      {
          class ListDataListener;
      }
    }
  }
}

class javax::swing::MutableComboBoxModel : public ::java::lang::Object
{

public:
  virtual void addElement(::java::lang::Object *) = 0;
  virtual void removeElementAt(jint) = 0;
  virtual void insertElementAt(::java::lang::Object *, jint) = 0;
  virtual void removeElement(::java::lang::Object *) = 0;
  virtual void setSelectedItem(::java::lang::Object *) = 0;
  virtual ::java::lang::Object * getSelectedItem() = 0;
  virtual jint getSize() = 0;
  virtual ::java::lang::Object * getElementAt(jint) = 0;
  virtual void addListDataListener(::javax::swing::event::ListDataListener *) = 0;
  virtual void removeListDataListener(::javax::swing::event::ListDataListener *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_swing_MutableComboBoxModel__