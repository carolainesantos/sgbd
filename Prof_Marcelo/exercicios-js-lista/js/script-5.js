/* Faça um programa que receba a idade,
o peso e o sexo de 10 pessoas.
Calcule e imprima:
● total de homens;
● total de mulheres;
● média das idades dos homens;
● média dos pesos das mulheres. */

let totalHomens = 0;
let totalMulheres = 0;
let somaIdadeHomens = 0;
let somaPesoMulheres = 0;
let contador = 0;

function calcularEstatisticas() {
  const mediaIdadeHomens =
    totalHomens === 0 ? 0 : somaIdadeHomens / totalHomens;
  const mediaPesoMulheres =
    totalMulheres === 0 ? 0 : somaPesoMulheres / totalMulheres;

  document.getElementById("totalHomens").textContent = totalHomens;
  document.getElementById("totalMulheres").textContent = totalMulheres;
  document.getElementById("mediaIdadeHomens").textContent =
    mediaIdadeHomens.toFixed(2);
  document.getElementById("mediaPesoMulheres").textContent =
    mediaPesoMulheres.toFixed(2);
}

function receberDadosPessoa() {
  const idade = prompt(`Informe a idade da pessoa ${contador + 1}:`);
  const peso = prompt(`Informe o peso da pessoa ${contador + 1}:`);
  const sexo = prompt(
    `Informe o sexo da pessoa ${
      contador + 1
    } (M para masculino ou F para feminino):`
  );

  const idadeNumero = parseFloat(idade);
  const pesoNumero = parseFloat(peso);

  if (!isNaN(idadeNumero) && !isNaN(pesoNumero)) {
    if (sexo.toLowerCase() === "m") {
      totalHomens++;
      somaIdadeHomens += idadeNumero;
    } else if (sexo.toLowerCase() === "f") {
      totalMulheres++;
      somaPesoMulheres += pesoNumero;
    } else {
      alert("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.");
    }

    contador++;

    if (contador < 10) {
      receberDadosPessoa();
    } else {
      calcularEstatisticas();
    }
  } else {
    alert("Idade e peso devem ser números válidos.");
    receberDadosPessoa();
  }
}
receberDadosPessoa();
