int unzip_arr(int arr[], const int length) {
    int new_length = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] >= 0) {
            new_length++;
        } else {
            if (i > 0) {
                new_length += (-arr[i] - 1);
            }
        }
    }
    
    int write_pos = new_length - 1;
    int i = length - 1;
    while (i >= 0) {
        if (i > 0 && arr[i] < 0) {
            int count = -arr[i];
            int value = arr[i-1];
            for (int j = 0; j < count; j++) {
                arr[write_pos--] = value;
            }
            i -= 2;
        } else {
            arr[write_pos--] = arr[i--];
        }
    }
    
    return new_length;
}