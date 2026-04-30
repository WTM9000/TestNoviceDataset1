int unzip_arr(int arr[], const int length)
{
    int new_length = length;
    for(unsigned i = 0; i < length; i++)
    {
        if (arr[i] < 0)
        {
            new_length += (-1) * arr[i] - 2;
            int temp_length = length - 1;
            if (&arr[temp_length] == &arr[i] || length < (-1) * arr[i])
            {
                arr[temp_length + (-1) * arr[i] - 2] = arr[temp_length];
                temp_length += (-1) * arr[i] - 2;
                arr[temp_length] = arr[i - 1];
                temp_length--;
            }
            while (&arr[temp_length] != &arr[i])
            {
                arr[temp_length + (-1) * arr[i] - 2] = arr[temp_length];
                arr[temp_length] = arr[i - 1];
                temp_length--;
            }
            arr[i] = arr[i - 1];
        }
    }
    return new_length;
}