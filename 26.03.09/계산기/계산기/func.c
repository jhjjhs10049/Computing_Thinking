int func(int x, char op, int y) {
	int result = 0;

	if (op == '+') {
		result = x+y;
	}
	else if (op == '-') {
		result = x-y;
	}
	else if (op == '*') {
		result = x*y;
	}
	else if (op == '/') {
		result = x/y;
	}

	return result;
}