#include<iostream>
using namespace std;
class sample
{

private:
    int a,b;
public:
    int s;
    void set_data(int a, int b)
    {
        this->a=a;
        this->b=b;
    }

    friend sample sum(sample);
};
sample sum(sample sm)
{
    sm.s=sm.a+sm.b;
    return sm;
}
int main()
{
    sample sm,sm1;
    sm.set_data(10,20);
    sm1=sum(sm);
    cout<<"sum of two numbers="<<sm1.s;

}
