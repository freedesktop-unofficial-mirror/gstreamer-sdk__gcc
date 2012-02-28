
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Robot__
#define __java_awt_Robot__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class GraphicsDevice;
        class Rectangle;
        class Robot;
      namespace image
      {
          class BufferedImage;
      }
      namespace peer
      {
          class RobotPeer;
      }
    }
  }
}

class java::awt::Robot : public ::java::lang::Object
{

public:
  Robot();
  Robot(::java::awt::GraphicsDevice *);
  virtual void mouseMove(jint, jint);
  virtual void mousePress(jint);
  virtual void mouseRelease(jint);
  virtual void mouseWheel(jint);
  virtual void keyPress(jint);
  virtual void keyRelease(jint);
  virtual ::java::awt::Color * getPixelColor(jint, jint);
  virtual ::java::awt::image::BufferedImage * createScreenCapture(::java::awt::Rectangle *);
  virtual jboolean isAutoWaitForIdle();
  virtual void setAutoWaitForIdle(jboolean);
  virtual jint getAutoDelay();
  virtual void setAutoDelay(jint);
  virtual void delay(jint);
  virtual void waitForIdle();
  virtual ::java::lang::String * toString();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object)))) waitForIdle__;
  jint autoDelay;
  ::java::awt::peer::RobotPeer * peer;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_Robot__
