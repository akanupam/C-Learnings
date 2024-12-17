// #include<iostream>
// using namespace std;

// int main(){
//     int *ptr;
//     cout<<ptr;
    
// }


// #include<iostream>
// using namespace std;

// class A{
//     int x;
//     public:
//     void getData(){
//         cout<<"Enter a num:"<<endl;
//         cin>>x;
//     }
//     void showData(){
//         cout<<x<<endl;
//     }
// };

// int main(){
//     A obj1;
//     A *ptr;
//     ptr = &obj1;
//     ptr->getData();
//     ptr->showData();
//     (*ptr).getData();
//     (*ptr).showData();
// }




#include<iostream>
using namespace std;
class X{
    public:
    int a;
    void f(int b){
        cout<<"The value of b is:"<<b<<endl;
    }
    
};
int main(){
    int X::*ptipptr = &X::a;
    void(X::* ptfptr)(int) = &X::f;
    X object;
    object.*ptipptr=10;
    cout<<"The value of a is:"<<object.*ptipptr<<endl;
    (object.*ptfptr)(20);
}




