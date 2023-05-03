#include<bits/stdc++.h>
using namespace std;
int main (){
    float a1,a2,a3,b1,b2,b3,c1,c2,c3,p,c,m;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>c1>>c2>>c3;
    p=a1+a2+a3;
    cout<<p<<endl;
    float p1=(p/300)*100;
    cout<<p1<<endl;
    c=b1+b2+b3;
    cout<<c<<endl;
    float c5=(c/300)*100;
    cout<<c5<<endl;
    m=c1+c2+c3;
    cout<<m<<endl;
    float m1=(m/300)*100;
    cout<<m1<<endl;
    if(p1>c5&&p1>m1){
        cout<<p1;
    }
    else if (c5>p1&&c5>m1){
        cout<<c5;
    }
    else {
        cout<<m1;
    }
    return 0;



}