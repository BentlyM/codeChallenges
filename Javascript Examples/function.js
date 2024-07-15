const data = () => {
    return new Promise((resolve , reject)=>{
        fetch('https://jsonplaceholder.typicode.com/todos/1').then(myObj => myObj.json())
        .then(data => resolve(data));
    })
}

const promise = data();

promise.then((foo) => {
    console.log(foo);
})