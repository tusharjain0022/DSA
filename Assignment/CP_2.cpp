#include<iostream> 
using namespace std;
const int m=50; 
class ITEMS 
{ 
 int itemCode[m]; 
 float itemPrice[m]; 
 int count; 
public: 
 void CNT(void){count=0;} 
 void getitem(void); 
 void displaySum(void); 
 void remove(void); 
 void displayItems(void); 
}; 
void ITEMS :: getitem(void) 
{ 
 cout<<"Enter item code"; 
 cin>>itemCode[count]; 
 cout<<"Enter Item cost"; 
 cin>>itemPrice[count]; 
 count++; 
} 
void ITEMS :: displaySum(void) 
{ 
 float sum=0; 
 for(int i=0;i<count;i++) 
 sum=sum+itemPrice[i]; 
 cout<<"\n Total Value:"<<sum<<"\n"; 
} 
void ITEMS :: remove(void) 
{ 
 int a; 
 cout<<"Enter Item Code"; 
 cin>>a; 
 for(int i=0;i<count;i++) 
 if(itemCode[i] == a) 
 itemPrice[i]=0; 
} 
void ITEMS :: displayItems(void) 
{ 
 cout<<"\n Code Price\n"; 
 for(int i=0;i<count;i++) 
 { 
 cout<<"\n"<<itemCode[i]; 
 cout<<" "<<itemPrice[i]; 
 } 
 cout<<"\n"; 
} 
int main()
{ 
 ITEMS order; 
 order.CNT(); 
 int x; 
 do  { 
 cout<<"\n You can do the following;" 
 <<"Enter appropriate number\n"; 
 cout<<"\n1 : Add an Item"; 
 cout<<"\n2 : Display Total Value"; 
 cout<<"\n3 : Delete an Item"; 
 cout<<"\n4 : Display all items"; 
 cout<<"\n5 : Quit"; 
 cout<<"\n\n What is your option?"; 
 cin>>x; 

 switch(x) 
 { 
 case 1 : order.getitem(); 
 break; 
 case 2 : order.displaySum(); 
 break; 
 case 3 : order.remove(); 
 break; 
 case 4 : order.displayItems(); 
 break; 
 default : cout<<"Error in input"; 
 } 
 }while(x!=5); 
 return 0; }

