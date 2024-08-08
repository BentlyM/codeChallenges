const fib = (n) => {
    if(n === 0) return 0;
    if(n === 1) return 1;

    return fib(n-1) + fib(n-2);
}

console.log(`Fib -> ${fib(10)}`);

const factorial = (n) => {
    if (n == 1) return 1;

    return  n * factorial(n - 1);
}

console.log(`factor -> ${factorial(5)}`);

// const all = (arr , callback) => {
//     return arr.every(callback);
// }

// const all = (arr , callback) => {
//     for(let i = 0; i < arr.length; i++){
//         if(!callback(arr[i])) return false;
//     }
//     // this is not recursive buddy 
//     return true;
// }


const all = (array, callback) => {
	var copy = copy || array.slice(); // shallow copies array

	if(copy.length === 0) return true;

	if(callback(copy[0])){
		copy.shift(); // remove first element from array
		return all(copy, callback);
	} else {
		return false;
	}
}

var allAreLessThanSeven = all([7,7,6], function(num){
	return num < 7;
});

console.log(`all num's less then int -> ${allAreLessThanSeven}`); // false

const productOfArray = (arr) => {
    if(arr.length === 0) return 1;

    return arr.shift() * productOfArray(arr);
}

console.log(`productOfArray -> ${productOfArray([1,2,3,4,5])}`);

var nestedObject = {
    data: {
        info: {
            stuff: {
                thing: {
                    moreStuff: {
                        magicNumber: 44,
                        something: 'foo2'
                    }
                }
            }
        }
    }
}

function contains(object, searchValue) {
    // because `null` has a typeof "object", we have to explicitly check
    // to prevent trying to access `null`'s values (which don't exist)
    if (typeof object !== "object" || object === null) {
      return object === searchValue;
    }
  
    for (const value of Object.values(object)) {
      // An important problem in the code quiz solution is that `return contains()` will only
      // search the first property of an object, as it will return whatever the result for it is.
      // If our value was nested within the second property, for example, it would never get checked
      // even if the first nested object did not contain it.
      if (contains(value, searchValue)) {
        return true;
      }
    }
    return false;
}


console.log(`nestObj -> ${contains(nestedObject, 44)}`); // true

function totalIntegers(array){
	if(array.length === 0) return 0;

	let total = 0;
	let first = array.shift();
    console.log(first);

	if (Array.isArray(first)){
		total += totalIntegers(first); 
	} else if (Number.isInteger(first)) {
		total += 1;
	}

	return total + totalIntegers(array);
}

// console.log(totalIntegers([[[5], 3], 0, 2, ['foo'], [], [4, [5, 6]]]));


const mergeSorted = (arr) => {
    if (arr.length <= 1) {
      return arr;
    }
  
    const split = Math.ceil(arr.length / 2);
    const leftSide = arr.slice(0, split);
    const rightSide = arr.slice(split);
  
    return merge(mergeSorted(leftSide), mergeSorted(rightSide));
  };
  
  const merge = (left, right) => {
    const result = [];
    let i = 0;
    let j = 0;
  
    while (i < left.length && j < right.length) {
      if (left[i] < right[j]) {
        result.push(left[i]);
        i++;
      } else {
        result.push(right[j]);
        j++;
      }
    }
  
    return result.concat(left.slice(i)).concat(right.slice(j));
  };
  
console.log(mergeSorted([3, 4, 1, 6, 2, 5]));
