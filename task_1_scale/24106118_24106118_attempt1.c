int unzip_arr(int arr[], const int length) 
{
    int new_length = 0;

    for (int i = 0; i < length; i++) 
    {
        if (arr[i] >= 0) {
            new_length++;
        }

        else {

            if (i > 0 && arr[i - 1] >= 0) 
            {
                new_length += -arr[i] - 1; 
            }
        }
    }

    int read = length - 1;
    int write = new_length - 1;

    while (read >= 0) 
    {
        if (arr[read] >= 0) 
        {
            arr[write--] = arr[read--];
        }

        else 
        {
            int count = -arr[read--];
            
            int value = arr[read]; 
            for (int j = 0; j < count - 1; j++) 
            { 
                arr[write--] = value;
            }
        }
    }
    return new_length;
}