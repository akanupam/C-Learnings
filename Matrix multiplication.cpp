// You are using GCC
#include<iostream>
using namespace std;

// class matrixMultiplication{
//     public:
//     void multiply(int arr1[][],int arr2[][], int r, int c){
        
//     }
// };

int main(){
    int r1,c1;
    int r2,c2;
    cin>>r1>>c1;
    cin>>r2>>c2;
    int arr1[r1][c1];
    int arr2[r2][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }
    // matrixMultiplication obj;
    // obj.multiply(arr1,arr2,)
    int arr[r2][c1];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            int result=0;
            for(int k=0;k<c1;k++){
                result+=arr1[i][k]*arr2[k][j];
            }
            arr[i][j]=result;
        
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}