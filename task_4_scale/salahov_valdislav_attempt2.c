int main() {
    int side_A;
    int side_B;
    int min_side;
    if ((&side_A && &side_B) >= 1 || (&side_A && &side_B) <= 15) {
        scanf("%d", &side_A);
        scanf("%d", &side_B);
        printf("Введите первую сторону прямоугольника в диапозоне от 1 до 15:", &side_A);
        printf("Введите вторую сторону прямоугольника в диапозоне от 1 до 15:", &side_B);
        return 0;
    }
    else if ((&side_A && &side_B) >= 1 || (&side_A && &side_B) <= 15) {
        return 1;
    }

    if (min_side >= 1 || min_side <= 7) {
        scanf("%d", min_side);
        printf("Введите число вырезаемого квадрата в диапозоне от 1 до 7:", min_side);
        return 0;
    }
    else if (min_side >= 1 || min_side <= 7) {
        return 1;
    }
    for (int i = 0; i < side_A; i++) {
        for (int i = 0; i < side_B; i++) {
            int j = side_A * side_B;
            j / 2;
            j++;
        }
    }
    return 0;
}