#include<iostream>
using namespace std;
int a=2;
int main()
{ int a;
  cout<<"enter new value of a:";
  cin>>a;
  cout<<"value of a in main():"<<a;
  cout<<"\nglobal value of a using scope resolution:"<<::a;
  return 0;}