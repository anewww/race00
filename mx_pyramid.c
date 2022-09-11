void print_char(char ch);
void print_top(int n);
void print_body(int n);

void mx_pyramid(int n) {
    if (n < 1)
        return;
    print_top(n);
    print_body(n);
}

void print_top(int n) {
    for (int i = 0; i < n - 1; i++) {
        print_char(32);
    }
    print_char(47);
    print_char(92);
    print_char(10);
}

void print_body(int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 2; j++) {
            print_char(32);
        }
        print_char(47);
        for (int j = 0; j < 2 * i + 1; j++) {
            if (i == n - 2)
                print_char(95);
            else
                print_char(32);
        }
        print_char(92);
        if (i < n / 2 - 1) {
            for (int j = 0; j < i + 1; j++) {
                print_char(32);
            }
            print_char(92);
        }
        else {
            for (int j = 0; j < n - i - 2; j++) {
                print_char(32);
            }
            print_char(124);
        }
        print_char(10);
    }
}
