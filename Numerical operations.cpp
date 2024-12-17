// You are using GCC
// #include<iostream>
// using namespace std;
 
// class add{
//     public:
//         int a,b;
//         int sum(int n1,int n2){
//             return n1+n2;
//         }
// };

// int main(){
//     add obj;
//     int num1,num2;
//     cout<<"Enter the first number: ";
//     cin>>num1;
//     cout<<"Enter the second number: ";
//     cin>>num2;
//     obj.a = num1;
//     obj.b = num2;
//     cout<<"The result is: "<<obj.sum(obj.a,obj.b);
// }






// #include<iostream>
// using namespace std;
// class student{
//     public:
//         string name;
//         int rollNo;
// };
// int main(){
//     student obj1;
//     obj1.name = "Aditya";
//     obj1.rollNo = 35;
//     cout<<"Name of the student: "<<obj1.name<<endl;
//     cout<<"Roll number: "<<obj1.rollNo<<endl;
//     return 0;
// }





// #include<iostream>
// using namespace std;

// class arithmetic{
//     public:
//     int add(int n,int m){
//         return n+m;
//     }
//     int mul(int x,int y);
// };

// int arithmetic::mul(int x,int y){
//     return x*y;
// }

// int main(){
//     arithmetic obj;
//     cout<< obj.add(3,4)<<endl;
//     cout<< obj.mul(5,4)<<endl;
// }




// #include<iostream>
// using namespace std;

// class findgrtst{
//     public:
//     int a,b,c;
//     int compare(int a,int b, int c){
//         if(a>b && a>c){
//             return a;
//         }else if(b>a && b>c){
//             return b;
//         }else{
//             return c;
//         }
//     }
// };

// int main(){
//     findgrtst obj;
//     cin>>obj.a;
//     cin>>obj.b;
//     cin>>obj.c;
//     cout<<"the grtst is: "<<obj.compare(obj.a,obj.b,obj.c);
//     return 0;
    
// }





// #include<iostream>
// using namespace std;
// class reverse{
//     public:
//     int a;
//     void rev(int a){
//         while(a>0){
//             cout<<a%10;
//             a/=10;
//         }
//     }
// };

// int main(){
//     reverse obj;
//     cin>>obj.a;
//     obj.rev(obj.a);
// }

























