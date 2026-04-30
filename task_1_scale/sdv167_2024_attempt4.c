int unzip_arr(int arr[], int length) 
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] >= 0) {
            count++;
        }
        else {
            if ( arr[i - 1] >= 0) 
            {
                count += -arr[i] - 1;
            }
        }
    }

    int end = length - 1;
    int left_poz = count - 1;

    while (end >= 0) 
    {
        if (arr[end] < 0) 
        {

            int cop = -arr[end];
            end--;

            int base = arr[end];
            for (int j = 0; j < cop - 1; j++)
            {

                arr[left_poz] = base;
                left_poz--;
            }
            
        }
        else 
        {
            arr[left_poz] = arr[end];
            left_poz--;
            end--;
        }
    }

    return count;
}