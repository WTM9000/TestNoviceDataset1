int cut_rectangle_into_squares(const int side_A, const int side_B) {
  int a = side_A;
  int b = side_B;
  int last_side = 0;
  while (a > 0 && b > 0) {
    if (a > b) {
      a = a % b;
    }
    else {
      b = b % a;
    }
  }
  last_side = a + b;
  return last_side;
}