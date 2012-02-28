
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_validation_datatype_NameType__
#define __gnu_xml_validation_datatype_NameType__

#pragma interface

#include <gnu/xml/validation/datatype/AtomicSimpleType.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace validation
      {
        namespace datatype
        {
            class NameType;
        }
      }
    }
  }
  namespace org
  {
    namespace relaxng
    {
      namespace datatype
      {
          class ValidationContext;
      }
    }
  }
}

class gnu::xml::validation::datatype::NameType : public ::gnu::xml::validation::datatype::AtomicSimpleType
{

public: // actually package-private
  NameType();
public:
  JArray< jint > * getConstrainingFacets();
  void checkValid(::java::lang::String *, ::org::relaxng::datatype::ValidationContext *);
public: // actually package-private
  static JArray< jint > * CONSTRAINING_FACETS;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_validation_datatype_NameType__
