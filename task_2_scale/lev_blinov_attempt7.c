int find_period_in_array(const int arr[], const int length) {
	int max_period = 0;

	for (int period = length / 2; period >= 1; period--) {
		bool is_period = length % period == 0;
		for (int i = 0; i + period < (length) && is_period; i++) {
			if (arr[i] != arr[i + period]) {
				is_period = false;
			}
		}

		if (is_period && max_period < period) {
			max_period = period;
			break;
		}
		
	}

	return max_period;
}