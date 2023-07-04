#include <iostream>
using namespace std;
void merge(int A[],int n)
{
    if(n<=1)
       return;
    
    int mid = n/2;
    merge(A,mid);
    merge(A+mid,n-mid);
    int temp[n];
    int i=0,j=mid,k=0;

    while(i<mid && j<n){
        if(A[i] < A[j]){
            temp[k++] = A[i++];
        }
        else{
            temp[k++] = A[j++];
        }
    }
    while(i<mid){
        temp[k++] = A[i++];
    }
    while(j<n){
        temp[k++] = A[j++];
    }
    for(int i=0;i<n;i++){
        A[i] = temp[i];
    }

}
int main(){
    int n;
    cin>>n;
    int A[n];
    int i=0;
    while(n--){
        cin>>A[i++];
    }
    merge(A,n);
    for(int j=0;j<i;j++){
        cout<<A[j]<<" ";
    }
}