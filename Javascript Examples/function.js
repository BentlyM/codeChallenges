var primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97];


const search = () => {
    let min = 0; // the index?
    let max = primes.length - 1;

    while(min < max){
        let guess = Math.floor((min + max) / 2);


        if(primes[guess] === 67){
            return true;
        }else if(primes[guess] > 67){
            max = guess - 1;
        }else if(primes[guess] < 67){
            min = guess + 1 
        };
    }

    return false

}

console.log(search())