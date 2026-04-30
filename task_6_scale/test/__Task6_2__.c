int cut_rectangle_in_half(const int side_A, const int side_B)
{
	int current_side_A = side_A;
    int current_side_B = side_B;
    
	int rectangle_count = 1;
    int is_cut_sideA, is_cut_sideB;
	do
	{
		is_cut_sideA = (current_side_A % 2 == 0);
		is_cut_sideB = (current_side_B % 2 == 0);
		
		if(is_cut_sideA)
		{
			current_side_A /= 2;
			rectangle_count *= 2;
		} 
		
		if(is_cut_sideB)
		{
			current_side_B /= 2;
			rectangle_count *= 2;
		}
	}
	while(is_cut_sideA || is_cut_sideB);
    
	return rectangle_count;
}