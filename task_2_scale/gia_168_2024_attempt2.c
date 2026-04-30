int find_period_in_array(const int arr[], const int length)
{
    int max_period = 0;

    for (int period = 1; period < length; period++)
    {
        char is_periodic = 1;
        for (int i = 0; i < length - period; i++)
        {
            if (arr[i] != arr[i + period])
                is_periodic = 0;
        }

        if (is_periodic && period > max_period && length % period == 0)
            max_period = period;
    }
        
    
    return max_period;
}