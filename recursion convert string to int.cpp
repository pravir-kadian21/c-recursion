#include <iostream>
#include<cstring>
using namespace std;

void strinttoint(char *a,int l){
    if(l==0){
        return;
    }
    cout << a[0];
    return strinttoint(a+1,l-1);
}
int main() {
    char a[100];
    cin>>a;
    int l=strlen(a);
    strinttoint(a,l);
    return 0;
}
