vector<tuple<int, int, int>> edges;
int dist[N];

void bellman_ford(int x, int n) {
    for (int i = 1; i <= n; i++) {
        dist[i] = 1 << 31 - 1;
    }
    dist[x] = 0;
    for (int i = 1; i <= n-1; i++) {
        for (auto e: edges) {
            int a, b, w;
            tie(a, b, w) = e;
            dist[b] = min(dist[b], dist[a] + w);
        }
    }
}
