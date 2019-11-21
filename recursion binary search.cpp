#include <iostream>
using namespace std;

int binarysearch(int *a,int sp,int lp,int key){
    int mid = (sp+lp)/2;
    if(sp>lp){
        return -1;
    }
    if(a[mid]==key){
        return mid;
    }
    if(a[mid]>key){
        return binarysearch(a,sp,mid-1,key);
    }
    if(a[mid]<key){
        return binarysearch(a,mid+1,lp,key);
    }
}
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int sp=0;
    int lp=n-1;
    cout << binarysearch(a,sp,lp,key);
}
