int find_missing_element_of_arithmetic_progression(const int progression[], const int length)
{
	int step = progression[length - 1] - progression[length - 2];
	int missing_element;
	int index_missing_element;
	int skip_index = -1;
	for (int index_element = 1; (index_element < length - 1); index_element++)
	{
		if (((progression[index_element - 1] + progression[index_element + 1]) / 2) != progression[index_element])
		{
			index_missing_element = index_element;
			skip_index = 1;
		}
		else
		{
			step = progression[index_element] - progression[index_element - 1];
		}
	}
	if (skip_index == 1)
	{
		missing_element = progression[index_missing_element - 1] + step;
		if (missing_element == progression[index_missing_element]) missing_element = progression[index_missing_element] + step;
	}
	if (skip_index == -1)
	{
		missing_element = progression[length - 1] + step;
		if (abs(missing_element) >= 10)
		{
			missing_element = progression[0] - step;
		}	
	}
	return missing_element;
}