// You are using GCC
#include<iostream>
#include<string>
using namespace std;

// class base{
//     private:
//     int a=10;
//     protected:
//     int b=20;
//     public:
//     int c=30;
    
// };

// class child:public base{
//     public:
//     void show(){
//         // cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//     }
// };

// int main(){
//     child c;
//     cout<<c.c<<endl;
//     c.show();
// }

class student{
    private:
    int roll_no;
    protected:
    char section[10];
    public:
    void get_rno(){
        cout<<"Enter the roll number:"<<endl;
        cin>>roll_no;
    }
    void show_rno(){
        cout<<"Roll no. is: "<<roll_no<<endl;
    }
};

class result:public student{
    private:
    float fees;
    public:
    void get_data(){
        get_rno();
        cout<<"Enter fees"<<endl;
        cin>>fees;
        cout<<"Enter section"<<endl;
        cin>>section;
    }
    void display(){
        show_rno();
        cout<<"fees: "<<fees<<endl;
        cout<<"section: "<<section<<endl;
        
    }
};

int main(){
    result obj;
    obj.get_data();
    obj.display();
    obj.get_rno();
    obj.show_rno();
}











