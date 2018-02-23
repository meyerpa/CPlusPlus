#ifndef _SOMECLASS_H_
#define _SOMECLASS_H_

class someClass
{
   public:
      int getX() const;
      void setX(int);

      static int getY();
      static void setY(int);

   private:
      int X;        // instance variable (each object its own copy)
      static int Y; // static variable (each object share the one variable)
};

#endif

