// You are using GCC
// #include<iostream>
// using namespace std;

// template<class T>
// T square(int n){
//     return n*n;
// }
// int main(){
//     int n1 = 3;
//     cout<<"square of "<<n1<<" = "<<square<int>(n1)<<endl;
//     float n2 = 5.6;
//     cout<<"square of "<<n2<<" = "<<square<float>(n2)<<endl;
//     int n3 = 123.456;
//     cout<<"square of "<<n3<<" = "<<square<double>(n3)<<endl;
// }




// #include<iostream>
// #define MAX 5
// using namespace std;

// template<class Type>
// Type sum(Type A[]){
//     Type Total = 0;
//     for(int i=0;i<MAX;i++){
//         Total+= A[i];
//     }
//     return Total;
// }

// template<class Type>
// void read(Type A[]){
//     for(int i=0;i<MAX;i++){
//         cin>>A[i];
//     }
// }

// int main(){
//     int Array[MAX];
//     read<int>(Array);
//     cout<<"Sum of elements: "<<sum<int>(Array)<<endl;
//     float Array1[MAX];
//     read<float> (Array1);
//     cout<<"Sum of elements: "<<sum<float>(Array1);
// }





// #include<iostream>
// using namespace std;

// template<class T1,class T2>
// void multiply(T1 n1,T2 n2){
//     cout<<n1*n2<<endl;
// }
// int main(){
//     int n1 = 3;
//     float n2 = 4.2;
//     cout<<"Product of n1 and n2: ";
//     multiply<int,float>(n1,n2);
//     int n4 = 4;
//     float n3 = 7.8;
//     cout<<"Product of n3 and n4: ";
//     multiply<int,float>(n4,n3);
    
// }



#include<iostream>
using namespace std;
template<class T>
void display(T x){
    cout<<"Template display: "<<x<<endl;
}
template<class T1,class T2,class T3>
void display(T1 x,T2 y,T3 z){
    cout<<"Template display: "<<x<<" "<<y<<" "<<z<<" "<<endl;
}
void display(int x){
    cout<<"Explicit display: "<<x<<endl;
}
void display(char y){
    cout<<"Explicit display: "<<y<<endl;
}
int main(){
    display(100);
    display(56.78);
    display('a');
    display(5.98,'b',89);
    return 0;
}























