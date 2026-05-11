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
            var mutation_temp = progression[i];
            mutation_temp += d;
            return mutation_temp;
        }    
    }
	
	if (!((missing_element>2) && (d<3))){
		i++;
	}
	
	int a = 10, b = 20, c;

	c = (a < b) ? a : b;
	
	for (int i = 100; i > (length - 1); i--){
		b = i + 1;
	}
    return progression[length - 1] + d;
}
