
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_ConcurrentLinkedQueue__
#define __java_util_concurrent_ConcurrentLinkedQueue__

#pragma interface

#include <java/util/AbstractQueue.h>

class java::util::concurrent::ConcurrentLinkedQueue : public ::java::util::AbstractQueue
{

  jboolean casTail(::java::util::concurrent::ConcurrentLinkedQueue$Node *, ::java::util::concurrent::ConcurrentLinkedQueue$Node *);
  jboolean casHead(::java::util::concurrent::ConcurrentLinkedQueue$Node *, ::java::util::concurrent::ConcurrentLinkedQueue$Node *);
public:
  ConcurrentLinkedQueue();
  ConcurrentLinkedQueue(::java::util::Collection *);
  virtual jboolean add(::java::lang::Object *);
  virtual jboolean offer(::java::lang::Object *);
  virtual ::java::lang::Object * poll();
  virtual ::java::lang::Object * peek();
public: // actually package-private
  virtual ::java::util::concurrent::ConcurrentLinkedQueue$Node * first();
public:
  virtual jboolean isEmpty();
  virtual jint size();
  virtual jboolean contains(::java::lang::Object *);
  virtual jboolean remove(::java::lang::Object *);
  virtual ::java::util::Iterator * iterator();
private:
  void writeObject(::java::io::ObjectOutputStream *);
  void readObject(::java::io::ObjectInputStream *);
  static const jlong serialVersionUID = 196745693267521676LL;
  static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater * tailUpdater;
  static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater * headUpdater;
  ::java::util::concurrent::ConcurrentLinkedQueue$Node * volatile __attribute__((aligned(__alignof__( ::java::util::AbstractQueue)))) head;
  ::java::util::concurrent::ConcurrentLinkedQueue$Node * volatile tail;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_ConcurrentLinkedQueue__
