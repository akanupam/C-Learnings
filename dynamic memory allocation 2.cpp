// #include<iostream>
// using namespace std;

// int main(){
//     int *arr;
//     int size;
//     cout<<"Enter the size of int arr: "<<endl;
//     cin>>size;
//     cout<<"Creating an array of size: "<<endl;
    
//     arr = new int[size];
//     if(arr==NULL){
//         cout<<"memory not allocated."<<endl;
//         return 0;
//     }else{
//         cout<<"Dynamic memory allocated."<<endl;
//     }
//     cout<<"Enter the array elements: "<<endl;
//     for(int i=0;i<size;i++){
//         cin>> *(arr+i);
//     }
//     cout<<"Entered elements are: "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<*(arr+i)<<endl;
//     }
//     delete []arr;
//     cout<<"memory deallocated."<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     double *arr;
//     int size;
//     cout<<"Enter the size of array:"<<endl;
//     cin>>size;
//     arr = new double[size];
//     if(arr==NULL){
//         cout<<"Memory not allocated."<<endl;
//     }else{
//         cout<<"Memory allocated"<<endl;
//     }
//     cout<<"Enter the elements for array: "<<endl;
//     for(int i=0;i<size;i++){
//         cin>> *(arr+i);
//     }
//     double sum=0;
//     for(int i=0;i<size;i++){
//         sum+= *(arr+i);
//     }
//     cout<<"Sum is: "<<sum<<endl;
//     double avg = sum/size;
//     cout<<"Avg is: "<<avg<<endl;
    
// }



// #include<iostream>
// using namespace std;

// class Array{
//     int *arr;
//     int size;
//     public:
//     void get_data(int n){
//         size = n;
//         arr = new int[size];
//         for(int i=0;i<size;i++){
//             cin>>*(arr+i);
//         }
//     }
//     int get_sum(){
//         int sum=0;
//         for(int i=0;i<size;i++){
//             sum+=arr[i];
//         }
//         return sum;
//     }
//     void display_data(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<endl;
//         }
//         cout<<"Sum of elements: "<<get_sum()<<endl;
//     }
//     ~Array(){
//         delete []arr;
//         cout<<"Memory deallocated."<<endl;
//     }
// };

// int main(){
//     Array a;
//     int n;
//     cin>>n;
//     a.get_data(n);
//     a.display_data();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Employee{
//     int id;
//     float salary;
//     public:
//     void input(){
//         cout<<"Enter id:"<<endl;
//         cin>>id;
//         cout<<"Enter salary: "<<endl;
//         cin>>salary;
        
//     }
//     void display(){
//         cout<<id<<" "<<salary<<endl;
//     }
// };

// int main(){
//     int n;
//     cout<<"Enter no. of Employee: "<<endl;
//     cin>>n;
//     Employee *p = new Employee[n];
//     Employee *d = p;
//     Employee *flag = p;
//     if(p==NULL){
//         cout<<"Memory allocation failed."<<endl;
//         return 0;
//     }else{
//         cout<<"Memory allocated."<<endl;
//     }
//     for(int i=0;i<n;i++){
//         p->input();
//         p++;
//     }
//     for(int i=0;i<n;i++){
//         d->display();
//         d++;
//     }
//     delete []flag;
//     p=NULL;
//     d=NULL;
//     return 0;
// }






// new and delete are the operator 







#include<iostream>
using namespace std;

class Sample{
    public:
    Sample(){
        cout<<"Constructor called."<<endl;
    }
    ~Sample(){
        cout<<"Destructor called."<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    Sample* obj1 = new Sample[n];
    // delete []obj1;
    return 0;
}




























