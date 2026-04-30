int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side) 
{
	int last_side;
		
	int longer_side = side_A;
	int shorter_side = side_B;
	
	if (longer_side < shorter_side) 
	{
		int temp = longer_side;
		longer_side = shorter_side;
		shorter_side = temp;
	}		

	do
	{
		last_side = (2*shorter_side <= longer_side) ? 	
								shorter_side : longer_side/2;

        int longer_remaining = longer_side - 2 * last_side;
		int shorter_remaining = shorter_side - last_side;
        
		if(longer_remaining > shorter_remaining) 
		{			
			longer_side = (longer_remaining > shorter_side) ? longer_remaining : shorter_side;
			shorter_side = (longer_remaining <= shorter_side) ? longer_remaining : shorter_side;
		}
		else
		{
			longer_side = (shorter_remaining > shorter_side) ? shorter_remaining : shorter_side;
			shorter_side = (shorter_remaining <= shorter_side) ? shorter_remaining : shorter_side;
		}        
	}
	while(shorter_side >= min_side && 2*shorter_side <= longer_side);
	
    return last_side;
}