import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Add_Conta {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    ArrayList<ContaCorrente> contas = new ArrayList<ContaCorrente>();
    int opcao = 0;

        // criar metodos= deposito/saque/saldo
    do { // fazer aqui um switch case
      System.out.println("\u001B[36m" + "\n");
      System.out.println("+===========================+");  
      System.out.println("| [0] - Encerrar            |");
      System.out.println("| [1] - Adicionar conta     |");
      System.out.println("| [2] - Depositar           |");
      System.out.println("| [3] - Sacar               |");
      System.out.println("| [4] - Ver saldo           |");
      System.out.println("+===========================+");
      System.out.println("Escolha uma opção: \n" + "\u001B[00m");

      try {
            opcao = sc.nextInt();
        } catch (InputMismatchException e) {
            opcao = -1;
            sc.next();
        }

      switch(opcao) {
          case 0: 
            System.out.println("Bye! ;) ");
            break;
          case 1:
            System.out.println("\n\t Informações da conta \n ");
            System.out.println("Informe o numero da conta: ");
            int numConta = sc.nextInt();

            System.out.println("Informe a sua agencia: ");
            String agencia = sc.next();

            System.out.println("Informe o saldo: ");
            float saldo = sc.nextFloat();

            System.out.println("Informe o nome do titular: ");
            String titular = sc.next();

             // New é o construtor q instancia (cria) um objeto
            ContaCorrente objetoConta_Corrente = new ContaCorrente(numConta, agencia, saldo, titular);
            contas.add(objetoConta_Corrente);

            for (ContaCorrente conta_corrente : contas) {
              System.out.println("Conta: " + conta_corrente.numConta + ", " + "Agencia: " + conta_corrente.agencia + ", " + "Titular: " + conta_corrente.titular);
          }
            break;
          case 2:
            System.out.println("\n\t Fazer depósito \n ");
            System.out.println("Informe o numero da conta: ");
            int destino = sc.nextInt();

            System.out.println("Informe o valor: ");
            double valor = sc.nextDouble();

            int encontrou = 0;
            for(ContaCorrente contaCorrente : contas) {
              if(contaCorrente.numConta == destino) {
                encontrou = 1;
                boolean result =  contaCorrente.deposito(valor);
                if(result) {
                  System.out.println("Depositado com sucesso!");
                  break;
                }
                System.out.println("Operação Inválida!");
              }
            }
            if(encontrou == 0){
              System.out.println("Conta inexistente!");
            }
            break;
          case 3:
            System.out.println("\n\t Fazer saque \n ");
            System.out.println("Informe o número da conta: ");
            int origem = sc.nextInt();

            System.out.println("Informe o valor do saque: ");
            double valorSaque = sc.nextDouble();

            int encontrouC = 0;
            for(ContaCorrente contaCorrente : contas) {
              if(contaCorrente.numConta == origem) {
                encontrouC = 1;
                boolean resultSaque = contaCorrente.saque(valorSaque);
              if(resultSaque) {
                System.out.println("Saque realizado com sucesso!");
                break;
              } else {
                System.out.println("Saldo insuficiente para realizar o saque.");
              }
            }
          }
            if (encontrouC == 0) {
            System.out.println("Conta inexistente!");
          }
            break;
          case 4:
            System.out.println("\n\t Consultar Saldo \n ");
            System.out.println("Informe o número da conta: ");
            int contaConsulta = sc.nextInt();

            int encontrouConsulta = 0;
            for(ContaCorrente contaCorrente : contas) {
              if(contaCorrente.numConta == contaConsulta) {
                encontrouConsulta = 1;
                float total = contaCorrente.saldoTot();
                System.out.println("Saldo da conta: " + total);
                break;
              }
            }

            if (encontrouConsulta == 0) {
              System.out.println("Conta inexistente!");
          }
        break;
      }
    } while (opcao != 0);
    sc.close();
  }
}