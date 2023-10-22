/* Exercicio - 1 */
/* Tem-se um conjunto de dados contendo 
a altura e o sexo(M ou F) de 15 pessoas.
Faça um programa que calcule e escreva:
● a maior e a menor altura do grupo; 
● a média de altura das mulheres;
● o número de homens. */

let alturas = [];
let sexos = [];

alturas.push(1.8); //0
alturas.push(1.6); //1
alturas.push(1.5); //2
alturas.push(1.9); //3
alturas.push(2.9); //4
alturas.push(1.4); //5
alturas.push(2.1); //6
alturas.push(2.2); //7
alturas.push(2.05); //8
alturas.push(1.72); //9
alturas.push(1.55); //10
alturas.push(1.67); //11
alturas.push(1.7); //12
alturas.push(1.61); //13
alturas.push(1.89); //14

sexos.push("M"); //0
sexos.push("M"); //1
sexos.push("F"); //2
sexos.push("F"); //3
sexos.push("M"); //4
sexos.push("M"); //5
sexos.push("M"); //6
sexos.push("M"); //7
sexos.push("M"); //8
sexos.push("M"); //9
sexos.push("M"); //10
sexos.push("M"); //11
sexos.push("M"); //12
sexos.push("M"); //13
sexos.push("M"); //14

let maior = alturas[0];
let menor = alturas[0];
let nrM = 0;
let nrF = 0;
let alturaF = 0;

for (let i = 0; i < alturas.length; i++) {
  // 1 questao
  if (maior < alturas[i]) maior = alturas[i];

  if (menor > alturas[i]) menor = alturas[i];

  // 2 questao
  if (sexos[i] == "F") {
    nrF++;
    alturaF += alturas[i];
  }
  // 3 questao
  if (sexos[i] == "M") nrM++;
}

// Mostra resultados
console.log("Maior Altura: " + maior);
console.log("Menor Altura: " + menor);
console.log("Media Altura das Mulheres: " + alturaF / nrF);
console.log("Numero de Homens: " + nrM);
