#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Map(100,vector<int>(100,1));
int dx[]={-1,0,1,0},dy[]={0,-1,0,1},rdx[]={-3,-3,-1,1,3,3,1,-1},rdy[]={1,-1,-3,-3,-1,1,3,3};

int bfs(int S,int E)
{
    if (S==E) return 0;
    vector<vector<bool>> v(100,vector<bool>(100,true));
    v[S/100][S%100]=false;
    queue<pair<int,int>> q; q.push({S,0});
    while (!q.empty())
    {
        auto [c,sum]=q.front(); q.pop();
        if (c==E) return sum;
        for (int i=0;i<4;i++)
        {
            int cx=c/100+dx[i],cy=c%100+dy[i];
            if (cx>=0 && cx<100 && cy>=0 && cy<100 && Map[cx][cy])
            {
                for (int j=2*i;j<2*i+2;j++)
                {
                    int rcx=c/100+rdx[j],rcy=c%100+rdy[j];
                    if (rcx>=0 && rcx<100 && rcy>=0 && rcy<100 && Map[rcx][rcy])
                    {
                        if (v[rcx][rcy])
                        {
                            v[rcx][rcy]=false;
                            q.push({rcx*100+rcy,sum+1});
                        }
                    }
                }
            }
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,sx,sy,ex,ey;
    while (cin>>n)
    {
        for (int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            Map[a][b]=0;
        }
        cin>>sx>>sy;
        cin>>ex>>ey;
        int ans=bfs(sx*100+sy,ex*100+ey);
        ans!=-1?cout<<ans<<"\n":cout<<"impossible"<<"\n";
        Map.assign(100,vector<int>(100,1));
    }
    return 0;
}
