#include<iostream>
using namespace std;

bool isPossible(int stalls[], int k, int mid){
    int cowcount=1;
    int lastposition=stalls[0];
    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lastposition>=mid)
        {
            cowcount++;
            if(cowcount==k)
            {
                return true;
            }
            lastposition=stalls[i]
        }
    }
    return false;
}


int aggressiveCows(int stalls[], int k)
{
    sort(stalls.begin(), stalls.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++)
    {
        maxi=max(maxi, stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(stalls, k, mid)
           {
               ans=mid;
               s=mid+1;
           }
           else
           {
               e=mid-1;
           }
           mid=(s+e-s)/2;
    }
     return ans;//    Write your code here.
}

int main(){
    int arr[] = {4, 2, 1, 3, 6};
    int k=2;
    cout<< aggressiveCows(arr, k) << endl;
    
    return 0;
}
