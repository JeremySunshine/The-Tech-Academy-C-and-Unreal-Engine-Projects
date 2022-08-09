using namespace std;
#include <iostream>

class Shape
{
public: string Color;
      int getArea()
      {

      }
};

class Circle : public Shape
{
public: 
    int Radius;
    int getArea()
    {
        return Radius;
    }
    
};

class Triangle : public Shape
{
public:
    int Height;
    int Base;
    int getArea() {
        int x = Height;
        int z = Base;
        return x * z;

};

class Rectangle : public Shape
{
public:
    int Height;
    int Width;
    int getArea() {
        int x = Height;
        int y = Width;
        return x * y;

    }
};



int main()
{
    

};

