class Vehicle {
  constructor(make , model, year){
    this.make = make;
    this.model = model;
    this.year = year;
  }

  displayDetails(){
   return `Make: ${this.make}, Model: ${this.model}, Year: ${this.year}`;
  }
}

class Car extends Vehicle {
  constructor(make, model, year, doors){
    super(make,model,year)
    this.doors = doors;
  }
  displayDetails(){
    return `${super.displayDetails()} Doors: ${this.doors}`;
   }
}

// Car.prototype.displayDetails = function(){
//   return `Make: ${this.make}, Model: ${this.model}, Year: ${this.year} Doors: ${this.doors}`;
// }

const Nissan = new Car('Nissan','Ultima','2021','4');

console.log(Nissan.displayDetails());