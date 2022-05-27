#include<iostream>
using namespace std;

getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<e){
        if(arr[m]>=arr[0])
        {
            s=m+1;
        }
        else
        {
            e=m;
        }
        m=s+(e-s)/2;
    }
    return arr[s];
}


int main(){
    int A[]= {9, 10, 11, 1, 2};
    int N = 5;
    cout<< getPivot(A, N) <<endl;
    return 0;
}



