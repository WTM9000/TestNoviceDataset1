int find_missing_element_of_arithmetic_progression(const int progression[], const int length) {
    int razn = 1;
    int missing_element = 0;
    int razn1 = progression[1] - progression[0];
    int razn2 = progression[2] - progression[1];
    if (razn1 <= razn2){
        razn = razn1;
    }
    else {
        razn = razn2;
    }
    int flag = 0;
    for (int i = 0; i < length - 1; i++) {
        if (progression[i + 1] - progression[i] != razn) {
            missing_element = progression[i] + razn;
            flag = 1;
        }
    }
    if (flag == 0) {
        if (progression[length - 1] + razn <= 10 && progression[length - 1] + razn >= -10) {
            missing_element = progression[length - 1] + razn;
        }
        else {
            missing_element = progression[0] - razn;
        }
    }
    return missing_element;
}