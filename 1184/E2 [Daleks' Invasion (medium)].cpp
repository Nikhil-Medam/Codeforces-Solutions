// Author: πα
 
#include <bits/stdc++.h>
using namespace std;
#define long int64_t
 

map<pair<int, int>, int> mp;
struct DSU
{
    int parts;
    vector<int> rt, sz;
 
    DSU(int n)
    {
        rt.resize(n+1);
        sz.resize(n+1);
        iota(rt.begin(), rt.end(), 0);
        fill(sz.begin(), sz.end(), 1);
        parts = n;
    }
 
    int root(int k)
    {
        while(k != rt[k])
            k = rt[k];
        return k;
    }
 
    void merge(int u, int v, int idx)
    {
        int r1 = root(u), r2 = root(v);
        if(r1 == r2)
            return;
        parts--;
        if(sz[r1] > sz[r2])
            swap(r1, r2);
        sz[r2] += sz[r1];
        sz[r1] = 0;
        rt[r1] = rt[r2];
        mp[{r1, r2}] = idx+1;
    }

    int getLCA(int u, int v)
    {
    	vector<int> v1, v2;
    	int k = u;
    	v1.push_back(u);
    	while(k != rt[k])
            v1.push_back(rt[k]), k = rt[k];
        k = v;
        v2.push_back(v);
        while(k != rt[k])
            v2.push_back(rt[k]), k = rt[k];
        reverse(v1.begin(), v1.end());
        reverse(v2.begin(), v2.end());
        v1.push_back(-1);
        v2.push_back(-2);
        int prev = v1[0];
        for(int i=0;i<min(v1.size(), v2.size());i++)
        {
        	if(v1[i] == v2[i])
        	{
        		prev = v1[i]; 
        		continue;
        	}
        	// cout<<v1[i]<<" "<<v2[i]<<" "<<prev<<endl;
        	return max(mp[{v1[i], prev}], mp[{v2[i], prev}]);
        }
    }
};
 
struct Edge
{
    int u, v;
    long w;
    Edge(int u, int v, long w)
    {
        this -> u = u;
        this -> v = v;
        this -> w = w;
    }
    bool operator < (Edge const& e)
    {
        return w < e.w;
    }
};
const int maxn = 1e6+2;
int mark[maxn], ans[maxn];

void kruskal(vector<Edge> &edges, DSU &dsu)
{
    sort(edges.begin(), edges.end());
    int len = edges.size();
    for(int i=0;i<len;i++)
    {
    	auto e = edges[i];
        if(dsu.root(e.u) != dsu.root(e.v))
        {
            dsu.merge(e.u, e.v, i);
	        mark[i] = 1;
        }
    }
}
 
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    vector<Edge> ve;
    vector<pair<int, int>> vp;
    int n, m, u, v, w;
    cin >> n >> m;
    DSU dsu(n);
    int idx = 0;
    while(m--)
        cin >> u >> v >> w, ve.push_back({u, v, w}), vp.push_back({w, idx}), idx++;
    kruskal(ve, dsu);
    sort(vp.begin(), vp.end());
    map<int, int> rel;
    for(int i=0;i<ve.size();i++)
    {
    	if(mark[i])
    		continue;
    	int idx = dsu.getLCA(ve[i].u, ve[i].v);
    	// cout<<idx<<endl;
    	rel[vp[i].second] = ve[idx-1].w;
    }
    for(auto it: rel)
    	cout<<it.second<<endl;
    return 0;
}