let num1String: string | null = prompt("Inserisci il primo numero:");
let num2String: string | null = prompt("Inserisci il secondo numero:");

if (num1String && num2String) {
  let num1: number = parseFloat(num1String);
  let num2: number = parseFloat(num2String);

  let somma: number = num1 + num2;

  console.log("Somma:", somma);
} else {
  console.log("Input non valido!");
}