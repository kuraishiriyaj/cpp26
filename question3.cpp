#include<iostream>
/* Define a class Cubes and calculate valume of cube and
initilize it using constructor ?
*/
using namespace std;
class cubes
{
    int h;
    int w;
    int l;
    int val;
    public:
    cubes(int x,int y,int z)
    {
          h=x;
          w=y;
          l=z;
    }
    void valume()
    {

       val=h*w*l;
    }
    void print()
    {
        cout<<val;
    }
};
int main()
{
    cubes s(7,7,7);
    s.valume();
    s.print();
    return 0;

}
