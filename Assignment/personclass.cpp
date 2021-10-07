#include<iostream>
#include<conio.h>
using namespace std;
class person 
{public: char name [20];
 int age;
 char address[100];
 void getdata(void)
 {  cout<<"name:";
    cin>>name;
    cout<<"age:";
    cin>>age;
    cout<<"address:";
    cin>>address;}
 void showdata()
 {cout<<"name:";
    cout<<name;
    cout<<"\nage:";
    cout<<age;
    cout<<"\naddress:";
    cout<<address;
    cout<<"\n";}
};
int main(void)
{
int n;
 cout<<"enter number of person:";
 cin>>n;
 person p[n];
 for (int i =0; i<n;i++)
   {cout<<"enter details of "<<i+1<<" person\n";
    p[i].getdata();
    }
    cout<<"\n\n";
for (int i =0; i<n;i++)
   {cout<<"details of "<<i+1<<" person\n";
    p[i].showdata();
    }
    getch();}