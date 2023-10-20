import java.util.Scanner;
import java.util.InputMismatchException;
import java.util.ArrayList;
import java.util.List;

public class Exercicios3 {
    public static void main(String[] args) {
        System.out.println("=== EXERCÍCIOS - LISTA 3 ===");
        Scanner sc = new Scanner(System.in);
        int opcao = 0;
        do {
          System.out.println("\n" + "\u001B[34m");
          System.out.println("+-----------------------------------------------------+");
          System.out.println("| 1 - Tabuada com Arquivo                             |");
          System.out.println("| 2 - Ler e imprimir arquivo de texto                 |");
          System.out.println("| 3 - Operações básicas com a Main                    |");
          System.out.println("| 4 - Exponenciação com Precisão Arbitrária           |");
          System.out.println("| 5 - Nome aleatório de 5 pessoas                     |");
          System.out.println("| 6 - Calcular Raio e Área                            |");
          System.out.println("| 7 - Avaliar se TXT tem JAVA                         |");
          System.out.println("| 8 - 10 primeiros dígitos                            |");
          System.out.println("| 9 - Área com a Main                                 |");
          System.out.println("| 10 - Receba nome de arquivo na Main com valores     |");
          System.out.println("| 11 - Ler e imprimir arquivo de texto                |");
          System.out.println("+-----------------------------------------------------+");
          System.out.println("Escolha uma opção: \n" + "\u001B[00m");

        try {
            opcao = sc.nextInt();
        } catch (InputMismatchException e) {
            opcao = -1;
            sc.next();
        }

        switch (opcao) {
            case 1:
            // 1) Crie um programa que questione a quantidade de notas a ser informada, receba as notas e calcule a média.
                // calculaMedia(double[] notas)
                break;
            case 2:
                // 2) Crie um programa que imprima um arrays com Foreach.
                // printArray(new String[]{ "Teste", "imprimir", "foreach" });
                break;
            case 3:
                // 3) Crie um programa que leia 10 valores double e salve em um array, depois imprima esses valores.
                // dezValores(double[] valores);
                break;
            case 4:
                // 4) Crie um programa que leia 10 valores int e salve em um array, depois imprima se esses valores são pares ou ímpares.
                // dezValoresInt(int[] valores);
                break;
            case 5:
                // 5) Crie um programa que possua uma collection que represente as 52 cartas do baralho, imrpima elas.
                // baralho();
                break;
            case 6:
                // 6) Crie um programa que una duas listas de inteiros.
                // mergeIntList(int[] listaUm, int[] listaDois);
                break;
            case 7:
                // 7) Crie um programa que simule a fila de atendimento de um banco.
                // filaBanco();
                break;
            case 8:
                // 8) Crie um programa que receba a temperatura média de cada mês do ano e após exiba a temperatura média do ano.
                // double temperaturaMedia(double[] temperaturas);
                break;
            case 9:
             // 9) Crie dois arrays de 10 posições e depois gere um terceiro array com os valores intercalados desses dois arrays, ao final, imprima os 3.
                // alterarArray(int[] listaUm, int[] listaDois);
                break;
            
            case 10:
            // 10) Crie um programa que leia 20 valores, calcule a média aritmética desses valores e imprima os valores que são inferiores a esta média.
                // mediaVinte(int[] valores);
                break;
            case 11:
                // DESAFIO
                // detetive();
                break;
            default:
            System.out.println("Opção inválida!");
            break;
        }
     } while (opcao != 0);
        sc.close();
    }
}