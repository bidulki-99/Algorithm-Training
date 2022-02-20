int link[N];
int set_size[N];

void init(int n) {
    for (int i = 1; i <= n; i++) {
        link[i] = i;
        set_size[i] = 1;
    }
}

int find(int x) {
    while (x != link[x]) x = link[x];
    return x;
}

/*
int find(int x) {
    if (x == link[x]) return x;
    return link[x] = find(link[x]);
}
*/

bool same(int a, int b) {
    return find(a) == find(b);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);

    if (set_size[a] < set_size[b]) swap(a, b);
    set_size[a] += set_size[b];
    link[b] = a;
}
