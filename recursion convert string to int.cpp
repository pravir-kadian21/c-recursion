#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;

int stringtoint(string a){
    if(a.length()==1){
        return (a[0]-'0');
    }
    int y=stringtoint(a.substr(1));
    int x=a[0]-'0';
    x=x*pow(10,a.length()-1)+y;
    return x;
}

int main() {
    string a;
    cin>>a;
    cout << stringtoint(a) << endl;
}
