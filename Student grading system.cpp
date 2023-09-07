#include<iostream>
using namespace std;
int main()
{
   float marks, sum=0, avg;
   cout<<"Enter Marks obtained in 5 Subjects"<<endl;
   for(int i=0; i<5; i++)
   {
       cin>>marks;
       sum = sum+marks;
   }
   avg = sum/5;
   cout<<endl<<"your grade is : ";
   if(avg>=90 && avg<=100)
       cout<<"A1";
   else if(avg>=80 && avg<90)
       cout<<"A2";
   else if(avg>=70 && avg<80)
       cout<<"B1";
   else if(avg>=60 && avg<70)
       cout<<"B2";
   else if(avg>=50 && avg<60)
       cout<<"C1";
   else if(avg>=40 && avg<50)
       cout<<"C2";
   else if(avg>=33 && avg<40)
       cout<<"D";
   else if(avg>=21 && avg<33)
       cout<<"E1";
   else if(avg>=0 && avg<21)
       cout<<"E2";
   else
       cout<<"Invalid!";
   cout<<endl;
 return 0;
}
