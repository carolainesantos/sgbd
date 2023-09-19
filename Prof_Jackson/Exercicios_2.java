import java.util.InputMismatchException;
import java.util.Scanner;

public class Exercicios_2 {
    public static void main(String[] args) {
        System.out.println("\nExercícios de Java (Lista-2)");
        Scanner sc = new Scanner(System.in);
        int opcao = 0;
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

            switch (opcao) {
                case 0:
                    System.out.println("Obrigado!<3");
                    break;
                case 1:
                    System.out.println("\n\tAprovado ou Reprovado ?\n");
                    System.out.println("Digite a nota um: ");
                    int notaUm = sc.nextInt();
                    System.out.println("Digite a nota dois: ");
                    int notaDois = sc.nextInt();
                    System.out.println("Digite a nota três: ");
                    int notaTres = sc.nextInt();

                    int mediaa = (notaUm + notaDois + notaTres) / 3;

                      if(mediaa >= 7 ) {
                        System.out.println("Aprovado!!");
                      } else if(mediaa == 6) {
                        System.out.println("Recuperação");
                      } else if(mediaa < 6) {
                          System.out.println("Reprovado");
                      }

                    System.out.println("A média é: " + mediaa);
                    break;
                case 2:
                    System.out.println("\n\tNome do Mês\n");
                    System.out.println("Digite um número: "); 
                    int num = sc.nextInt();

                    if(num == 1){
                      System.out.println("Janeiro");
                    } else if(num == 2) {
                      System.out.println("Fevereiro");
                    } else if(num == 3) {
                      System.out.println("Março");
                    } else if(num == 4) {
                      System.out.println("Abril");
                    } else if(num == 5) {
                      System.out.println("Maio");
                    } else if(num == 6) {
                      System.out.println("Junho");
                    } else if(num == 7) {
                      System.out.println("Julho");
                    } else if(num == 8) {
                      System.out.println("Agosto");
                    } else if(num == 9) {
                      System.out.println("Setembro");
                    } else if(num == 10) {
                      System.out.println("Outubro");
                    } else if(num == 11) {
                      System.out.println("Novembro");
                    } else if(num == 12) {
                      System.out.println("Dezembro");
                    }
                  break;
                case 3:
                    System.out.println("\u001B[35m");
                    System.out.println("\n\t\tJogo da Forca '-'");
                    System.out.println("\n\tDica1: Palavra de 7 letras\n");
                    System.out.println("\tDica2: Todo mundo gosta de receber :)\n");

                    String palavra[] = { "c", "a", "r", "i", "n", "h", "o" };  
                    int forca = 1, vencer = 0, perder = 0, contador = 0;   
                    String digito, letrasDigitadas[] = new String[30];  
                      
                    while (forca == 1) {  
                        int existePalavra = 0;  
                        System.out.println("Digite a letra:");  
                        digito = sc.next();  
                        letrasDigitadas[contador] = digito;  
              
                        for (int i = 0; i < letrasDigitadas.length; i++) {  
                            if (letrasDigitadas[i] != null) {  
                                if (letrasDigitadas[i].equals(digito)) {  
                                    existePalavra++;  
                                }  
                            }  
                        }  
                        if (!(existePalavra > 1)) {  
                            for (int x = 0; x < palavra.length; x++) {  
                                if (palavra[x].equals(digito)) {  
                                    System.out.println("Letra correta.");  
                                    vencer++;  
                                    break;  
                                } else {  
                                    if (x == 6) {  
                                        System.out.println("Letra inexistente.");  
                                        perder++;  
                                    }  
                                }  
                            }  
                            if (perder == 7) {  
                                System.out.println("Lamento, você perdeu. :()");  
                                System.exit(0);  
                            } else if (vencer == 7) {  
                                System.out.println("Voce venceu, a palavra é Carinho!!");  
                                System.exit(0);  
                            }  
                        } else {  
                            System.out.println("Essa letra já foi digitada.");  
                        }  
                        contador++;  
                    }  
                    break;
                case 4:
                  System.out.println("\n\tTabuada 0 ... 10\n");
                  System.out.println("Digite um número: ");

                  for (int i = 0; i <= 10; i++) {
                    System.out.println("Tabuada de " + i + ":" + "\n");
                      for (int j = 0; j <= 10; j++) {
                        System.out.println(i + " x " + j + " = " + (i * j));
                      }
                    System.out.println("\n"); 
                  }
                  break;
                case 5:
                  System.out.println("\t\nString linha por linha\n");
                  System.out.println("\nDigite uma palavra:");
                  Scanner scanner = new Scanner(System.in);
                  String str = scanner.nextLine();

                  for (int i = 0; i < str.length(); i++) {
                    char letra = str.charAt(i);
                    System.out.println(letra);
                }  
              break;
                case 6:
                  System.out.println("\n\tMultiplos de 7 - (De 1 ate 500)...");

                  for (int i = 1; i <= 500; i++) {
                    if (i % 7 == 0) {
                        System.out.println("\n--> " + i);
                    }
                  }
                  break;
                case 7:
                    System.out.println("\n\t Notas e média\n");

                    System.out.println("Digite a 1ª nota: ");
                    float atividade1 = sc.nextFloat();
                    if(atividade1 < 0) {
                      System.exit(0);
                    }

                    System.out.println("Digite a 2ª nota: ");
                    float atividade2 = sc.nextFloat();
                    if(atividade2 < 0) {
                      System.exit(0);
                    }

                    System.out.println("Digite a 3ª nota: ");
                    float atividade3 = sc.nextFloat();
                    if(atividade1 < 0) {
                      System.exit(0);
                    }

                    float resultMedia = (atividade1+atividade2+atividade3) / 3;
                    System.out.println("Sua média é : " + resultMedia);
                    System.out.println("\n");
                  break;
                case 8:
                    System.out.println("\t\nCalculando Fatorial\n");
                    System.out.println("Digite um número:");
                    int numero = sc.nextInt();

                    int fatorial = 1;
                    for(int i= numero;i>1;i--) {
                      fatorial*= i;
                    }
                    System.out.println("Fatorial de " + numero + " é: " + fatorial);
                  break;
                case 9:
                    System.out.println("\n\t IMC\n");
                    double imc = sc.nextDouble();
                    System.out.println("Digite seu peso: ");
                    float peso = sc.nextFloat();
                    System.out.println("Digite sua altura: ");
                    float h = sc.nextFloat();

                    imc = ((peso / (h * h) ));
                    System.out.println("Seu IMC é de : " + imc);

                    if(imc < 18.5 ) {
                      System.out.println("Abaixo peso");
                    } else if((imc >= 18.6  ) || (imc <= 24.9)) {
                      System.out.println("Peso ideal");
                    } else if((imc >= 25.0  ) || (imc <= 29.9)) {
                      System.out.println("Levemente acima do peso");
                    } else if((imc >= 30.0  ) || (imc <= 34.9)) {
                      System.out.println("Obesidade Grau I");
                    } else if((imc >= 35.0  ) || (imc <= 39.9)) {
                      System.out.println("Obesidade Grau II");
                    } else if(imc <= 40) {
                      System.out.println("Obesidade Grau III (mórbida)");
                    }
                  break;
                case 10:
                    System.out.println("\n\t Operações\n");
                    System.out.println("Digite o 1º valor:");
                    int valor1 = sc.nextInt();
                    System.out.println("Digite o 2º valor:");
                    int valor2 = sc.nextInt();
                    System.out.println("Digite qual operação quer fazer (+, -, *, /): ");
                    String operacao = sc.next(); 
                    
                    if(operacao.equals("+"))  {
                      int operacao1 = valor1 + valor2;
                      System.out.println("Resultado é: " + operacao1);
                    } else if (operacao.equals("-")) {
                      int operacao2 = valor1 - valor2;
                      System.out.println("Resultado é: " + operacao2);
                    } else if (operacao.equals("*")) {
                      int operacao3 = valor1 * valor2;
                      System.out.println("Resultado é: " + operacao3);
                    } else if (operacao.equals("/")) {
                      int operacao4 = valor1 / valor2;
                      System.out.println("Resultado é: " + operacao4);
                    }
                    break;
                case 11:
                    System.out.println("\n\t Money\n");
                    System.out.println("Digite o valor: \n");
                    int money=sc.nextInt();

                    int notasCem = (money / 100);
                    money %= 100;
                    System.out.println("Notas necessárias são - [R$100]: " + notasCem);

                    int notasCinquenta = (money / 50);
                    money %= 50;
                    System.out.println("Notas necessárias são - [R$50]: " + notasCinquenta);

                    int notasVinte = (money / 20);
                    money %= 20;
                    System.out.println("Notas necessárias são - [R$20]: " + notasVinte);

                    int notasDez = (money / 10);
                    money %= 10;
                    System.out.println("Notas necessárias são - [R$10]: " + notasDez);

                    int notasCinco = (money / 5);
                    money %= 5;
                    System.out.println("Notas necessárias são - [R$5]: " + notasCinco);

                    int notasDois = (money / 2);
                    money %= 2;
                    System.out.println("Notas necessárias são - [R$2]: " + notasDois);
                  break;
                default:
                    System.out.println("Opção inválida!");
                    break;
            }
        } while (opcao != 0);
        sc.close();
    }
}