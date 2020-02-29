#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, flag=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(next_permutation(arr,arr+n)){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    else  cout<<-1;
}
