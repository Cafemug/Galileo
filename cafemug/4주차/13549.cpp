#include <iostream>
#include <deque>
using namespace std;
deque<int> q;
int d[100002];
bool check[100002];
int n,k;
void bfs(){
    check[n]=true;
    q.push_back(n);
    while(!q.empty()){
        int temp_num = q.front();
        q.pop_front();
        if(temp_num*2<=100000){
            if(!check[temp_num*2]){
                q.push_front(temp_num*2);
                d[temp_num*2]= d[temp_num];
                check[temp_num*2]=true;
            }
            
        }
        if(temp_num-1>=0){
            if(!check[temp_num-1]){
                q.push_back(temp_num-1);
                d[temp_num-1]=d[temp_num]+1;
                check[temp_num-1]=true;
            }
        }
        if(temp_num+1<=100000){
            if(!check[temp_num+1]){
                q.push_back(temp_num+1);
                d[temp_num+1]=d[temp_num]+1;
                check[temp_num+1]=true;
            }
        }
    }
}
int main(){
    cin>>n>>k;
    bfs();
    cout<<d[k];
}