#include <iostream>
using namespace std;

void merge(int *a,int sp,int ep){
    int mp=(sp+ep)/2;
    int i=sp;
    int j=mp+1;
    int k=sp;
    int temp[100];
    while(i<=mp && j<=ep){
        if(a[i]>a[j]){
            temp[k]=a[j];
            j++;
            k++;
        }
        else{
            temp[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<=mp){
        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=ep){
        temp[k]=a[j];
        k++;
        j++;
    }
    for(int i=0;i<k;i++){
        a[i]=temp[i];
    }
}

void mergesort(int *a,int sp,int ep){
    int mp=(sp+ep)/2;

    if(sp>=ep){
        return;
    }
    mergesort(a,sp,mp);
    mergesort(a,mp+1,ep);
    merge(a,sp,ep);
}

int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
