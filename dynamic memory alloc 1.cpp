#include<iostream>
using namespace std;

// int main(){
//     int *p = NULL;
//     p= new int;
//     if(p==NULL){
//         cout<<"memeory allocation failed";
//         exit(1);
//     }else{
//         cout<<"memory allocated"<<endl;
//         *p = 12;
//         cout<<"Integer value is "<<*p<<endl;
//         delete p;
//         cout<<"memory deleted"<<endl;
//     }
//     return 0;
// }

int main(){
    float *p =NULL;
    float *r =NULL;
    float *t =NULL;
    float *si =NULL;
    p = new float;
    r = new float;
    t = new float;
    si = new float;
    if(p==NULL||r==NULL||si==NULL){
        cout<<"Memory allocation failure";
        exit(1);
    }
    cout<<"Enter principal,rate and time"<<endl;
    cin>>*p>>*r>>*t;
    *si = (0.01)*(*p)*(*r)*(*t);
    cout<<"Simple interest is:"<<*si<<endl;
    delete p;
    delete r;
    delete t;
    delete si;
    return 0;
}