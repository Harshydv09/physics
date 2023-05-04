#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,c,n,sum;
    cin<<n;
    for(i=1;i<n;i++){
        for(i=2;i<n;i++){
            if (i%2==0){
                cout<<"no prime numbers";
            }
            else{
                c++;
                sum=sum+c;
            }
        }
    }
    cout<<c;
    cout<<sum;
}
