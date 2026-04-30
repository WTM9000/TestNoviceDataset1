int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side)
{
	int max = 0;
	int current_side_A = side_A;
	int current_side_B = side_B;
	int max_is_A = 0;
	int max_is_B = 0;
	int last_side;
	if (side_A > side_B)
	{
		last_side = side_A;
	}
	else
	{
		last_side = side_B;
	}
	while (last_side >= min_side)
	{
		if (current_side_A > current_side_B)
		{
			max = current_side_A;
			max_is_A = 1;
		}
		else
		{
			max = current_side_B;
			max_is_B = 1;
		}
		if (max % 2 == 0)
		{
			last_side = max / 2;
		}
		else
		{
			last_side = (max - 1) / 2;
		}
		if (max_is_A)
		{
			current_side_A -= last_side * 2;
		}
		if (max_is_B)
		{
			current_side_B -= last_side * 2;
		}
		max_is_A = 0;
		max_is_B = 0;
	}
	return last_side;
}