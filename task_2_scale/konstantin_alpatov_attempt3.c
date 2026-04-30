int find_period_in_array(const int arr[], const int length)
{

    int max_period = 0;
    for (int p = length / 2; p >= 1; p--)
    {
        if (length % p != 0) continue;

        int k = length / p;
        int valid = 1;

        for (int i = 0; i < p; i++)
        {
            for (int j = 1; j < k; k++)
            {
                int pos = i + j * p;
                    if (arr[i] != arr[pos])
                    {
                        valid = 0;
                        break;
                    }
            }
            if (!valid) break;
        }
        if (valid)
        {
            max_period = p;
            break;
        }
    }

    return max_period;

}