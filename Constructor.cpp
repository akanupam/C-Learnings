// Constructor example>>>>>>>>>>>>>>>>>>>>>>

// #include<iostream>
// using namespace std;

// class ABC{
//     public:
//     int a,b;
//     ABC(){
//         cout<<"I am a student";
//     }
// };

// int main(){
//     ABC obj;
//     return 0;
// }

//default Constructor >>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include<iostream>
// using namespace std;

// class Rectangle{
//     int length,breadth;
//     public:
//     Rectangle(){
//         length=5;
//         breadth=6;
//     }
//     int area(){
//         cout<<"Area of the rectangle is: "<<length*breadth;
//     }
// };

// int main(){
//     Rectangle obj;
//     obj.area();
//     return 0;
// }

//perameterized Constructor>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include<iostream>
// using namespace std;

// class Rectangle{
//     int length,breadth;
//     public:
//     Rectangle(int a,int b){
//         length = a;
//         breadth=b;
//     }
//     void area(){
//         cout<<"Area: "<<length*breadth;
//     }
// };

// int main(){
//     Rectangle obj(3,9);
//     obj.area();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Square{
//     int pie,side;
//     public:
//     Square(){
//         pie=3.14;
//     }
//     Square(int r){
//         side = r;
//     }
//     void area(){
//         cout<<"Area: "<<side*side;
//     }
// };

// int main(){
//     Square obj(4);
//     obj.area();
//     return 0;
// }




#include<iostream>
using namespace std;

class Rectangle{
    int length,breadth;
    public:
    Rectangle(int a=23,int b=4){
        length=a;
        breadth=b;
    }
    int area(){
        cout<<"Area of the rectangle is: "<<length*breadth<<endl;
    }
};

int main(){
    Rectangle obj;
    obj.area();
    Rectangle obj1(45,3);
    obj1.area();
    return 0;
}



// class counter{
//     int a;
//     public:
//     counter(int num){
//         a = num;
//     }
//     counter(counter &obj){                //copy constructor>>>>>>>>>>>>>>
//         a = obj.a;
//     }
//     void show(){
//         cout<<a<<" ";
//     }
// };

// int main(){
//     counter obj1(10);
//     counter obj2(obj1);
//     obj1.show();
//     obj2.show();
//     return 0;
// }


// class rectangle{
//     int l,w;
//     public:
//     rectangle(int a, int b):l(a),w(b){}         //initializers list
//     void area(){
//         int area = l*w;
//         cout<<area;
//     }
// };

// int main(){
//     rectangle obj(2,3);
//     obj.area();
// }













