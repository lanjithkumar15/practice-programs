#include <iostream>
using namespace std;
int binary(int A[],int n,int k){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = (low+high)/2;
        if(A[mid] == k){
            return mid;
            break;
        }
        else if(A[mid] < k){
            low = mid + 1; 
        }
        else if(A[mid] > k){
            high = mid - 1;
        }
        }
        return -1;
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int key;
    cin>>key;
   int s = binary(A,n,key);
   cout<<s;
}
