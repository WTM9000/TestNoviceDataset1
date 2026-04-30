int find_period_in_array(const int arr[], const int length) {
    for (int period = length / 2; period >= 1; period--) {
        if (length % period != 0) continue;

        int ok = 1;
        for (int i = 0; i < period; i++) {
            for (int j = i + period; j < length; j += period) {
                if (arr[i] != arr[j]) {
                    ok = 0;
                    break;
                }
            }
            if (!ok) break;
        }

        if (ok) return period;
    }

    return 0;
}