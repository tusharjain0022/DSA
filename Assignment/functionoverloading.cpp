/*#include<iostream>
using namespace std;
void add(int a,int b)
{cout<<(a+b)<<endl;}
void add(double x,double y)
{cout<<double(x+y)<<endl;}
void add(float m,float n)
{cout<<(m+n);}
int main(void)
{int a=2,b=3;
 double x=3.2,y=3.2;
 float m=2.1,n=3.1;
 add(a,b);
 add(x,y);
 add(m,n);
 return 0;
 } */


 #include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

 
  float area(float r)
  {  return(3.14*r*r);
  }
  int area(int l,int b)
  {return(l*b);
  }
  float area( int a, int b,int c)
  { int s=(a+b+c)/2;
  	return (sqrt(s*(s-a)*(s-b)*(s-c)));
  }
  int area( int a)
  {
  	return a*a; 
}
int main()
{
float r;
cout<<"enter radius of circle:";
cin>>r;
cout<<"area of circle is\n"<<area(r);
int l,br;
cout<<"\nenter lenth and breadth of rectangle:";
cin>>l>>br;
cout<<"area of rectangle is\n"<<area(l,br);
int a,b,c;
cout<<"\nenter sides of triangle:";
cin>>a>>b>>c;
cout<<" area:"<<area(a,b,c);
int s;
cout<<"\nenter side of square:";
cin>>s;
cout<<" area:"<<area(s);
getch();
}