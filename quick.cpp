#include <iostream>
using namespace std;

void quick(int A[],int i,int j){
    if(j<=1){
        return;
    }
    if(i<j){
        int low = i;
        int high = j - 1;
        int pivot = A[high];
        
        while(low<=high){
            while(A[low] < pivot){
                low++;
            }
            while(A[high] > pivot){
                high--;
            }
            
            if(low <= high){
                int temp = A[low];
                A[high] = A[low];
                A[low] = temp;
                low++;
                high--;
            }
        }
        quick(A,i,high);
        quick(A,low,j);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
   
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    quick(A, 0, n);
    cout << "Sorted array: ";
    printArray(A, n);

    return 0;
}
