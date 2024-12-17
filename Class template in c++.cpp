// #include<iostream>
// using namespace std;

// template<class T>
// class abc{
//     public:
//     T a,b;
//     abc(T n1,T n2){
//         a= n1;
//         b= n2;
//     }
//     T max(){
//         return (a>b? a : b);
//     }
// };

// int main(){
//     abc<int> obj1(10,20);
//     cout<<"max value is: "<<obj1.max()<<endl;
//     abc<float> obj2(10.5,20.9);
//     cout<<"max value is: "<<obj2.max()<<endl;
//     abc<char> obj3('A','a');
//     cout<<"max value is: "<<obj3.max()<<endl;
// }



#include<iostream>
using namespace std;
template<class T>
class abc{
    T* a;
    int size;
    public:
    abc(){
        cin>>size;
        a = new T[size];
        for(int i=0;i<size;i++){
            cin>>a[i];
        }
    }
    T sum(){
        T sum=0;
        for(int i=0;i<size;i++){
            sum+=a[i];
        }
        return sum;
    }
};

int main(){
    abc<int> obj1;
    cout<<"Sum  of integer array element: "<<obj1.sum()<<endl;
    abc<float> obj2;
    cout<<"Sum  of float array element: "<<obj2.sum();
    
}
















