
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_locale_LocaleHelper__
#define __gnu_java_locale_LocaleHelper__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace locale
      {
          class LocaleHelper;
      }
    }
  }
}

class gnu::java::locale::LocaleHelper : public ::java::lang::Object
{

public:
  LocaleHelper();
  static ::java::util::Locale * getFallbackLocale(::java::util::Locale *);
  static JArray< ::java::util::Locale * > * getCollatorLocales();
  static jint getLocaleCount();
  static ::java::lang::String * getLocaleName(jint);
  static ::java::lang::Class class$;
};

#endif // __gnu_java_locale_LocaleHelper__
