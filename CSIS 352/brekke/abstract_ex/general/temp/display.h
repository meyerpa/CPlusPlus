#ifndef _DISPLAY_H_
#define _DISPLAY_H_

template <class T>
class Display
{
   public:
      virtual void clearDisplay() const = 0;
      virtual void setDisplayPosition(int x, int y) const = 0;
      virtual void clearLine(int) const = 0;
      virtual void show(T) const = 0;
};

#endif
