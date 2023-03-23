#include<iostream>
/* Define a class Bill and define its member function get() to take details customer,
 calculate Bil(), function to calculate electricity bill using below triff ?
  upto 100 uint RS 1.20 per unit
  From 100 to 200 unit  Rs 2 per unit
  Above 200 uints Rs 3 Per unit 
*/
using namespace std;
class e_bill
{
   int c_no;
   char c_name[20];
   int units;
   double bill;
   public:
     void get()
     {
      cout<<"Enter Details of customer below :: \n"<<endl;
       cout<<"Enter Customer No::";
       cin>>c_no;
       cout<<"\n Enter customer Name::";
       cin>>c_name;
       cout<<"\nEnter NO. of units user::";
       cin>>units;
       
     }
     void put()
     {
      cout<<"\nEnter Details of Cusomer are :: "<<endl;
       cout<<"\n Customer NO. is :"<<c_no;
       cout<<"\n\nNumber of Units consumed:"<<units;
       cout<<"\n\n Bill of Customer :"<<bill;
     }
     void calc_bill()
     {
        if(units<=100)
        bill=units*1.20;
        else if(units<=200)
            bill=100*1.20+(units-100)*2;
            else
            {
                bill=100*1.20+100*2+(units-200)*3;
            }
            
     }
};

int main()

{
   e_bill b1;
   b1.get();
   b1.calc_bill();
   b1.put();
   cout<<"\n";
   return 0;


}