
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_CheckboxMenuItem__
#define __java_awt_CheckboxMenuItem__

#pragma interface

#include <java/awt/MenuItem.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class AWTEvent;
        class CheckboxMenuItem;
      namespace event
      {
          class ItemEvent;
          class ItemListener;
      }
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
  }
}

class java::awt::CheckboxMenuItem : public ::java::awt::MenuItem
{

public:
  CheckboxMenuItem();
  CheckboxMenuItem(::java::lang::String *);
  CheckboxMenuItem(::java::lang::String *, jboolean);
  virtual jboolean getState();
  virtual void setState(jboolean);
  virtual JArray< ::java::lang::Object * > * getSelectedObjects();
  virtual void addNotify();
  virtual void addItemListener(::java::awt::event::ItemListener *);
  virtual void removeItemListener(::java::awt::event::ItemListener *);
public: // actually protected
  virtual void processEvent(::java::awt::AWTEvent *);
  virtual void processItemEvent(::java::awt::event::ItemEvent *);
public: // actually package-private
  virtual void dispatchEventImpl(::java::awt::AWTEvent *);
public:
  virtual ::java::lang::String * paramString();
  virtual JArray< ::java::util::EventListener * > * getListeners(::java::lang::Class *);
  virtual JArray< ::java::awt::event::ItemListener * > * getItemListeners();
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
public: // actually package-private
  virtual ::java::lang::String * generateName();
private:
  static jlong getUniqueLong();
  static jlong next_chkmenuitem_number;
  static const jlong serialVersionUID = 6190621106981774043LL;
  jboolean __attribute__((aligned(__alignof__( ::java::awt::MenuItem)))) state;
  ::java::awt::event::ItemListener * item_listeners;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_CheckboxMenuItem__
