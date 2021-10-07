#include<iostream>
#include<string> 
using namespace std; 
class run 
{ 
 string name; 
public: 
 run(){} 
 run(string a) 
 { 
 name = a; 
 } 
 run(run & x) 
 { 
 name = x.name; 
 } 
 void display(void) 
 { 
 cout<<name; 
 } 
}; 
int main() 
{ 
 
 run A("TUSHAR"); 
 run B("JAIN"); 
 run C = A; 
 run D; 
 D = A; 
 cout<<"\n name of A:"; 
 A.display(); 
 cout<<"\n name of B:"; 
 B.display(); 
 cout<<"\n name of C:"; 
 C.display(); 
 cout<<"\n name of D:"; 
 D.display(); 
 
 return 0; 
}
