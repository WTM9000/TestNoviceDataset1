int find_missing_element_of_arithmetic_progression(const int progression[], const int length) {
    int missing_element = progression[0];
    int raz = (progression[length-1] - progression[0]) / length;
    if (raz == 0){
        raz += 1;
    }
    if (raz < 0) {
        for (int i = 0; i < length - 1; i++) {
            if ((progression[i] - progression[i + 1]) != raz) {
                missing_element = progression[i-1] + raz;
                return missing_element;
            }
        }
    }
    else if (raz > 0) {
        for (int i = 0; i < length - 1; i++) {
            if ((progression[i] - progression[i + 1]) != raz) {
                missing_element = progression[i-1] + raz;
                return missing_element;
            }
        }
    }
    else if(progression[0] == progression[1]){
        missing_element = progression[0];
        return missing_element;
    }
}