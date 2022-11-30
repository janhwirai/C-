/* Pascal's Triangle */

#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter no. of rows to show- ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){  //first row 1 element Second row 2 elements Third Row 3 elements hence jwill be less than equal to i
            if(j==0 || i==j){ //First and last element of each row is 1
                arr[i][j]=1;  
            }
            else{
                arr[i][j]=(arr[i-1][j] + arr[i-1][j-1]); //Sum of above and left above element
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}