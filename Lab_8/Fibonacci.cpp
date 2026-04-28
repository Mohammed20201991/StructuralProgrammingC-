int fibonacci(int n) {
    if (n <= 1)  // Base case
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
