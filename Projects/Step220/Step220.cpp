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
    int Radius = 360;
    double Pi = 3.14;
    float result = pow(Radius, Pi);
    int getArea()
    {
        return result;
    }
    
};

class Triangle : public Shape
{
public:
    int Height;
    int Base;
    float Half;
    int getArea() {
        int x = Height;
        int z = Base;
        float y = Half;
        return x * z * y;
    }

    };

    class Rectangle : public Shape
    {
    public:
        int Length;
        int Width;
        int getArea() {
            int x = Length;
            int y = Width;
            return x * y;

        }
    };



    int main()
    {


    };
