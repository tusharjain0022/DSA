// #include <iostream>
// using namespace std;  
// #include <stdlib.h> 
// #include <string.h> 
// class string 
// { 
// private: 
//  char str[ 20 ]; 
// public: 
//  string( ) 
//  { 
//  str[ 0 ] = '\0'; 
//  } 
//  string( char * s ) 
//  { strcpy( str, s ); } 
//  string( int a ) 
//  { itoa( a, str, 10 ); } 
//  operator int( ) 
//  { 
//  int i = 0, l, ss = 0, k = 1; 
//  l = strlen( str ) - 1; 
//  while( l >= 0 ) 
//  {  ss = ss + ( str[ l ] - 48 ) * k; 
//  l--; k *= 10; } 
//  return ( ss ); 
//  } 
//  void displaydata( ) 
//  {  cout << str;  } } ; 
// void main( ) 
// { string s1 = 123; 
//  cout << endl << "s1="; 
//  s1.displaydata( ); 
//  s1 = 150; 
//  cout << endl << "s1="; 
//  s1.displaydata( ); 
//  string s2 ( "123" ); 
//  int i = int( s2 ); 
//  cout << endl << "i=" << i; 
//  string s3 ( "456" ); 
//  i = s3; 
//  cout << endl << "i=" << i; 
// }} 
//  void displaydata( ) 
//  { cout << dt; } 
//  date( dmy t ) 
//  { 
//  int d = t.getday( ); 
//  int m = t.getmth( ); 
//  int y = t.getyr( ); 
//  char temp[ 3 ]; 
//  itoa( d, dt, 10 ); 
//  strcat( dt, "\t" ); 
//  itoa( m, temp, 10 ); 
//  strcat( dt, temp ); 
//  strcat( dt, "/" ); 
//  itoa( y, temp, 10 ); 
//  strcat( dt, temp ); 
//  } } ; 
// int main( ) 
// {date d1; 
//  dmy d2 ( 17, 11, 94 ); 
//  d1 = d2; 
//  cout << endl << "d1="; 
//  d1.displaydata( ); 
//  cout << endl << "d2="; 
//  d2.displaydata( ); 
//  return 0 ;
//  }
#include<iostream>
using namespace std;
int main()
{
    cout<<"String : 123\nint : 123";
    return 0;
}
