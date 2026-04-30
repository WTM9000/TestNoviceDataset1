int find_missing_element_of_arithmetic_progression(const int progression[], const int length)
{
	int old_shift = progression[1] - progression[0];
	int is_shift_different = 0; 
	int missing_element;
	for (int i = 1; i < length - 1; i++)
	{
		int shift = progression[i + 1] - progression[i];
		if ((i + 1) == length)
		{
			if (progression[i + 1] + old_shift > 10 || progression[i] + old_shift < -10)
			{
				missing_element = progression[0] - old_shift;
				return missing_element;
			}
			missing_element = progression[i + 1] + old_shift;
			return  missing_element;
		}
		else if (old_shift != shift)
		{
			missing_element = progression[i - 1] + shift;
			return missing_element;
		}
		int old_shift = shift;
	}
}