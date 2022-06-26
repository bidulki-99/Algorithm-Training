int sprague_grundy() {
  int n;
	cin >> n;

	int grundy = 0;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		grundy ^= p;
	}

	if (grundy)
		return 1;
	else
		return 0;
}
