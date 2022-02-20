vector<int> adj[N];
int count_subtree[N];

void dfs(int s, int e) {
    for (auto u: adj[s]) {
        if (u != e) dfs(u, s);
    }
}

void dfs_count(int s, int e) {
    count_subtree[s] = 1;
    for (auto u: adj[s]) {
        if (u == e) continue;
        dfs(u, s);
        count_subtree[s] += count_subtree[u];
    }
}
