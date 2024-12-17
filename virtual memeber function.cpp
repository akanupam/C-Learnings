// // You are using GCC

// #include<iostream>
// using namespace std;

// class B{
//     public:
//     virtual void show(){
//         cout<<"Base class Show"<<endl;
//     }
// };

// class D: public B{
//     public:
//     void show(){
//         cout<<"Derived class Show"<<endl;
//     }
// };
// int main(){
//     B *bptr;
//     B base;
//     bptr= &base;
//     bptr->show();
//     D derived;
//     bptr = &derived;
//     bptr->show();
//     return 0;
// }

#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"print base class"<<endl;
    }
    void show(){
        cout<<"show base class"<<endl;
    }
};

class derived: public base{
    public:
    void print(){
        cout<<"print derived class"<<endl;
    }
    void show(){
        cout<<"show derived class"<<endl;
    }
};


int main(){
    base *bptr;
    derived d;
    bptr =&d;
    bptr->print();
    bptr->show();
}





























