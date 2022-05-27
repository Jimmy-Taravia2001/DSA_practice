#include <iostream>
using namespace std;

bool isPossible(int A[], int N, int M, int mid){
    int studentCount=1;
    int pageSum=0;
     
    for(int i=0;i<N;i++){
        if(pageSum+A[i]<=mid){
            pageSum=pageSum+A[i];
        }
        else{
            studentCount++;
            if(studentCount>M || A[i]>mid){
                return false;
            }
            pageSum=A[i];
        }
    }
    return true;
}



int findPages(int A[], int N, int M) 
{
    int s=0;
    int sum=0;
    for(int i=0;i<N;i++){
        sum=sum+A[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
        
    while(s<=e){
        if(isPossible(A, N, M, mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;//code here
}





int main(){

    int arr[]={20, 30, 40, 10}; 
    int n=4;
    int m=2;
    
    cout << findPages(arr, n, m)<< endl;
    return 0;

}


