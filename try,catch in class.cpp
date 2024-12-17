#include<string.h>
#include<iostream>
using namespace std;

class error{
    int err_code;
    char *err_desc;
    public:
    error(int c,char *d){
        err_code = c;
        err_desc = new char[strlen(d) + 1];
        strcpy(err_desc,d);
    }
    void display(){
        cout<<"Error code: "<<err_code<<endl;
        cout<<"Error desc: "<<err_desc<<endl;
    }
};

int main(){
    try{
    error obj(99,"This is error");
    throw(obj);
    }
    catch(error i){
        cout<<"Caught an exception."<<endl;
        i.display();
    }
    return 0;
}






















