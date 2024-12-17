// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int x = str.rfind('@');
    int y = str.rfind('.');
    try{
    if(!isalpha(str[0])){
        throw 1;
    }else if(x>y){
        throw 1;
    }else if(y == str.length()-1){
        throw 1;
    }else{
        cout<<"Email Id is valid."<<endl;
    }
    }
    catch(int i){
        cout<<"Exception Caught..."<<endl;
        cout<<"Invalid Email Id!!!"<<endl;
    }
}