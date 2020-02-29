#include <iostream>
#include <tuple>
#include <queue>
#include <cstring>
using namespace std;
int s;
int d[1001][1001];
queue<pair<int, int> > q;
int main(){
    cin>>s;
     memset(d,-1,sizeof(d));
    q.push(make_pair(1,0));
    d[1][0]=0;
    while(!q.empty()){
        int screen,clip;
        tie(screen, clip) = q.front();
        q.pop();
        if(d[screen][screen] ==-1){
            d[screen][screen]=d[screen][clip] +1;
            q.push(make_pair(screen, screen));
        }
        if(screen+clip<=s && d[screen+clip][clip] ==-1){
            d[screen+clip][clip]=d[screen][clip] +1;
            q.push(make_pair(screen+clip,clip));
        }
        if(screen-1 >=0 && d[screen-1][clip] ==-1){
            d[screen-1][clip]=d[screen][clip] +1;
            q.push(make_pair(screen-1,clip));
        }
    }
    int res=-1;
    for(int i=0;i<=s;i++){
        if( d[s][i] !=-1){
            if(res>d[s][i] || res==-1) res=d[s][i];
        }
        
    }
    cout<<res;
}