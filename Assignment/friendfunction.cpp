#include<iostream>
using namespace std;
class A;
class B
{int b=2;
public: friend int max(A a,B b);
};
class A
{int a=4;
public: friend int max (A a,B b);};
int max(A a,B b)
{if(a.a>b.b)
 return a.a;
 else
 return b.b;
 }
 int main(void)
 { A a;
 B b;
 cout<<"max:"<<max(a,b);
 return 0 ;
 }