int find_missing_element_of_arithmetic_progression(const int progression[], const int length)
{
    int d;
    int i;
    int missing_element = 0;
    d = (progression[length-1] - progression[0]) / (length-1);   
    for (int i = 0; i < (length - 1); i++)
    {
        if (progression[i + 1] - progression[i] != d)
        {
            return progression[i] + d;
        }    
    }
    return progression[length - 1] + d;
}