#include<iostream>
using namespace std;
template<class t>
class operations{
    t a,b;
    public:
    void getdata(){
        cout<<"enter the value of a and b:"<<endl;
        cin>>a>>b;
    }
    void add(){
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }
    void sub(){
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
    }
    void mul(){
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    }
    void div(){
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
    }

};
int main()
{
    operations<int> s;
    s.getdata();
    s.add();
    s.sub();
    s.mul();
    s.div();
    operations<float> u;
    u.getdata();
    u.add();
    u.sub();
    u.mul();
    u.div();
    return 0;
}
