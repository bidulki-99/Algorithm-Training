vector<int> permutation;
bool chosen[10000];

void make_permutation(int n) {
    if (permutation.size() == n) {
        for (int i : permutation)
            cout << i << " ";
        cout << "\n";
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (chosen[i])
                continue;
            chosen[i] = true;
            permutation.push_back(i);
            make_permutation(n);
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}
