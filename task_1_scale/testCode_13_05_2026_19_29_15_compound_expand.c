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
            return progression[i] + d;
        }    
    }
	
	if (!((missing_element>2) && (d<3))){
		i++;
	} else if (d >10){
		d++;
	} else if (d<2){
		d--;
	} else {
		d+=10;
	}
	
	int f = (d != length);
	
	f = (d > length) && (missing_element < 3);

	while (f=(d<length)){
		i++;
		return f = missing_element > 3;
	}
	
	int a = 10, b = 20, c;

	c = (a < b) ? a : b;
	
	for (int i = 100; i > (length - 1); i--){
		b = i + 1;
	}
	
	if (a>b) {
    	    if (c>b) {
        	        if (c>a) {
        	            a++;
        	        }
    	    }
	}
	
	if ((a>b) || (c>b) || (c>a)){
		a++;
	}
    return progression[length - 1] + d;
}
