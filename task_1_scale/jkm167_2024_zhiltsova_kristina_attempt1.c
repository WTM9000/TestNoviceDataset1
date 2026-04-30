int unzip_arr(int arr[], const int length) {
    int new_length = 0;

    // Вычисляем новую длину
    for (int i = 0; i < length; i++) {
        if (arr[i] >= 0) {
            new_length++;
        }
        else {
            // Проверяем, что перед отрицательным числом есть положительное
            if (i > 0 && arr[i - 1] >= 0) {
                new_length += -arr[i] - 1; // -1 потому что исходное число уже учтено
            }
        }
    }

    // Распаковываем с конца
    int read_pos = length - 1;
    int write_pos = new_length - 1;

    while (read_pos >= 0) {
        if (arr[read_pos] >= 0) {
            arr[write_pos--] = arr[read_pos--];
        }
        else {
            int count = -arr[read_pos--];
            // Число для повторения находится перед отрицательным
            int value = arr[read_pos]; // Не уменьшаем read_pos здесь!
            for (int j = 0; j < count - 1; j++) { // count-1 потому что исходное уже есть
                arr[write_pos--] = value;
            }
        }
    }

    return new_length;
}