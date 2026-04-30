int find_period_in_array(const int arr[], const int length) {
	int max_period = 0;
	for (int i = 1; i <= length / 2; i++) {
		if (length % i != 0)
			continue;
		int flag = 1;
		for (int j = i; j < length; j++) {
			if (arr[j] != arr[j % i]) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			if (length / i >= 2 && i > max_period) {
				max_period = i;
			}
		}
	}
	return max_period;
}