#include <bits/stdc++.h>
using namespace std;
int n,team=0;
vector<int> Map,vis;

void dfs(int now)
{
    if (vis[now]++) return;
    dfs(Map[now]);
}

int main()
{
    scanf("%d",&n);
    Map.resize(n);
    vis.resize(n,0);
    for (int i=0;i<n;i++) scanf("%d",&Map[i]);
    for (int i=0;i<n;i++) if (vis[i]==0)
    {
        team++;
        dfs(i);
    }
    printf("%d",team);
    return 0;
}
