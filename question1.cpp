#include<iostream>
/* Define a class complex to represent a complex number with instance variable a 
and b to store real and imaginary parts also define member functions 
a void setData(int,int )
b void showData()
  complex add(complex)
*/
using namespace std;
class complex    
{
     int a;
     int b;
     int real;
     int imaginary;
     public:
      void setData(int x,int y)
      {
         if(x>0&&y<0)
          {a=x;
          b=-y;
          }
          else
          {
               a=0;
               b=0;
          }
          

      }
      complex()
      {

      }
      complex(int c,int d)
      {
        real=c;
        imaginary=d;
      }
      void showData()
      {
        cout<<"complex number is"<<endl<<a<<"+"<<b<<"i"<<endl;
      }
      complex operator+(complex h)
      {
          complex temp;
          temp.real=real+h.real;
          temp.imaginary=imaginary+h.imaginary;
          return temp;
      }
      void print()
      {
        cout<<"add complex is"<<endl<<real<<"+"<<imaginary<<"i"<<endl;
      }
};
int main()
{
   complex t,t1(6,9),t2(8,34),t3;
   t.setData(67,-68);
   t.showData();
   t3=t1+t2;
   t3.print();

   return 0;
}