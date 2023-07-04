#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(key == A[i]){
            cout<<i+1;
            break;
        }
    }
}