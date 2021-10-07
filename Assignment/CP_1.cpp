#include<iostream>
using namespace std;
class Covid
{
	public:
	char name[25];	
	string fever;
	string cough;
	string breathlessness;

};

int main()
{   
    Covid person[10];
    cout<<"INPUT DETAILS OF 10 PEOPLE:\n";
    for(int i=0;i<10;i++)
    {	
	cout<<"Enter name : ";
	cin>>person[i].name;
	cout<<"Fever ? (yes/no) :";
	cin>>person[i].fever;
	cout<<"Cough ? (yes/no) :";
	cin>>person[i].cough;
	cout<<"Breathlessness ? (yes/no) :";
	cin>>person[i].breathlessness;
	}
	cout<<endl;
    for(int i=0;i<10;i++)
    {
      int j=0;
      if(person[i].breathlessness=="yes")
	     j+=1;
	  if(person[i].fever=="yes")
	     j+=1;
	  if(person[i].cough=="yes")
	     j+=1;
	  if(j<2)
	     cout<<person[i].name<<" is not COVID suspect"<<"\n";
	  else
	     cout<<person[i].name<<" is COVID suspect"<<"\n";
    }
    
	
	return 0;
}
