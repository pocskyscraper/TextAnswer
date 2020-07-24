
int power(int x, int y) {
    int result = x;
    for (int i = 1; i < y; ++i) {
        result *= x;
    }
    return result;
}