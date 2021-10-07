#include<iostream>
using namespace std;
int main(void)
{int n;
cout<<"enter size:";
cin>>n;
int* p = new int[n];
cout<<"enter elements in array:";
for(int i=0;i<n;i++)
 cin>>p[i];
 cout<<"entered array:";
 for(int i=0;i<n;i++)
 cout<<p[i]<<" ";

 delete[] p;
 cout<<"\nthe array after deletion takes random value for example:";
for(int j=0;j<n;j++)
 cout<<" "<<p[j]; 
 return 0;}
