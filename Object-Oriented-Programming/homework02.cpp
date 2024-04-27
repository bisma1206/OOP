            // BITF21M549
            // BISMA TANVEER  MIRZA
            // Homework 02
#include "iostream"
#include "string"
#include "cmath"
using namespace std;
class Cuboids
{
private:
   float height;
   float width;
   float depth;

public:
   // DEFAULT CONSTRUCTOR
   Cuboids()
   {
      height = 1;
      width = 1;
      depth = 1;
   }
   // CONSTRUCTOR
   Cuboids(float h, float w, float d)
   {
      height = h;
      width = w;
      depth = d;
   }
   Cuboids(float h, float w)
   {
      height = h;
      width = w;
      depth = 0;
   }
   // COPY CONSTRUCTOR
   Cuboids(const Cuboids &obj)
   {
      height = obj.height;
      width = obj.width;
      depth = obj.width;
   }
   // DESTRUCTOR
   ~Cuboids()
   {
      cout << "Destructor Executed..." << endl;
   }
   // SETTERS
   void setH(float h)
   {
      if (h >= 0 && h <= 35.00)
         height = h;
      else
         height = 1;
   }
   void setW(float w)
   {
      if (w >= 0 && w <= 35.00)
         width = w;
      else
         width = 1;
   }
   void setD(float d)
   {
      if (d >= 0 && d <= 35.00)
         depth = d;
      else
         depth = 1;
   }
   void setCuboids(float hei, float wid, float dep)
   {
      setH(hei);
      setW(wid);
      setD(dep);
   }

   // GETTERS
   float geth()
   {
      return height;
   }
   float getw()
   {
      return width;
   }
   float getd()
   {
      return depth;
   }
   void getCuboids()
   {
      cout << "Enter height in float:";
      cin >> height;
      cout << endl;

      cout << "Enter width in float:";
      cin >> width;
      cout << endl;

      cout << "Enter depth in float:";
      cin >> depth;
      cout << endl;
   }
   // DISPLAY INFORMATION
   void putCuboids()
   {
      setH(height);
      setW(width);
      setD(depth);
      cout << height << "\t";
      cout << width << "\t";
      cout << depth << endl;
   }

   float getSurfaceArea()
   {
      setH(height);
      setW(width);
      setD(depth);
      return (2 * (height * width) + 2 * (height * depth) + 2 * (width * depth));
   }

   float getVolume()
   {
      setH(height);
      setW(width);
      setD(depth);
      return height * width * depth;
   }
   float getSpaceDiagonal()
   {
      setH(height);
      setW(width);
      setD(depth);
      return sqrt(height * height + width * width + depth * depth);
   }

   void putCuboidsInfo()
   {
      setH(height);
      setW(width);
      setD(depth);
      cout << height << "\t";
      cout << width << "\t";
      cout << depth << "\t";
      cout << getSurfaceArea() << "\t\t";
      cout << getVolume() << "\t\t";
      cout << getSpaceDiagonal() << "\t";
      cout << endl;
   }
};

int main()
{
   Cuboids obj1, obj2, obj3, obj4, obj5;
   obj1.setCuboids(5.5, 25.6, 17.9);
   cout<<"Height" "\t" << "Width" "\t" <<"Depth" "\t" << "Area" "\t\t" <<"Volume" "\t\t" <<"Diagonal"<<endl;
   obj1.putCuboidsInfo();
   obj3 = obj1;
   obj3.putCuboidsInfo();

   obj1.getCuboids();
   obj2.getCuboids();
   obj3.getCuboids();
   obj4.getCuboids();
   obj5.getCuboids();

   cout<<"Height" "\t" << "Width" "\t" <<"Depth" "\t" << "Area" "\t\t" <<"Volume" "\t\t" <<"Diagonal"<<endl;
   obj1.putCuboidsInfo();
   obj2.putCuboidsInfo();
   obj3.putCuboidsInfo();
   obj4.putCuboidsInfo();
   obj5.putCuboidsInfo();

   return 0;
}