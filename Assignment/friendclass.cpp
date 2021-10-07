#include<iostream>
using namespace std;
class a
{int num1=2;
 friend class b;
 };
class b
{
    public: int num2=4;
    a obj1;
    int getA()
    {
        return obj1.num1;
    }
    int getB()
    {
        return num2;
    }

}obj2;
int main(void)
{
    int x=obj2.getA();
    int y=obj2.getB();
    if (x>y)
    cout<<"max:"<<x;
    else
    cout<<"max:"<<y;
    return 0;
    
    
}