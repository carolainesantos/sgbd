/* Cada espectador de um cinema respondeu 
a um questionário no qual constava sua idade
e a sua opinião em relação ao filme: ótimo-3, bom-2, regular-1. 
Faça um programa que receba a idade e a opinião de 
15 espectadores, calcule e imprima:
● a média das idades das pessoas que responderam ótimo;
● a quantidade de pessoas que responderam regular; 
● a porcentagem de pessoas que responderam 
bom entre todos os espectadores analisados. */

let idades = [25, 30, 45, 20, 35, 40, 28, 22, 50, 18, 27, 33, 38, 21, 19];
let opinioes = [
  "ótimo",
  "bom",
  "regular",
  "ótimo",
  "bom",
  "ótimo",
  "bom",
  "ótimo",
  "regular",
  "bom",
  "ótimo",
  "ótimo",
  "bom",
  "regular",
  "ótimo",
];

let somaIdadesOtimo = 0;
let totalOtimo = 0;
let totalRegular = 0;
let totalBom = 0;

for (let i = 0; i < idades.length; i++) {
  if (opinioes[i] === "ótimo") {
    somaIdadesOtimo += idades[i];
    totalOtimo++;
  } else if (opinioes[i] === "regular") {
    totalRegular++;
  } else if (opinioes[i] === "bom") {
    totalBom++;
  }
}

// Média idades com ótimos
let mediaIdadesOtimo = somaIdadesOtimo / totalOtimo;

// Porcentagem de pessoas que responderam "bom"
let porcentagemBom = (totalBom / idades.length) * 100;

console.log(
  `Média das idades das pessoas que responderam "ótimo": ${mediaIdadesOtimo}`
);
console.log(`Quantidade de pessoas que responderam "regular": ${totalRegular}`);
console.log(`Porcentagem de pessoas que responderam "bom": ${porcentagemBom}%`);
