priority_queue<pair<int, int>> q;
vector<pair<int, int>> adj[N];
int dist[N];
bool processed[N];

void dijkstra(int x, int n) {
    for (int i = 1; i <= n; i++) {
        dist[i] = 1 << 31 - 1;
    }
    dist[x] = 0;
    q.push({0, x});
    while (!q.empty()) {
        int a = q.top().second; q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto u: adj[a]) {
            int b = u.first, w = u.second;
            if (dist[a] + w < dist[b]) {
                dist[b] = dist[a] + w;
                q.push({-dist[b], b});
            }
        }
    }
}
