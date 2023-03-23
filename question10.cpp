#include<iostream>
/* Define a class Static count and create a static variables increament this
 variable in a function and call this 3 times and display the result ?
*/
using namespace std;
class B
{
    int static count;
     public:
     B()
     {
        
     }
     void display()
     {
        count++;
     }
     void print()
     {
       cout<<"cout static is"<<count;
     }

};
int B::count=0;
int main()
{
    B s;
    s.display();

    s.display();
    s.display();
    s.print();
    return 0;

}