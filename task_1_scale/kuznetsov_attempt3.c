int unzip_arr(int arr[], const int length) {
    int new_length = length;
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0){
            new_length -= (arr[i] + 2);
            for (int j = new_length; j > i - (arr[i] + 1); j--) {
                arr[j] = arr[j + arr[i] + 2];
            }
            for (int j = i; j < i - (arr[i] + 2); j++) {
                arr[j] = arr[i-1];
            }
        }
    }
    return new_length;
}