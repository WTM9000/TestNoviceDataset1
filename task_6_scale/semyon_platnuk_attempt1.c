int unzip_arr(int arr[], const int length) {
    int new_length = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] >= 0) {
            new_length++;
        }
        else {
            if (i > 0 && arr[i - 1] >= 0) {
                new_length += -arr[i] - 1; 
            }
        }
    }
    int read_pos = length - 1;
    int write_pos = new_length - 1;
    while (read_pos >= 0) {
        if (arr[read_pos] >= 0) {
            arr[write_pos--] = arr[read_pos--];
        }
        else {
            int count = -arr[read_pos--];
            int value = arr[read_pos];
            for (int j = 0; j < count - 1; j++) { 
                arr[write_pos--] = value;
            }
        }
    }
    return new_length;
}