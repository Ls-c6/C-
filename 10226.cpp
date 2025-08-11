#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(nullptr);
    int n;
    cin>>n;
    cin.ignore();
    cin.ignore();
    for (int i=0;i<n;i++)
    {
        unordered_map<string,double> tree;
        string tmp;
        while(getline(cin,tmp))
        {
            if (tmp.empty()) break;
            tree[tmp]++;
        }
        vector<pair<string,double>> ans(tree.begin(),tree.end());
        sort(ans.begin(),ans.end(),[] (auto &a,auto &b) {return a.first<b.first;});
        double c=0;
        for (auto &k:ans) c+=k.second;
        for (auto &print:ans) cout<<print.first<<" "<<fixed<<setprecision(4)<<print.second/c*100<<"\n";
        if (i!=n-1) cout<<"\n";
    }
    return 0;
}
