#ifndef _DEMO_H_
#define _DEMO_H_
class demo
{
   public:
      demo();
      demo(int,int);
      int getX() const;
      void setX(int);
      int getY() const;
      void setY(int);
   private:
      int x;
      int y;
};
#endif
