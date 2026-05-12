int find_missing_element_of_arithmetic_progression(const int progression[], const int length)
{
    int i;
    int missing_element;
    int i;
	int f;
	int a = 10, b = 20, c;
	int a;
	int a = 10, b;
	int i;
    int d;
    missing_element = 0;
    d = (progression[length-1] - progression[0]) / (length-1);   
    i = 0;
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
	f = d != length;
	
	f = (d > length) && (missing_element < 3);

	while (f=(d<length)){
		i++;
		return f = missing_element > 3;
	}
	
b = 20;
	c = (a < b) ? a : b;
	
	i = 100;
		b = i + 1;
	}
    return progression[length - 1] + d;
}
