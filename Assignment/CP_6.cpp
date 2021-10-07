#include <iostream>
using namespace std;  
class complex 
{ 
private: 
 float real, 
 imag; 
public: 
 complex( ) 
 { 
 } 
 complex( float r, float i ) 
 { 
 real = r; 
 imag = i; 
 } 
 void getdata( ) 
 { 
 float r, 
 i; 
 cout << endl << "Enter real and imaginary part "; 
 cin >> r >> i; 
 real = r; 
 imag = i; 
 } 
 void setdata( ) 
 { 
 real = r; 
 imag = i; 
 } 
 void displaydata( ) 
 { 
 cout << endl << "real = " << real; 
 cout<<endl<<"Imaginary = "<<imag; 
 } 
 complex operator +( complex c ) 
 { 
 complex t; 
 t.real = real + c.real; 
 t.imag = imag + c.imag; 
 } 
 complex operator *( complex c ) 
 { 
 complex t; 
 t.real = real * c.real - imag * c.imag; 
 t.imag = real * c.imag + c.real * imag; 
 return t; 
 } 
} ; 
int main( ) 
{
complex c1, 
 c2 ( 1.2, -2.5 ), 
 c3, 
 c4; 
 c1.setdata( 2.0, 2.0 ); 
 c3 = c1 + c2; 
 c3.displaydata( ); 
 c4.getdata( ); 
 complex c5 ( 2.5, 3.0 ), 
 c6; 
 c6 = c4 * c5; 
 c6.displaydata( ); 
 complex c7; 
 c7 = c1 + c2 * c3; 
 c7.displaydata( ); 
 return 0;
}
