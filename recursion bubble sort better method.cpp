#include <iostream>
using namespace std;

void bubblesort(int *a,int n,int j){
    if(n==1){
        return;
    }
    if(j==n-1){
        return bubblesort(a,n-1,0);
    }
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    return bubblesort(a,n,j+1);
}
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n,0);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
