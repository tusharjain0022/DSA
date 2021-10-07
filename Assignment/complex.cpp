#include<iostream>
#include<conio.h>
using namespace std;

struct complex
{public:float a,b;};

int main(void)
{complex c1,c2;
 char ch;
 cout<<"enter real and img part of 1st number:";
 cin>>c1.a>>c1.b;
 cout<<"enter real and img part of 2nd number:";
 cin>>c2.a>>c2.b;
 cout<<"enter choice(+,-,*,/):";
 cin>>ch;
 switch(ch) 
 { case '+': cout<<"addition"<<endl;
             cout<<c1.a+c2.a<<" + i"<<c1.b+c2.b;
             break;
             
    case '-': cout<<"subtraction"<<endl;
             cout<<c1.a-c2.a<<" + i"<<c1.b-c2.b;
             break; 
    
    case '*': cout<<"multiplication"<<endl;
             cout<<(c1.a*c2.a)-(c1.b*c2.b)<<" + i"<<(c1.a*c2.b)+(c1.b*c2.a);
             break;  
             
    case '/': cout<<"division"<<endl;
             cout<<((c1.a*c2.a)+(c1.b*c2.b))/(c2.a*c2.a+c2.b*c2.b)<<" + i"<<((c1.b*c2.a)-(c1.a*c2.b))/(c2.a*c2.a+c2.b*c2.b);
             break;
     }}