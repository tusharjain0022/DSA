#include<iostream>
#include<conio.h>
using namespace std;
class student
{ int roll,marks[3];
  char name[20];
  public:  void getdata();
           void showdata();
           int failornot();
};

void student::getdata()
{ cout<<"roll num:";
  cin>>roll;
  cout<<"name:";
  cin>>name;
  cout<<"marks in 3 subjects:";
  for(int i=0;i<3;i++)
  {cin>>marks[i];}
}

int student::failornot()
{ int count=0;
  for(int i=0;i<3;i++)
   {if(marks[i]<33)
       count++;}
    return count;
    }

void student::showdata()
{cout<<"details of failed students:\n";
  cout<<"\nroll num:";
  cout<<roll;
  cout<<"\nname:";
  cout<<name;
  cout<<"\nmarks in 3 subjects:";
  for(int i=0;i<3;i++)
  {cout<<marks[i];}
}

int main()
{
    student s[2];
    for(int i =0; i<2; i++)
    { cout<<"enter details of "<<i+1<<" student"<<endl;
    s[i].getdata();}
     for(int i =0; i<2; i++)
    {if( s[i].failornot()  >1)
        s[i].showdata();}
}