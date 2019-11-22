#include <iostream>
using namespace std;

void quicksort(int *a,int s,int e){
    if(s>=e){
        return;
    }

    int i=s-1;
    int pivot=a[e];
    for(int j=s;j<e;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    int p=i+1;
    quicksort(a,p+1,e);
    quicksort(a,s,p-1);
}
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
