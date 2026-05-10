int unzip_arr(int arr[], const int length)
{  
    int i = 0;
    int unzip_length = length;
    while (i < length)
    {
        if (arr[i] < 0)
        {
            unzip_length += (-arr[i] - 2);
        }
        i++;
    }

    int to = unzip_length-1;
    for (int from = length-1; from >= 1; from--)
    {
        if (arr[from] >= 0)
        {
            arr[to] = arr[from];
            to--;
        }
        else
        {
            int repeat_count = -arr[from];
			int repeated_value = arr[from-1];
            for (int k = 1; k <= repeat_count-1; k++)
            {
                arr[to] = repeated_value;
                to--;
            }
        }        
    }
        
    return unzip_length;
}
