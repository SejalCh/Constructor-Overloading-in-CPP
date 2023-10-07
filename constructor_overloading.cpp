/*Exp-13-Constructor Overloading*/
#include<iostream>
using namespace std;
class demo
{
   int x;
   public:
demo() /*default constructor*/
    {
        x=10;
    }
    demo(int y) /*parameterized constructor*/
    {
        x=y;
    }
    demo(demo &xx) /*copy constructor*/
    {
        x=xx.x;
    }
    void putdata()
    {
        cout<<"X="<<x<<endl;
    }
};
int main()
{
    demo xx;
    demo aa(20);
    demo bb(xx);

    xx.putdata();
    aa.putdata();
    bb.putdata();

    return  0;
}
/*Output:
X=10
X=20
X=10*/