#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,c,n,sum,flag=0;
    cin>>n;
    for(i=1;i<100;i++){
        for(i=2;i<n;i++){
            if (n%i==0){
                flag=0;
            }}
            if (flag==0){
                c++;
                sum=sum+c;
            }
            else {
                cout<<"no";
            }}
    cout<<c;
    cout<<sum;
}
