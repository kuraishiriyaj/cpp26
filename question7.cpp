#include<iostream>
/* Define a class Box an write a program to enter length ,breadth, and height and initilize
 object using constructor also define member functions to calculate valume of the box ?
*/
using namespace std;
class Box
{
    
    int length;
    int breadth;
    int height;
    int val;
     public:
    Box(int x,int y,int z)
    {
           length=x;
           breadth=y;
           height=z;
    }
    void valume()
    {
      val= length*breadth*height;
    }
    void print()
    {
      cout<<"valume of the Box is"<<val;
    }

    ~Box()
    {

    }
};
int main()
{
    Box s(56,23,78);
     s.valume();
     s.print();
  
  return 0;
  
}