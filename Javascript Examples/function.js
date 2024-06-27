class Person {

    static get species (){ return `Homo sapiens` } ;


    static speciesSentence(){
        return `Humans are classified as ${this.species}`;
    }

    constructor(firstName , lastName){
        this.firstName = firstName;
        this.lastName = lastName;
        this.hasJob = false;
    }

    fullName(){
        return `${this.firstName} ${this.lastName}`;
    }

    setFirstName(currentFirstName){
        this.firstName = currentFirstName;
    }

    setLastName(lastName){
        this.lastName = lastName;
    }

    set setFullName(name){
        name = name.split(' ');
        this.setFirstName(name[0]);
        this.setLastName(name[1]);
    }
}


const person1 = new Person('Timmy' , 'Turner');

console.log(`initial: ${person1.fullName()}`);

person1.setFullName = 'Jammy Doe';

console.log(`Current: ${person1.fullName()}`);