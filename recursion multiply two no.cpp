#include <iostream>
using namespace std;

int multiply(int a,int b){
    if(b==1){
        return a;
    }
    int ans = a+multiply(a,b-1);
    return ans;
}
int main() {
    int a,b,c,d;
    cin>>a>>b;
    if(a<0){
        c=-a;
    }
    else{
        c=a;
    }
    if(b<0){
        d=-b;
    }
    else{
        d=b;
    }
    if(a<0 && b<0){
        cout << multiply(c,d) << endl;
    }
    if((a<0 && b>0) || (a>0 && b<0)){
        cout << -multiply(c,d) << endl;
    }
    if(a>0 && b>0){
        cout << multiply(c,d) << endl;
    }
}
