// You are using GCC
#include<iostream>
using namespace std;

// void divide(int x, int y,int z){
//     cout<<"We are inside the function."<<endl;
//     if(x-y != 0){
//         int R = z/(x-y);
//         cout<<"Result= "<<R<<endl;
//     }else{
//         throw(x-y);
//     }
// }

// int main(){
//     try{
//         cout<<"We are inside the try block."<<endl;
//         divide(10,20,30);
//         divide(10,10,20);
//     }
//     catch(int j){
//         cout<<"Caught exception."<<endl;
//     }
//     return 0;
// }





// void Test(int x){
//     try {
//         if(x==1) throw x;
//         else if (x==0) throw 'x';
//         else if(x==-1) throw 1.0;
//         cout<<"End of try block"<<endl;
//     }
//     catch(char c){cout<<"Caught a character"<<endl;}
//     catch(int m){cout<<"Caught an integer"<<endl;}
//     catch(double d){cout<<"Caught a double"<<endl;}
// }

// int main(){
//     cout<<"Testing multiple catches"<<endl;
//     cout<<"x==1"<<endl;
//     Test(1);
//     cout<<"x==0"<<endl;
//     Test(0);
//     cout<<"x==-1"<<endl;
//     Test(-1);
//     cout<<"x==2"<<endl;
//     Test(2);
//     return 0;
// }





void test(int x){
    try {
        if(x==1) throw 'x';
        else if (x==0) throw x;
        else if(x==-1) throw 1.0;
        cout<<"End of try block"<<endl;
    }
    catch(int m){cout<<"Caught an integer"<<endl;}
    catch(...){cout<<"Caught an exception"<<endl;}
}

int main(){
    cout<<"Testing generic catch"<<endl;
    cout<<"x==1"<<endl;
    test(1);
    cout<<"x==0"<<endl;
    test(0);
    cout<<"x==-1"<<endl;
    test(-1);
    cout<<"x==2"<<endl;
    test(2);
    return 0;
}




























