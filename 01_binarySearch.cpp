#include<iostream>
using namespace std;

int binarSearch(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(arr[m]==key)
        {
            return m;
        }
        if(arr[m]>=key)
        {
            e=m-1;
        }
        if(arr[m]<=key)
        {
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return m;
}

int main(){
    int A[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int k = 8;
    cout<< binarSearch(A, n, k) <<endl;
    return 0;
}