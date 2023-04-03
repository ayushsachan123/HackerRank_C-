#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    int *p,*q;
    cin>>a>>b;
    p=&a;
    q=&b;
    int c=*p+*q;
    int d=*p-*q;
    cout<<c<<endl;
    if(d>=0){
        cout<<d<<endl;
    }
    else if(d<0) {
    cout<<-d<<endl;
    }
    return 0;
}
