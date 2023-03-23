#include<iostream>
/* Define a class Time to represent a time instance variables h ,m,s to
store hour minute and second also define following member functions
  a void setTime(int ,int)
  b void show time()
  c void normalize()
  d Time add(Time)
*/
using namespace std;
 class time
 {
    int hour;
    int minute;
    int second;
    public:
     time()
     {

     }
     time(int h,int m,int s)
     {
        hour=h;
        minute=m;
        second=s;
     }
    
    
      
      void showtime()
      {
          cout<<"hour="<<hour<<"minute="<<minute<<"second="<<second<<endl;
      }
      void normalize()
      {
        
        int min=second/60;
         minute=minute+min;
        second=(second%60);
      
         int temp;
         temp=minute/60;
         hour=hour+temp;
         cout<<"normilze of the time is"<<endl<<"hour="<<hour<<"minute="<<minute<<"second"<<second<<endl;

      }
      time operator+(time t)

      {
           time temp;
           int sec=second+t.second;
            int min=minute+t.minute+sec/60;
             temp.second=(second+t.second)%60;
             temp.hour=hour+t.hour+min/60;
             temp.minute=min%60;
             
              
            return temp;


      }
      void print()
      {
        cout<<"hour="<<hour<<"minute="<<minute<<"second"<<second;
      }


    
 };
int main()
{
      time t2(78,34,60),t3,t4(78,90,79);

       t2.showtime();
       t2.normalize();
       t3=t2+t4;
       t3.print();


       return 0;
}