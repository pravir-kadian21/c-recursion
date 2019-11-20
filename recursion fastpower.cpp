#include <iostream>
using namespace std;

int fastpower(int a,int b){
    if(b==0){
        return 1;
    }

    int smallans=fastpower(a,b/2);
    smallans*=smallans;
    if(b&1){
        return a*smallans;
    }
    else{
        return smallans;
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    cout << fastpower(a,b) << endl;
}
