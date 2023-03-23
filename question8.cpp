#include<iostream>
/* Define class Bank and and define member functions to read principle rate of interest
 and year another member functions to calulate simple interest and display it inisilize
  all details using constructor ?
*/
using namespace std;
class Bank
{
  
  int principle;
  int rate;
  int time;
  int SI;
  public:
  Bank(int x,int y,int z)
  {
    principle=x;
    rate=y;
    time=z;
  }
  void interest()
  {
     SI=(principle*rate*time)/100;
  }
  void print()
  {
    cout<<"bank of the simple interest is"<<SI<<"%";
  }
  ~Bank()
  {

  }
  

};
int main()
{ 
  Bank s(5,8,12);
  s.interest();
  s.print();
  
  return 0;

  


}