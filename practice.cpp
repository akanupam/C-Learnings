// Question_1

/* #include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    int b=0;
    for(int i=1;i<=N;i++){
        if(i%2!=0){
            int a=1;
            for(int j=1;j<=i;j++){
                cout<<a;
                if(a==1){
                    a=0;
                }else{
                    a=1;
                }
            }
        }else{
            for(int j=1;j<=i;j++){
                cout<<b;
                if(b==1){
                    b=0;
                }else{
                    b=1;
                }
        }
    }
    cout<<endl;
}
} */




//Question_2
/*
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=(2*(N-i));j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

*/




//Question3
/*
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

*/



//Question 4
/*
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a=1;
    for(int i=N;i>=1;i--){
        char a = 'A';
        for(int j=0;j<i;j++){
            int b= int(a)+j;
            cout<<(char) b;
        }
        cout<<endl;
        
    }
}

*/




//Question 5
/*
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a=1;
    for(int i=0;i<N;i++){
        char a = 'A';
        int b = a+i;
        for(int j=0;j<=i;j++){
            cout<<(char) b;
        }   
        cout<<endl;
    }
}

*/



//Question 6
/*
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        char a='A';
        for(int j=0;j<(N-i-1);j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<a;
            int b= (int)a+1;
            a = (char)b;
        }
        a = (char) ((int)a - 1);
        
        for(int j=0;j<i;j++){
            a= (char) ((int)a -1);
            cout<<a;
        }
        cout<<endl;
    }
}
*/




// void countDigits(int arr[],int n){
//     int count[10]={0};
//     for(int i=0;i<n;i++){
//         int temp = arr[i];
//         count[temp]++;
//     }
//     for(int i=0;i<10;i++){
//         if(count[i]>0){
//             cout<<i<<": "<<count[i];
//         }
//     }
// }