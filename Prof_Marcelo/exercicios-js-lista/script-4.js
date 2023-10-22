/* Elabore um script que leia dois números 
e imprima em uma tabela(gerada dinamicamente) o 
resultado das operações aritméticas 
soma, produto, divisão e resto da divisão (%) 
entre esses números */

function calcularOperacoes() {
  const num1 = parseFloat(document.getElementById("num1").value);
  const num2 = parseFloat(document.getElementById("num2").value);

  if (!isNaN(num1) && !isNaN(num2)) {
    const resultadoTabela = document.getElementById("resultado");
    resultadoTabela.innerHTML = ""; // Limpa a tabela

    // Soma
    const soma = num1 + num2;
    adicionarResultado("Soma", soma);

    // Produto
    const produto = num1 * num2;
    adicionarResultado("Produto", produto);

    // Divisão
    const divisao = num1 / num2;
    adicionarResultado("Divisão", divisao);

    // Resto da Divisão (%)
    const resto = num1 % num2;
    adicionarResultado("Resto da Divisão (%)", resto);
  } else {
    alert("Por favor, insira números válidos.");
  }
}

function adicionarResultado(operacao, resultado) {
  const resultadoTabela = document.getElementById("resultado");
  const row = resultadoTabela.insertRow();
  const cell1 = row.insertCell(0);
  const cell2 = row.insertCell(1);
  cell1.innerHTML = operacao;
  cell2.innerHTML = resultado;
}
