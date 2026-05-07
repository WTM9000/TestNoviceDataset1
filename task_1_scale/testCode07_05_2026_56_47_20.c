int find_missing_element_of_arithmetic_progression(const int progression[], const int length)
{
    int d;
    int i;
    int missing_element = 0;
    d = (progression[length-1] - progression[0]) / (length-1);   
    for (int mutated_a = 0; mutated_a < (length - 1); mutated_a++)
    {
        if (progression[mutated_a + 1] - progression[mutated_a] != d)
        {
            return progression[mutated_a] + d;
        }    
    }
	
	for (int i = 100; i > (length - 1); i--){
		int b = i + 1;
	}
    return progression[length - 1] + d;
}
