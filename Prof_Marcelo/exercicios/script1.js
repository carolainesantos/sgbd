let altura = [];
let sexo = [];

altura.push("1.53");
altura.push("1.77");
altura.push("1.82");
altura.push("1.91");
altura.push("1.41");
altura.push("1.61");
altura.push("1.65");
altura.push("1.55");
altura.push("1.85");
altura.push("1.75");
altura.push("1.68");
altura.push("1.55");
altura.push("1.72");
altura.push("1.62");
altura.push("1.56");

let maior = altura[0];
let menor = altura[0];
let nrF = 0;
let nrM = 0;
let alturaF = 0;

for (let i = 0; i < altura.length; i++) {
  // questao 1
  if (maior < altura[i]) maior = altura[i];
  if (menor > altura[i]) menor = altura[i];
  // questao 2
  if (sexo[i] == "F") {
    nrF++;
    alturaF += altura[i];
  }

  // questao 3
  if (sexos[i] == "M") nrM++;
}

console.log("Maior altura: " + maior);
console.log("Menor altura: " + menor);
console.log("Media Mulheres: " + altura / nrF);

sexo.push("F");
sexo.push("F");
sexo.push("F");
sexo.push("M");
sexo.push("M");
sexo.push("M");
sexo.push("M");
sexo.push("M");
sexo.push("M");
sexo.push("M");
sexo.push("M");
sexo.push("F");
sexo.push("F");
sexo.push("F");
sexo.push("F");
