int MisereNimGame() {
	int n;
	cin >> n;

	int grundy = 0, flag = 0;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		grundy ^= p;
		flag |= grundy > 1;
	}

	if (flag)
		cout << (grundy ? 1 : 0);
	else
		cout << (grundy ? 0 : 1);
}
