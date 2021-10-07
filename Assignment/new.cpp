#include<iostream>
using namespace std;
int main(void)
{
int (*p)[3];
for(int i=0;i<3;i++)
  [i]=new int;
if(!p)
cout<<"memory allocation failed";
else 
{cout<<"enter elements in array:";
for(int i=0;i<3;i++)
 cin>>*p[i];
 cout<<"entered array:";
 for(int i=0;i<3;i++)
 cout<<*p[i]<<" ";
 }
 delete p[1];
 cout<<"\nthe array after deletion takes random value for example:";

 for( int s=0;s<3;s++)
 cout<<" "<<*p[s]; 
 return 0;}
