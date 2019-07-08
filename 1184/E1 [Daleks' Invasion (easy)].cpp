// Author: πα

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

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
            k = rt[k] = rt[rt[k]];
        return k;
    }

    void merge(int u, int v)
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

int kruskal(vector<Edge> edges, int n)
{
    DSU dsu(n);
    int ans = -1;
    int u = edges.front().u, v = edges.front().v;
    sort(edges.begin(), edges.end());
    for(Edge e : edges)
    {
        if(dsu.root(e.u) != dsu.root(e.v))
            dsu.merge(e.u, e.v);
        if(dsu.root(u) == dsu.root(v) and ans == -1)
            ans = e.w;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    vector<Edge> ve;
    int n, m, u, v, w;
    cin >> n >> m;
    while(m--)
        cin >> u >> v >> w, ve.push_back({u, v, w});
    ve.front().w = 1e9;
    cout << kruskal(ve, n);
    return 0;
}
