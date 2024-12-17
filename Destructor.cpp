#include<iostream>
using namespace std;

class A{
    int id;
    public:
    A(int i){
        id = i;
        cout<<"Constructer called: "<<id<<endl;
    }
    ~A(){                                    //Destructer has tilde sign;
        cout<<"Destructer called: "<<id<<endl;
    }
};

int main(){
    A ob1(1);
    A ob2(2);
    A ob3(3);
    return 0;
}


