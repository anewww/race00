void print_char(char ch);
void print_horiz_line(int n);
void print_diag_line(int n);
void print_vertical_back_line(int sp);
void print_vertical_line(int n);
void print_diag_bottom_line(int n, int step);

void mx_cube(int n) {
	if (n < 1)
		return;
	for (int i = 0; i < (n / 2) + 1; i++) {
		print_char(32);
	}
	print_horiz_line(n);
	print_char(10);
	print_diag_line(n);
	print_horiz_line(n);
	print_vertical_back_line(n / 2);
	print_char(10);
	print_vertical_line(n);
	print_horiz_line(n);
	print_char(10);
}

void print_horiz_line(int n) {
	// +
	print_char(43);
	// -
	for (int i = 0; i < n * 2; i++)	{
		print_char(45);
	}
	// +
	print_char(43);
}

void print_diag_line(int n) {
	// Slashes and spaces between
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < (n / 2) - i; j++) {
			print_char(32);
		}
		print_char(47);
		// Spaces
		for (int j = 0; j < n * 2; j++)	{
			print_char(32);
		}
		print_char(47);
		print_vertical_back_line(i);
		print_char(10);
	}
}

void print_vertical_back_line(int sp) {
	for (int i = 0; i < sp; i++) {
		print_char(32);
	}
	print_char(124);
}

void print_vertical_line(int n) {
	int middle = 0;
	if (n % 2 == 0)
		middle = n / 2 - 1;
	else
		middle = n / 2;		
	for (int i = 0; i < n; i++) {
		print_char(124);
		for (int j = 0; j < n * 2; j++)
		{
			print_char(32);
		}
		print_char(124);
		if (i < middle) {
			print_vertical_back_line(n / 2);
		}
		else if (i == middle) {
				 for (int i = 0; i < n / 2; i++) {
				 	 print_char(32);
				 }
				 print_char(43);
		}
		else {
				 print_diag_bottom_line(n, i);
		}
		print_char(10);
	}
}

void print_diag_bottom_line(int n, int step) {
	for (int i = 0; i < n - step - 1; i++) {
		print_char(32);
	}
	print_char(47);
}
