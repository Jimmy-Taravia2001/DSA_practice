#include<iostream>
using namespace std;

int select(int arr[], int n)
{
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
        
    }
    
    // code here such that selecionSort() sorts arr[]
}



int main(){
    int arr[5]={64, 25, 12, 22, 11};
    int n=5;
    cout<<select(arr, n)<<endl;
    return 0;
}