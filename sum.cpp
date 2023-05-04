#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,sum=0;
    int arr[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
        sum=sum+arr[i];
        cout<<arr[i]<<endl;
    }
    cout<<sum<<endl;
    return 0;
}