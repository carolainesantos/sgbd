function somar(numero1, numero2) {
  alert("Soma : " + (numero1 + numero2));
}

function subtrair(numero1, numero2) {
  alert("Subtração: " + (numero1 - numero2));
}

function dividir(numero1, numero2) {
  alert("Divisão: " + numero1 / numero2);
}

function multiplicar(numero1, numero2) {
  alert("Multiplicção: " + numero1 * numero2);
}

function resto(numero1, numero2) {
  alert("Resto: " + (numero1 % numero2));
}

let confirma = confirm("Deseja realizar os cálculos?");

if (confirma) {
  let numero1 = Number(prompt("Digite um número 1: "));
  let numero2 = Number(prompt("Digite um número 2: "));
  somar(numero1, numero2);
  subtrair(numero1, numero2);
  dividir(numero1, numero2);
  multiplicar(numero1, numero2);
  resto(numero1, numero2);
} else {
  alert("Não faremos cálculos");
}

// Estrutura de repetição
for (let i = 0; i < 10; i++) {
  console.log(i);
}
i = 0;
while (i < 10) {
  console.log(i);
  i++;
}
i = 0;
do {
  console.log(i);
  i++;
} while (i < 10);

// Array ou Vetor

let pessoas = [];
pessoas[0] = "Marcelo";
pessoas[1] = "Maria";
pessoas[50] = "Carla";

pessoas.push("Maria");
pessoas.push("Carla");

console.log(pessoas);
pessoas.unshift("Petri");
pessoas.shift();
pessoas.pop();
console.log(pessoas);

// console.log("Ola Mundo");
/*let idade = 44;  é o correto usar let*/
// function mostrarMensagem(nome, idade) {
//   console.log("Olá " + nome + " você tem " + idade + " anos");
//   let numero;
//   for (numero = 30; numero <= 40; numero++) {
//     console.log("O valor do numero é: " + numero);
//   }
//   console.log("Número: " + numero);
// }
// mostrarMensagem("Carol,", 25);

// function soma(n1, n2) {
//   return n1 + n2;
// }
// let retorno = soma(2, 3);
// console.log(retorno);

// retorno = soma(10, 50);
// console.log(retorno);

// let idade = 25;
// /* pra comparar tipo e conteudo*/
// if (idade === 25) {
//   console.log("Vc tem 25 anos");
// } else {
//   console.log("Vc não tem 25");
// }
// console.log("10" + "a");
