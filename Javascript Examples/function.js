const fib = (n) => {
    // if (n == 0) return 0; // or any number less then two return n? 
    // if (n == 1 ) return 1;
    if (n < 2) return n;

    return fib(n - 1 ) + fib(n - 2);
}


console.log(fib(5));