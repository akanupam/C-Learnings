// You are using GCC
#include<iostream>
// #include<conio.h>
using namespace std;

// class abc{
//     int x,y,z;
//     public:
//     abc(int a, int b, int c){
//         this->x = a;
//         this->y = b;
//         this->z = c;
//     }
//     void operator -(){
//         x=-x;
//         y = -y;
//         z = -z;
//     }
//     void display(){
//         cout<<x<<" "<<y<<" "<<z<<endl;
//     }
// };


// int main(){
//     abc obj(1,-2,3);
//     cout<<"before overloading:"<<endl;
//     obj.display();
//     -obj;
//     cout<<"after overloading:"<<endl;
//     obj.display();
//     return 0;
// }


// class sum{
//     public:
//     int a,b;
//     sum(){
//         b = 50;
//     }
//     void set_data(){
//         cout<<"enter a:"<<endl;
//         cin>>a;
//     }
//     int operator +(sum s1){
//         return a+s1.b; //s.a+t.b;
//     }   
// };


// int main(){
//     int d;
//     sum s,t;
//     s.set_data();
//     d = s+t; // s.operator(t);
//     cout<<"sum is: "<<d<<endl;
// }


// class complex{
//     public:
//     int real,imag;
//     complex(){
//         real=0;
//         imag=0;
//     }
//     complex(int a,int b):real(a),imag(b){}
//     complex operator+(complex c){
//         // real = real+c.real;
//         // imag = imag+c.imag;
//         // return complex(real,imag);
//         complex temp;
//         temp.real = real+c.real;
//         temp.imag = imag+c.imag;
//         return temp;
//     }
//     void display(){
//         cout<<real<<" + "<<imag<<"i"<<endl; 
//     }
// };


class complex{
    public:
    int real,imag;
    complex(){
        real=0;
        imag=0;
    }
    complex(int a,int b):real(a),imag(b){}
    friend complex operator+(complex c1,complex c2);
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl; 
    }
};

complex operator +(complex c1,complex c2){
        complex temp;
        temp.real = c1.real+c2.real;
        temp.imag = c1.imag+c2.imag;
        return temp;
}

int main(){
    complex c1(10,2),c2(20,4);
    complex c3 = c1+c2;
    c3.display();
}







