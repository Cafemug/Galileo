#include <iostream>
#include <deque>
#include <tuple>
using namespace std;
int d[101][101];
int board[101][101];
bool check[101][101];
int idx[]={1,-1,0,0};
int idy[]={0,0,1,-1};
deque <pair<int, int> > dq;
int n,m;
int main(){
    cin>>m>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%1d",&board[i][j]);
        }
    }
    check[1][1]=true;
    dq.push_back(make_pair(1,1));
    d[1][1]=0;
    while(!dq.empty()){
        int x,y;
        tie(x,y) = dq.front();
        dq.pop_front();
        for(int i=0;i<4;i++){
            int tx = x+idx[i];
            int ty = y+idy[i];
            if(tx<=0 || tx>n || ty<=0 || ty>m | check[tx][ty]) continue;
            if(board[tx][ty]==0){
                dq.push_front(make_pair(tx,ty));
                d[tx][ty]= d[x][y];
            }
            else{
                dq.push_back(make_pair(tx,ty));
                d[tx][ty]= d[x][y]+1;
            }
            check[tx][ty]= true;
        }
    }
    cout<<d[n][m];
}