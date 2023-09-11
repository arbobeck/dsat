const readline = require('readline');

function generateFibonacci(n) {
    let fibonacciSequence = [];
    if (n <= 0) {
        return fibonacciSequence;
    } else if (n === 1) {
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

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter the number of Fibonacci numbers to generate: ", (input) => {
    const n = parseInt(input);
    const fibonacciSequence = generateFibonacci(n);
    console.log(`Fibonacci sequence of length ${n}:`);
    console.log(fibonacciSequence);
    rl.close();
});
