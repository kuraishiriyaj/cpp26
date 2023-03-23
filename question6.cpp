#include<iostream>
#include<cstring>
/* Define a class student and write a program to enter student details using constructor
and define member function to display all details ?
 
*/
using namespace std;
class student
{

    private:
    int grade;
    int rollnu;
    int marks;
    char *str;
    int size;
    public:
     
    student(int a,int g,int b,char*str1)

    {    
        marks=a;
        grade=g;
        rollnu=b;
         size=strlen(str1);
         str=new char [size+1];
         strcpy(str,str1);
        
    }
    ~ student()
    {
        delete[]str;
    }

    void print()
    {
        cout<<"name="<<str<<endl;
        cout<<"rollnu="<<rollnu<<endl;
        cout<<"marsk="<<marks<<endl;
        cout<<"grade="<<grade<<endl;
    }
};
int main()
{
      student s(45,'A',54,"riayj"),s1(54,'B',53,"sameer");
      cout<<"rocord of the first student is 1............................."<<endl;
      s.print();
      cout<<"record of the second student is 2............................"<<endl;
      s1.print();
      return 0;

}