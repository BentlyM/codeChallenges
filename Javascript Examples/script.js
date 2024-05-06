

const main = () => {
    let power = 100;
    while (power > 0) {
        power -= 10;
        console.log(`${power}%`);
    if (power === 0) {
            console.log('The engine has stopped.');
        }
    }
}

main();