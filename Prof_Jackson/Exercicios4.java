import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.List;
import java.util.Scanner;

public class Exercicios4 {
  public static void main(String[] args) {
        System.out.println("\nExercícios de Java (Lista-4)");
        Scanner sc = new Scanner(System.in);
        int opcao = 0;
// Menu 
do {
  System.out.println("............................" + "\u001B[36m" + "\n");
  System.out.println(" [0] - Encerrar <3");
  System.out.println(" [1] - Exercício 1");
  System.out.println(" [2] - Exercício 2");
  System.out.println(" [3] - Exercício 3");
  System.out.println(" [4] - Exercício 4");
  System.out.println(" [5] - Exercício 5");
  System.out.println(" [6] - Exercício 6");
  System.out.println(" [7] - Exercício 7");
  System.out.println(" [8] - Exercício 8");
  System.out.println(" [9] - Exercício 9");
  System.out.println("[10] - Exercício 10");
  System.out.println("[11] - Desafio !!!");
  System.out.println("\nEscolha uma opção:" + "\u001B[00m" + "\n");
  try {
      opcao = sc.nextInt();
  } catch (InputMismatchException e) {
      opcao = -1;
      sc.next();
  }
  // Programas/Atividades 
  switch (opcao) {
        case 0:
            System.out.println("Obrigado!<3");
            break;
        case 1:
            /* Crie um programa que questione a quantidade de notas a ser 
            informada, receba as notas e calcule a média.  */
            System.out.println("\n\tMédia Final!\n");

            // Acumula as notas 
            int acumNota=0;

            // Pedindo qtde de notas 
            System.out.println("Quantas notas vc quer informar?");
            // Guarda qtde 
            int qtdeN = sc.nextInt();
            // Criando vetor qtdeNotas 
            float nota[] = new float[qtdeN];

            // Para ler as posiçoes do vetor 
            for(int i=0;i<qtdeN;i++) {
                // Pedindo valor da nota 1, 2,.....
                System.out.println("\nDigite a "+(i+1)+"ª nota: ");
                // Criando vetor nota 
                nota[i] = sc.nextFloat();
                
                // Se nota for menor q 0 E nota maior q 10 
                if(nota[i] < 0 || nota[i] > 10) {
                    // Exibe mensagem de erro 
                    System.out.println("\n Nota Inválida!");
                    i--;
                } else {
                    // Se nao, guarda a nota no acumulador 
                    acumNota +=nota[i];
                }
            }  
            /* Cria uma variavel media q recebe o acumNota nota1 + nota2 ....
                e divide por total de nota */
            float media = acumNota/qtdeN;
            // Mostra a media 
            System.out.println("\nA sua média é: "+ media);
            break;
        case 2:
            /* Crie um programa que imprima um arrays com Foreach. */
            System.out.println("\n\t*** Lista de Convidados ***");

            /* Criando arrayList do tipo string 
                Armazenando valores */ 
            String[] convidados = {"Helena", "Bruno", "Rafa", "Laura", "Amélia", "Lucas"};
        
            // Mostra o titulo 
            System.out.println("\nOs convidados são:\n");

            /* Cria uma variavel do tipo string / percorre o arrayList convidado um a um 
                que recebe os valores do arrayList convidados */
            for(String convidado : convidados) {
                // Mostra os valores do q esta no array convidado 
                System.out.println(convidado);
            }
            break;
        case 3:
            /* Crie um programa que leia 10 valores double e salve 
                em um array, depois imprima esses valores.  */
            System.out.println("\n\t *** 10 valores ***");
            
            // Criando o array do tipo double com 10 posiçoes
            double valores[] = new double[10];

            // Iniciando loop de 1 a 10 
            for(int i=0;i<10;i++){
                // Pedindo valor 
                System.out.println("\n Digite o "+ (i+1) + "º valor: ");
                // Guardando valor no vetor valores[posiçao]
                valores[i] = sc.nextDouble();
                }
               // laço de repetiçao
               // Pra mostrar cada posiçao digitada no vetor 
            for(double imprimir:valores) {
                 // Mostra o resultado dos valores digitados no vetor 
                System.out.println("\nValor digitado foi: " + imprimir);
            }
            break;
        case 4:
            /*  Crie um programa que leia 10 valores double e 
             salve em um array, depois imprima esses valores. */
            System.out.println("\n\t *** Ímpar ou Par ***");

            // Cria um array simples do tipo inteiro com 10 posiçoes 
            int numeros[] =  new int [10];

            // loop de repetição pra percorrer o array 
            for(int i=0;i<10;i++){ 
                // Pede os valores de 1 a 10 
                System.out.println("\n Digite o "+ (i+1) + "º valor: ");
                // Guarda a resposta no vetor numeros[posiçao]
                numeros[i] = sc.nextInt(); 

                /* Se resto da divisao do num digitado for 
                     igual a zero o num é Par */
                if(numeros[i] %2==0 ){
                    System.out.println(" Número é par");
                } else { // Se nao ele mostra que é Impar 
                    System.out.println(" Número é ímpar");
                }
            }
            break;
        case 5:
            /* Exemplo pra aprender listas 
            ->  List<Integer> tel = new ArrayList<>();
                System.out.println(tel);
                tel.add(479998);
                System.out.println(tel);
                tel.remove(1);
                System.out.println(tel); */ 

            /* Crie um programa que possua uma collection que represente 
                as 52 cartas do baralho, imrpima elas. */
            System.out.println("\n\t Cartas do baralho ");

            /* O arraylist cartas serve pra armazenar um array 
            um arrayList possui metodos (.add, get= pra pegar valor, remove) */
            List<String> cartas = new ArrayList<>(); 

            // Criando arrayList naipes do tipo string
            String[] naipes = {"\nEspadas", "Paus", "Copas", "Ouros"};

            // Criando arrayList conteudos do tipo string
            String[] conteudos = {"\nÁs", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei"};

                /* O foreach faz o loop, vai pegar cada uma das posiçoes 
                    do array "naipes" e colocar dentro do "naipe"
                 Neste caso repetira 4 vezes, pq o array naipes tem 4 posiçoes */
                for (String naipe : naipes) {
                    // Faz a mesma coisa q o de cima porem repete 13 posiçoes 
                    for (String conteudo : conteudos) { 
                        // Adiciona o nome da carta dentro do array cartas + nome do naipe 
                        cartas.add(conteudo + " de " + naipe);
                    }
                }
                // O for each faz o loop de carta que sao 52 posiçoes no total 
                for (String carta : cartas) {
                    // Mostra o resultado de carta 
                    System.out.println(carta);
                }
                break;
        case 6:
            System.out.println("\n\t Unindo 2 lista de inteiros");

             // Criando arrayList de Inteiro chamado valores1    
            ArrayList<Integer> valores1 = new ArrayList<Integer>();
            // Adicionando valores no arraylist valores1 
            valores1.add(35);
            valores1.add(80);
            valores1.add(150);
            valores1.add(200);
            
            // Criando arrayList de Inteiro chamado valores2
            ArrayList<Integer> valores2 = new ArrayList<Integer>();
            // Adicionando valores
            valores2.add(10);
            valores2.add(900);
            valores2.add(25);
            valores2.add(50);
            
            // Mostra um titulo 
            System.out.println("\n Listas em um só: ");

            // Criando um arrayList auxiliar pra juntar os valores das 2 listas 
            ArrayList<Integer> juntalista = new ArrayList<>(valores1.size()+valores2.size());
            juntalista.addAll(valores1);
            juntalista.addAll(valores2);
            System.out.println(juntalista);
            break;
        case 7:
                /* Crie um programa que simule a fila de atendimento de um banco. */
                System.out.println("\n\t Fila de Banco...");

                // Criando arrayList do tipo string chamado clientes 
                ArrayList<String> clientes = new ArrayList<>();

                // Variavel contador pra contar as respostas s
                int resp=0;

                // Iniciando o loop de repetição  
                do{
                    // Pede o nome 
                    System.out.println("\n Informe o nome da pessoa:");
                    // Guarda o nome no arrayList cliente 
                    String cliente = sc.next(); 

                    /* le oq o usuario fornceu na variavel 
                    cliente e adiciona no arraylist "clientes"*/
                    clientes.add(cliente);

                    // Pergnta ao usuario se ele deseja adicionar mais algum nome 
                    System.out.println("\n Deseja adicionar outra pessoa ? 1 pra sim 2 pra nao");
                    // Variavel pra armazenar a resp
                    resp = sc.nextInt();
                } while(resp!=2); // Se for igual a 2 vai pro proximo loop

                do{ 
                    // Mostra o cliente da lista 
                    System.out.println("\n clientes:" + clientes);
                    // Cria uma variavel cliente q recebe valores da lista clientes 
                    String cliente = clientes.get(0);
                    // Mostra o nome do próximo cliente da fila 
                    System.out.println("O próximo é: " + cliente);
                    // Remove o cliente anterior 
                    clientes.remove(0);
                    // Pergunta se quer q venha o próximo
                    System.out.println("\n Deseja vir o próximo ? 1 pra sim 2 pra nao");
                    // Armazena a resposta 
                    resp = sc.nextInt();
                } while(resp!=2 && clientes.size()!=0); // Condição de parada 
                // No final mostra o ultimo cliente 
                System.out.println("\n Clientes: " + clientes);
            break;
        case 8:
                /* Crie um programa que receba a temperatura média 
                de cada mês do ano e após exiba a temperatura média do ano */

                System.out.println("\n\t --- Temperatura média dos 12 meses --- ");
                int acumTemp=0;
                double temp[] = new double[12];

                for(int i=0;i<12;i++){
                // Pedindo temp mes a mes 
                System.out.println("\nDigite a temperatura do "+(i+1)+"º mês: "); 
                temp[i] = sc.nextDouble();
                acumTemp +=temp[i];
            }

            Double mediaAno = acumTemp/12.0;
            System.out.println(" A média de temperatura anual é: " + mediaAno);
            break;
        case 9:
        /*  Crie dois arrays de 10 posições e depois 
            gere um terceiro array com os valores intercalados 
            desses dois arrays, ao final, imprima os 3.  */

            System.out.println("\n\t***Arrays Intercalados***\n");

            // Criando arrays 
            int[] array1 = {35, 80,55, 65, 75, 85,95, 100, 200, 350};
            int[] array2 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 101};
            int[] arrayInter = new int[20];

            for (int i = 0; i < 10; i++) {
                arrayInter[2 * i] = array1[i]; // Preenche valores de array1 nas posições pares
                arrayInter[2 * i + 1] = array2[i]; // Preenche valores de array2 nas posições ímpares
            }

            // Imprimindo valores intercalados
            System.out.println("Array 1: ");
                for (int i = 0; i < 10; i++) {
                  System.out.print(array1[i] + " ");
                }

            System.out.println("\n\nArray 2: ");
                for (int i = 0; i < 10; i++) {
                  System.out.print(array2[i] + " ");
                }

            System.out.println("\n\nArray Intercalado: ");
                for (int i = 0; i < 20; i++) {
                  System.out.print(arrayInter[i] + " ");
                }
            break;
        case 10:
             /* Crie um programa que leia 20 valores, calcule a média 
                aritmética desses valores e imprima os valores 
                que são inferiores a esta média. */

                System.out.println("\n\t*** Média Aritmética ***\n");

                // Criando array
                double[] number = new double[20];
                
                // Pedindo valores
                for (int i = 0; i < 20; i++) {
                    System.out.println("\nDigite o "+(i+1)+"º valor: ");
                    number[i] = sc.nextDouble();
                }
                // Criando variavel soma pra garantir que começe em 0
                double soma = 0;
                
                // Fazendo a conta 
                for (int i = 0; i < 20; i++) {
                    soma += number[i];
                }
                
                // Resultado da média de todos os numeros
                double resultmedia = soma / 20;

                // Imprimindo média 
                System.out.println("\n Total média: " + resultmedia);

                // Imprimindo valores 
                System.out.println("\n Valores inferiores a média: ");

                // Foreach pra comparar os valores menores q a média
                for (double valor : number) {
                    if (valor < resultmedia) {
                        System.out.print(valor + " ");
                    }
                }
            break;
        case 11:
                System.out.println("\n\t Desafio !!");
                System.out.println("\n\t Investigação Criminal");
                System.out.println("\n\t Responda apenas com (s) ou (n)");

                int totalSim = 0;

                System.out.println("\n Telefonou a vítima? ");
                String letra = sc.next();
                if(letra.equals ("s")){
                    totalSim++;
                }

                System.out.println("\n Esteve no local do crime? ");
                letra = sc.next();
                if(letra.equals ("s")){ 
                    totalSim = totalSim +1;
                }

                System.out.println("\n Mora peto da vítima? ");
                letra = sc.next();
                if(letra.equals("s")){
                    totalSim = totalSim +1;
                }

                System.out.println("\n Devia para a vítima?");
                letra = sc.next();
                if(letra.equals("s")){
                    totalSim = totalSim +1;
                }

                System.out.println("\n Trabalhou com a vítima? ");
                letra = sc.next();
                if(letra.equals("s")){
                    totalSim = totalSim +1;
                }

                System.out.println("\n Total de Sim: " + totalSim);

                if(totalSim == 1){
                    System.out.println("01-Inocente");
                }

                if(totalSim == 2){
                    System.out.println("2-Suspeita");
                }
                
                if(totalSim == 3 && totalSim == 4) {
                    System.out.println("3-4 Cumplice");
                }

                if(totalSim == 5){
                    System.out.println("5-Assasino");
                }
            break;
            }
        } while (opcao != 0);
    }
}