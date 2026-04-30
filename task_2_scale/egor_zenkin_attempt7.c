int find_period_in_array(const int arr[], const int length) {
    int max_period = 0;
    for (int p = 1; p <= length / 2; ++p) {
        if (length % p != 0) continue;
        int valid = 1;
        for (int i = p; i < length; ++i) {
            if (arr[i] != arr[i % p]) {
                valid = 0;
                break;
            }
        }
        if (valid) {
            if (length / p >= 2 && p > max_period) {
                max_period = p;
            }
        }
    }
    return max_period;
}