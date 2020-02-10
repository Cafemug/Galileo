#include <iostream>
#include <algorithm>
using namespace std;
int arr[1002]={0,};
int d[1002]={0,};
int reverse_d[1002]={0,};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,res=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=num;i++){
        int max_num=0;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                if(max_num<d[j]) max_num=d[j];
            }
        }
        d[i] = max_num +1;
    }
    reverse(arr+1,arr+num+1);
    for(int i=1;i<=num;i++){
        int max_num=0;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                if(max_num<reverse_d[j]) max_num=reverse_d[j];
            }
        }
        reverse_d[i] = max_num +1;
    }
    for(int i=1;i<=num;i++){
        if(res<(d[i]+reverse_d[num-i+1])){
            res = (d[i]+reverse_d[num-i+1]);
        }
    }
    cout<<res-1;
}