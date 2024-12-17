// You are using GCC
#include<iostream>
using namespace std;

// int main(){
//     int n;
//     float s = 45.48;
//     n=s;
//     cout<<n;
// }



// class Time{
//     int hrs;
//     public:
//     Time(int t){
//         hrs = t/60;
//     }
//     void display(){
//         cout<<hrs<<" hrs"<<endl;
//     }
// };

// int main(){
//     Time t1(85);
//     t1.display();
// }


class student{
    int roll;
    float fees;
    public:
        student(int a,float m){
            roll = a;
            fees = m;
        }
        operator int(){
            return(roll);
        }
        operator float(){
            return(fees);
        }
};

int main(){
    student st(4,2000.55);
    int j = st;
    float f = st;
    cout<<j<<endl;
    cout<<f<<endl;
}