// JavaScript with a syntax error
function calculateSum(arr) {
    let total = 0;
    for (let num of arr) // <--- Syntax error: Missing opening brace
        total += num;
    }
    return total;
}

let numbers = [1, 2, 3, 4, 5];
let result = calculateSum(numbers);
console.log("Sum in JavaScript:", result);
