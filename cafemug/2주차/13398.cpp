#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[100001];
    int d_no_reverse[100001];
    int d_reverse[100001];
    int num,res;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    d_no_reverse[0]=arr[0];
    for(int i=1;i<num;i++){
        d_no_reverse[i]=max(d_no_reverse[i-1]+arr[i],arr[i]);
    }
    reverse(arr,arr+num);
    d_reverse[0]=arr[0];
    for(int i=1;i<num;i++){
        d_reverse[i]=max(d_reverse[i-1]+arr[i],arr[i]);
    }
    res = d_reverse[num-1];
    for(int i=0;i<num-2;i++){
        if(res<(d_no_reverse[i]+d_reverse[num-i-3])) res=d_no_reverse[i]+d_reverse[num-i-3];
    }
    for(int i=0;i<num;i++){
        if(res<(d_no_reverse[i])) res=d_no_reverse[i];
    }
    cout<<res;
}