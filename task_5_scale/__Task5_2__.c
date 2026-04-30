int find_missing_element_of_arithmetic_progression(const int progression[], const int length) {
    
	const int MIN_VALUE = -11;
	const int MAX_VALUE = 10;	
	const int INVALID_VALUE = MIN_VALUE - 1;
	
	int missing_element = INVALID_VALUE;
    int step = progression[1] - progression[0];
	for (int pair = 1; pair < length-1 && (missing_element == INVALID_VALUE); pair++) 
	{ 
		int next_step = progression[pair+1] - progression[pair];
		if(next_step > step)	
		{
			missing_element = progression[pair] + step;
		}
		else if(next_step < step)
		{
			step = next_step;
			missing_element = progression[pair-1] + step;
		}
	}
	
	if (missing_element == INVALID_VALUE) 
	{
		missing_element = progression[length-1] + step;

		if (missing_element < MIN_VALUE || missing_element > MAX_VALUE) 
		{
			missing_element = progression[0] - step;
		}
	}	

    return missing_element;
}