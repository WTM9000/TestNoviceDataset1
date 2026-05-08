int find_missing_element_of_arithmetic_progression(const int progression[], const int length)
{
    int d;
    int i;
    int missing_element = 0;
    d = (progression[length-1] - progression[0]) / (length-1);   
    int i = 0;
while (i < (length - 1))
    {
        if (progression[i + 1] - progression[i] != d)
        {
            return progression[i] + d;
        }
        i++;
    }
	
	for (int i = 100; i > (length - 1); i--){
		int b = i + 1;
	}
    return progression[length - 1] + d;
}
