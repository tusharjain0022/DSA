#include<iostream>
#include<conio.h>
using namespace std;
class student 
{ int admnum,marks[3],totalmarks=0;
  char name[20];

 public:void takedata(void)
 {  cout<<"name:";
    cin>>name;
    cout<<"admission number:";
    cin>>admnum;
    cout<<"enter marks of 3 subject:";
    for(int i=0;i<3;i++)
    { cin>>marks[i];
      totalmarks=totalmarks+marks[i];}
 }

 void showdata()
 {cout<<"name:";
    cout<<name;
    cout<<"\nadmission number:";
    cout<<admnum;
    cout<<"\nenter marks:";
    for(int i=0;i<3;i++)
    { cout<<marks[i]<<" ";}
    cout<<"\ntotal marks";
    cout<<totalmarks<<endl;}
};
int main(void)
{
int n;
 cout<<"enter number of person:";
 cin>>n;
 student s[n];
 for (int i =0; i<n;i++)
   {cout<<"enter details of "<<i+1<<" student\n";
    s[i].takedata();
    }
    cout<<"\n\n";
for (int i =0; i<n;i++)
   {cout<<"details of "<<i+1<<" students\n";
    s[i].showdata();
    }
    getch();
    }