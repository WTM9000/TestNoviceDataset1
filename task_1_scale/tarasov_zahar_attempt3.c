int unzip_arr(int arr[], const int length)
{
    int new_length = length;

    int buff = arr[0];
    int curID = 0;
    while(curID<new_length)
    {
        if (arr[curID] < 0)
        {
            int rep = arr[curID] * (-1);
            int shift = rep - 2;
            int step = 0;
            while(shift>=0)
            {
                arr[new_length - 1 + shift] = arr[new_length-1 - step];
                step++;
                shift--;
            }
            new_length += step-1;
            for (int i = 1; i < rep;i++)
            {
                arr[curID] = buff;
                curID++;
            }
            
        }
        buff = arr[curID];
        curID++;
    }
    return new_length;
}