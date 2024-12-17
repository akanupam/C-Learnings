// You are using GCC
#include<iostream>
using namespace std;

class complex{
    public:
    int real,imag;
    complex(){
        real=0;
        imag=0;
    }
    complex(int a,int b):real(a),imag(b){}
    // complex operator+(complex c1){
    //     complex temp;
    //     temp.real = real+c1.real;
    //     temp.imag = imag+c1.imag;
    //     return temp;
    // }
    void operator+(complex &c1){
        real = real+c1.real;
        imag = imag+c1.imag;
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl; 
    }
};

int main(){
    complex c(12,5),c1(10,2),c2(20,4);
    // complex c3 = c+c1;
    // complex c4 = c3+c2;
    c+c1;
    c+c2;
    c.display();
}