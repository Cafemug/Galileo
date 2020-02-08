#include <iostream>
using namespace std;
bool broken[10];
int check(int num){
    int len=0;
    if(num == 0){
        return broken[num] ? 0:1;
    }
    else{
        while(num>0){
            int temp = num%10;
            if(broken[temp]) return 0;
            len++;
            num/=10;
        }
    }
    return len;
}
int main(){
    int num,broken_num;
    cin>>num;
    cin>>broken_num;
    while(broken_num--){
        int temp;
        cin>>temp;
        broken[temp]=true;
    }
    int ans = num - 100;
    if(ans<0) ans = -ans;
    for(int i=0;i<=1000000;i++){
        int temp_res = check(i);
        if(temp_res>0){
            int temp_ans = num-i;
            if(temp_ans<0) temp_ans = -temp_ans;
            if(ans > temp_ans+temp_res) ans = temp_res+temp_ans;
        }
    }
    cout<<ans;
}