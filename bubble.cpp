#include <iostream>
using namespace std;
void bubble(int A[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    bubble(A,n);
    for(int i=0;i<n;i++){
        cout<<" "<<A[i];
    }
}