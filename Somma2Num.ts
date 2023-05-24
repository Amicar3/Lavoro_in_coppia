const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Inserisci il primo numero: ', (num1) => {
  rl.question('Inserisci il secondo numero: ', (num2) => {
    const sum = Number(num1) + Number(num2);
    console.log('La somma è: ' + sum);
    rl.close();
  });
});