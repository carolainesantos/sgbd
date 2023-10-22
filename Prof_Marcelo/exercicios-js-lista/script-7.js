/* Faça um script que receba uma data
no formato “dd/mm/aaaa” e escreva a 
data por extenso. Dica:use a função 
“split” de uma string que quebra a 
string empedaços dado um separador 
como argumento da função. Nesse caso,
o separador é a barra (/)da data.
Exemplo: Para a entrada “22/04/1983” 
deve ser escrito “22 de abril de 1983”. */

function obterDataEExibirPorExtenso() {
  var dataInput = prompt("Informe a data no formato 'dd/mm/aaaa':");
  var dataPartes = dataInput.split("/");

  if (dataPartes.length === 3) {
    var dia = dataPartes[0];
    var mes = dataPartes[1];
    var ano = dataPartes[2];

    var meses = [
      "janeiro",
      "fevereiro",
      "março",
      "abril",
      "maio",
      "junho",
      "julho",
      "agosto",
      "setembro",
      "outubro",
      "novembro",
      "dezembro",
    ];

    if (mes >= 1 && mes <= 12) {
      var mesExtenso = meses[mes - 1];
      var dataPorExtenso = dia + " de " + mesExtenso + " de " + ano;
      alert(dataPorExtenso);
    } else {
      alert("Mês inválido.");
    }
  } else {
    alert("Formato de data inválido. Use 'dd/mm/aaaa'.");
  }
}

obterDataEExibirPorExtenso();
