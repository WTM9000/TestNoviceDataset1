int find_missing_element_of_arithmetic_progression(const int progression[], const int length) {
    int step;
    if (length == 3) {
        int option1 = progression[1] - progression[0];
        int option2 = (progression[2] - progression[0]) / 2;

        if (progression[0] + option1 * 2 == progression[2]) {
            step = option1;
        }
        else {
            step = option2;
        }
        if (progression[0] - step + step * 2 == progression[1]) {
            return progression[0] - step;
        }
    }
    else {
        step = progression[1] - progression[0];
        for (int i = 2; i < length; i++) {
            if (progression[i] - progression[i - 1] != step) {
                if (i == 2) {
                    step = (progression[i] - progression[0]) / 2;
                }
                break;
            }
        }
    }
    if (length > 2 && progression[1] - progression[0] != step) {
        return progression[0] - step;
    }
    for (int i = 1; i < length; i++) {
        if (progression[i] - progression[i - 1] != step) {
            return progression[i - 1] + step;
        }
    }
    return progression[length - 1] + step;
}