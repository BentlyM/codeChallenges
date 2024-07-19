class Program {
    constructor(array , testCase){
        this.array = array;
        this.testCase = testCase;
    }

    assertEqual() {
        for (let i = 0; i < this.array.length; i++) {
            if (i >= this.testCase.length || this.array[i] !== this.testCase[i]) {
                return `failed -> got ${this.array} expected -> ${this.testCase}`;
            }
        }
        return `passed -> ${this.testCase}`;
    }
}

var swap = function(array, firstIndex, secondIndex) {
    var temp = array[firstIndex];
	array[firstIndex] = array[secondIndex];
	array[secondIndex] = temp;
};

var testArray = [7, 9, 4];
var testArray1 = [4, 5, 2];
var testArray2 = [6, 7, 4];

swap(testArray, 0, 1);
swap(testArray1, 0, 1);
swap(testArray2, 0, 1);

console.log(new Program(testArray, [9, 7, 4]).assertEqual());
console.log(new Program(testArray1, [5, 4, 2]).assertEqual());
console.log(new Program(testArray2, [7, 6, 4]).assertEqual());