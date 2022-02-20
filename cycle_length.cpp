int adj[N];

int succ(int x) {
    return adj[x];
}

int cycle_length(int x) {
    int length, a, b;
    a = succ(x);
    b = succ(succ(x));
    while (a != b) {
        a = succ(a);
        b = succ(succ(b));
    }

    a = x;
    while (a != b) {
        a = succ(a);
        b = succ(b);
    }
    int first = a;

    b = succ(a);
    length = 1;
    while (a != b) {
        b = succ(b);
        length++;
    }

    return length;
}
