/* Faça um programa que receba a idade,
o peso e o sexo de 10 pessoas.
Calcule e imprima:
● total de homens;
● total de mulheres;
● média das idades dos homens;
● média dos pesos das mulheres. */

function coletarDados() {
  let totalHomens = 0;
  let totalMulheres = 0;
  let somaIdadesHomens = 0;
  let somaPesosMulheres = 0;

  for (let i = 1; i <= 10; i++) {
    const sexo = prompt(
      `Pessoa ${i}: Informe o sexo (M para masculino ou F para feminino):`
    ).toUpperCase();
    const idade = parseInt(prompt(`Informe a idade da pessoa ${i}:`));
    const peso = parseFloat(prompt(`Informe o peso da pessoa ${i}:`));

    if (sexo === "M") {
      totalHomens++;
      somaIdadesHomens += idade;
    } else if (sexo === "F") {
      totalMulheres++;
      somaPesosMulheres += peso;
    } else {
      alert(`Sexo inválido para a pessoa ${i}. Digite 'M' ou 'F'.`);
      i--;
    }
  }

  const mediaIdadesHomens =
    totalHomens > 0 ? somaIdadesHomens / totalHomens : 0;
  const mediaPesosMulheres =
    totalMulheres > 0 ? somaPesosMulheres / totalMulheres : 0;

  alert(`Total de Homens: ${totalHomens}
Total de Mulheres: ${totalMulheres}
Média das Idades dos Homens: ${mediaIdadesHomens.toFixed(2)}
Média dos Pesos das Mulheres: ${mediaPesosMulheres.toFixed(2)}`);
}
