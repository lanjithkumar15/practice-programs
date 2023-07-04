#include <iostream>
using namespace std;
void counting(int A[],int n,int n1){
     int max = n1+1;
     int B[max];
     for(int i=0;i<max;i++){
        B[i] = 0;
     }
     for(int i=0;i<n;i++){
        B[A[i]]++;
     }
     for(int i=0;i<max;i++){
        if(B[i]!=0){
            while(B[i]--){
                cout<<" "<<i;
            }
        }
     }
}
int main(){
    int n;
    cin>>n;
    int A[n];
    int max = 0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(max<A[i])
            max = A[i];
    }
    int n1 = max+1;
    counting(A,n,n1);
}