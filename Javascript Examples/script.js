function main() {
    let x = 10;
    var  y = "Hello";
    
    console.log("x is: ", x); // Outputs: x is:  10
    console.log("y is: ", y); // Outputs: y is:   Hello

    if (true) {
        var z = 5;
        console.log("Inside the true block, z is: ", z); // Outputs: Inside the true block, z is:  5
    }

    console.log("Outside the true block, z is: ", z); // error because left only exist within the scope

    console.log("After the if statement, x is: ", x); // Outputs: After the if statement, x is:  10
    // The variable 'y' is still accessible outside of its block
    console.log("After the if statement, y is: ", y); // Outputs: After the if statement, y is:     Hello
}
main();
