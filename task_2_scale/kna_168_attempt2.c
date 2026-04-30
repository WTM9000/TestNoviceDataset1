int find_period_in_array(const int arr[], const int length) {
    for (int max_period = length / 2; max_period >= 1; max_period--) {
        if (length % max_period != 0) continue;
        int isOk = 1;
        for (int i = 0; i < max_period; i++) {
            for (int j = i + max_period; j < length; j += max_period) {
                if (arr[i] != arr[j]) {
                    isOk = 0;
                    break;
                }
            }
            if (!isOk) break;
        }
        if (isOk) return max_period;
    }
    return 0;  
}