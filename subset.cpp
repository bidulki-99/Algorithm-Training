vector<int> subset;

void make_subset(int k, int n) {
    if (k == n + 1) {
        for (int i : subset)
            cout << i << " ";
        cout << "\n";
    }
    else {
        subset.push_back(k);
        make_subset(k + 1, n);
        subset.pop_back();
        make_subset(k + 1, n);
    }
}
