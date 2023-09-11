function generateFibonacci(n) {
    let fibonacciSequence = [];
    if (n <= 0) {
        return fibonacciSequence;
    } else if (n == 1) {
        fibonacciSequence.push(0);
    } else {
        fibonacciSequence.push(0, 1);
        while (fibonacciSequence.length < n) {
            const nextNumber = fibonacciSequence[fibonacciSequence.length - 1] +
                fibonacciSequence[fibonacciSequence.length - 2];
            fibonacciSequence.push(nextNumber);
        }
    }
    return fibonacciSequence;
}

const n = parseInt(prompt("Enter the number of Fibonacci numbers to generate:"));
const fibonacciSequence = generateFibonacci(n);
console.log(`Fibonacci sequence of length ${n}:`);
console.log(fibonacciSequence);
