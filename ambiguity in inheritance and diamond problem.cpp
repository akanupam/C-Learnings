#include<iostream>
using namespace std;

// class A{
//     public:
//     void show(){
//         cout<<"I am class A"<<endl;
//     }
// };

// class B:virtual public A{
// };

// class C:virtual public A{
// };
// class D: public B,public C{
// };

// //diamond problem , using virtual we can solve it

// int main(){
//     D obj;
//     obj.show();
//     // obj.A::show();
//     // obj.B::show();
// }

class B{
    protected:
    int x;
    public:
    void get_dataB(){
        cin>>x;
    }
};
class DB1: public virtual B{
    protected:
    int y;
    public:
    void get_dataDB1(){
        cin>>y;
    }
};

class DB2: public virtual B{
    protected:
    int z;
    public:
    void get_dataDB2(){
        cin>>z;
    }
};

class D: public DB1,public DB2{
    public:
    void sum(){
        int result;
        result= x+y+z;
        cout<<result;
    }
};

int main(){
    D obj;
    obj.get_dataB();
    obj.get_dataDB1();
    obj.get_dataDB2();
    obj.sum();
    return 0;
}

