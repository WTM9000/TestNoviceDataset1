int find_period_in_array(const int arr[], const int length) {
    int max_period = 0;
    for (int period = 1; period <= length / 2; period++) {
        if (length % period != 0) continue;
        int is_periodic = 1;
        for (int i = 0; i < period; i++) {
            for (int j = 1; j < length / period; j++) {
                if (arr[i] != arr[i + j * period]) {
                    is_periodic = 0;
                    break;
                }
            }
            if (!is_periodic) break;
        }
        if (is_periodic && period > max_period) {
            max_period = period;
        }
    }
    if (max_period == 0) {
        int all_same = 1;
        for (int i = 1; i < length; i++) {
            if (arr[i] != arr[0]) {
                all_same = 0;
                break;
            }
        }
        if (all_same && length >= 2) {
            max_period = 1;
        }
    }
    return max_period;
}