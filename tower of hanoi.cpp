#include <iostream>
using namespace std;

void towerofhanoi(int n,char scr,char des,char helper){
    if(n==0){
        return;
    }

    towerofhanoi(n-1,scr,helper,des);
    cout << "shift " << n << " from " << scr << " to " << des << endl;
    towerofhanoi(n-1,helper,des,scr);
}
int main() {
    int n;
    cin>>n;
    char scr,des,helper;
    scr='A';
    des='C';
    helper='B';
    towerofhanoi(n,scr,des,helper);

    return 0;
}
