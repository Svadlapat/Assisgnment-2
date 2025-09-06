let a = 5; // a is a Number
console.log(`Initial value of a: ${a}, type: ${typeof a}`);

a = "hello"; // Type can be changed at runtime (dynamic)
console.log(`New value of a: ${a}, type: ${typeof a}`);

// JavaScript automatically converts the number 10 to a string (weak typing)
let result = 10 + "5";
console.log(`Result of 10 + "5": ${result}, type: ${typeof result}`);
