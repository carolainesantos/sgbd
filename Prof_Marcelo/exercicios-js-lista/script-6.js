/* As Organizações Tabajara resolveram dar
um aumento de salário aos seus colaboradores
e lhe contrataram para desenvolver o programa 
que calculará os reajustes.
Faça um programa que recebe o salário de um 
colaborador e calcule reajuste segundo o 
seguinte critério, baseado no salário atual:
● Salários até R$280,00(incluindo): aumento de 20%
● Salários entre R$280,00 e R$700,00: aumento de 15% 
● Salários entre R$700,00 e R$1500,00: aumento de 10% 
● Salários de R$1500,00 em diante: aumento de 5%   */

function calcularReajuste() {
  const salarioAtual = parseFloat(prompt("Informe o salário atual: R$"));
  let novoSalario = 0;

  if (salarioAtual <= 280) {
    novoSalario = salarioAtual * 1.2;
  } else if (salarioAtual > 280 && salarioAtual <= 700) {
    novoSalario = salarioAtual * 1.15;
  } else if (salarioAtual > 700 && salarioAtual <= 1500) {
    novoSalario = salarioAtual * 1.1;
  } else {
    novoSalario = salarioAtual * 1.05;
  }

  alert(`O novo salário após o reajuste é:  R$ ${novoSalario.toFixed(2)}`);
}
calcularReajuste();
