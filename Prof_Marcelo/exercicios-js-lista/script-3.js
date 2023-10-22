/* Faça um programa que receba 10 números,
calcule e imprima a soma dos números pares 
e a soma dos números primos. */

function verificaPrimo(num) {
  if (num <= 1) {
    return false;
  }
  if (num <= 3) {
    return true;
  }
  if (num % 2 === 0 || num % 3 === 0) {
    return false;
  }
  for (let i = 5; i * i <= num; i += 6) {
    if (num % i === 0 || num % (i + 2) === 0) {
      return false;
    }
  }
  return true;
}

let nums = [7, 12, 8, 21, 2, 4, 30, 17, 115, 64];

let sumPares = 0;
let sumPrimo = 0;

for (let num of nums) {
  if (num % 2 === 0) {
    sumPares += num;
  }
  if (verificaPrimo(Math.abs(Math.round(num))) && num > 0) {
    sumPrimo += num;
  }
}

console.log(`Soma dos números pares: ${sumPares}`);
console.log(`Soma dos números primos: ${sumPrimo}`);
