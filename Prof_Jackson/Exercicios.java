import java.util.InputMismatchException;
import java.util.Scanner;

public class Exercicios {
    public static void main(String[] args) {
        System.out.println("\n Exercícios de Java (Lista-1)");
        Scanner sc = new Scanner(System.in);
        int opcao = 0;
        do {
            System.out.println("............................." + "\u001B[36m" + "\n");
            System.out.println(" [0] - Pra Encerrar");
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
            System.out.println("[11] - Exercício 11");
            System.out.println("[12] - Desafio !!!!");
            System.out.println("\nEscolha uma opção:" + "\u001B[00m" + "\n");
            try {
                opcao = sc.nextInt();
            } catch (InputMismatchException e) {
                opcao = -1;
                sc.next();
            }
            switch (opcao) {
                case 0:
                    System.out.println("Obrigado!");
                    break;
                case 1:
                    System.out.println("\nMédia de Notas\n");
                    System.out.println("Digite a nota um: ");
                    int notaUm = sc.nextInt();
                    System.out.println("Digite a nota dois: ");
                    int notaDois = sc.nextInt();
                    System.out.println("Digite a nota três: ");
                    int notaTres = sc.nextInt();

                    int media = (notaUm + notaDois + notaTres) / 3;
                    System.out.println("A média é: " + media);
                    System.out.println("\n");
                    break;
                case 2: 
                    System.out.println("Calculando a Área\n");
                    System.out.println("Digite o valor do primeiro lado: ");
                    int lado1 = sc.nextInt();
                    System.out.println("Digite o valor do lado 2: ");
                    int lado2 = sc.nextInt();

                    int area = (lado1 * lado2) / 2; 
                    System.out.println("Area é igual: " + area);
                    System.out.println("\n");
                    break;
                case 3: 
                    System.out.println("Calculando o Volume\n");
                    System.out.println("Digite o 1º valor: ");
                    int valor1 = sc.nextInt();
                    System.out.println("Digite o 2º valor: ");
                    int valor2 = sc.nextInt();
                    System.out.println("Digite o 3º valor: ");
                    int valor3 = sc.nextInt();

                    int volume = (valor1 * valor2 * valor3);
                    System.out.println("O volume é: " + volume);
                    System.out.println("\n");
                    break;
                case 4: 
                    System.out.println("\nNúmero maior que o dobro\n");
                    System.out.println("Digite o 1º valor: ");
                    int num1 = sc.nextInt();
                    System.out.println("Digite o 2º valor: ");
                    int num2 = sc.nextInt();

                    if(num1 >(num2*2))
                        System.out.println("O valor digitado é maior que o dobro!");
                    else 
                        System.out.println("O valor digitado não é maior que o dobro!");
                        System.out.println("\n");
                    break;
                case 5: 
                    int valorA, valorB, valorC;
                    double delta, x1,x2;
                
                    System.out.println("\nCalculando Bhaskara\n");
                    System.out.println("Digite o valor a: ");
                    valorA = sc.nextInt();
                    System.out.println("Digite o valor b: ");
                    valorB = sc.nextInt();
                    System.out.println("Digite o valor c: ");
                    valorC = sc.nextInt();

                   delta = (valorB*valorB) + (-4*(valorA*valorC));
                   System.out.println("Valor de Delta é: " + delta);

                   if(delta >=0) {
                    x1= ((-(valorB)+Math.sqrt(delta))/2*valorA);
                    x2= ((-(valorB)-Math.sqrt(delta))/2*valorA);
                    System.out.println("x1 = " + x1);
                    System.out.println("x2 = " + x2);
                   } else {
                        System.out.println("Delta não possui raiz");
                        System.out.println("\n");
                   }
                    break;
                case 6: 
                    float km, h, velocidade;  
                    System.out.println("\nCalculando a velocidade média de uma viagem\n");
                    System.out.println("Digite a km: ");
                    km = sc.nextFloat();
                    System.out.println("Digite o tempo médio");
                    h = sc.nextFloat();

                    velocidade = km / h;
                    System.out.println("A velocidade média é: " + velocidade);
                    System.out.println("\n");
                    break;
                case 7:
                    float faturamento, qtdeImposto, result;
                    System.out.println("\nCalculando Imposto\n");
                    System.out.println("Digite o seu faturamento atual: ");
                    faturamento = sc.nextFloat(); 
                    System.out.println("Digite o quantidade de imposto: ");
                    qtdeImposto = sc.nextFloat();

                    result = (faturamento / qtdeImposto);
                    System.out.println("O percentual de imposto pago é: " + result + "%");
                    System.out.println("\n");
                    break;
                case 8:
                    System.out.println("\nPar ou Ímpar\n");
                    System.out.println("Digite um número:");
                    int valor = sc.nextInt();

                    if(valor % 2 == 0) {
                        System.out.println("\nEste número é Par!");
                    }  else 
                        System.out.println("\nEste número é Ímpar!");

                        System.out.println("\n");
                    break;
                case 9: 
                    System.out.println("\nComparando 2 Strings\n");
                    System.out.println("Digite o primeiro caracter: ");
                    char comp1= sc.next().charAt(0); 
                    System.out.println("Digite o segundo carcter: ");
                    char comp2 = sc.next().charAt(0);

                    if(comp1 == comp2) {
                        System.out.println("Os caracteres são iguais");
                    } else 
                        System.out.println("Os caracteres são diferentes");
                        System.out.println("\n");
                    break;
                case 10: 
                    System.out.println("\nConverter (string) para (inteiro)\n");
                    Double d_val = 35.90; 
                    System.out.println("Valor em str: "+ d_val);
                    int i_val = d_val.intValue();
                    System.out.println("Valor em int: "+i_val);
                    
                    break;
                case 11: 
                    System.out.println("\nValor de Imposto de Renda\n");
                    System.out.println("Digite o seu salario: ");
                    double salario = sc.nextDouble();

                    if(salario <= 1903.98){
                        System.out.println("Isento");
                    } else if(salario <= 2826.65){
                        System.out.println("Imposto de 7,5%");
                    } else if(salario <= 3751.05){
                        System.out.println("Imposto de 15%");
                    } else if(salario <= 4664.68){
                        System.out.println("Imposto de 22,5%");
                    } else 
                        System.out.println("Imposto de 27,5%");
                    break;
                case 12:
                    System.out.println("\nDesafio!!!");
                    System.out.println("\nVerificar se o número é primo\n");
                    System.out.println("Digite um número: ");
                    int num = sc.nextInt();
                    boolean verificaPrimo = true;

                    for(int i=2;i>= Math.sqrt(num);i++) {
                        if(num %i==0 ){
                           verificaPrimo = false;
                           break;
                        }
                    }
                        if(verificaPrimo && num > 1) {
                        System.out.println("Este número é primo");
                    } else 
                        System.out.println("Este número não é primo");
                    break;
                default:
                    System.out.println("Opção inválida!");
                    break;
            } 
        } while (opcao != 0);
        sc.close();
    }   
}