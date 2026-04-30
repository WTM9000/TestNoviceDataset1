int cut_rectangle_into_squares(const int side_A, const int side_B)
{
  
    int side1 = side_A; 
    int side2 = side_B; 
    int last_side;

    
    while (side2 != 0) 
    {
        last_side = side2;      
        int remaind = side1 % side2; 
        side1 = side2;           
        side2 = remaind;       
    }

    return last_side; 
}