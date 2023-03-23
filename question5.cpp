#include<iostream>
/* Define a class DATE and write program to display Date and initilize
 object using constructors ?
*/
using namespace std;
class Date
{
      
     int day;
     int month;
     int year;
     
     public:

     Date(int x,int y,int z)
     {
        day=x;
        month=y;
        year=z;
     }
     void print()
     {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
     }
    
     
     
     

};
int main()
{
    Date s(4,5,2023);
    s.print();
    return 0;
    

}