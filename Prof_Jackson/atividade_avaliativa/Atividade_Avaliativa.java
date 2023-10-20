package atividade_avaliativa;
import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Atividade_Avaliativa {
  public static void main(String[] args) {
        System.out.println("\nExercícios de Java (Lista-4)");
        Scanner sc = new Scanner(System.in);
        int opcao = 0;
        // criar dois arrayList - alunos - conceitos
        ArrayList<String> conceitos = new ArrayList<>();
        ArrayList<String> alunos = new ArrayList<>();
        int[] quantidadeConceitos = new int[4];

        do {
            System.out.println("............................" + "\u001B[36m" + "\n");
            System.out.println("[1] - Inserir novo aluno e conceito");
            System.out.println("[2] - Listar todos os alunos e conceitos");
            System.out.println("[3] - Exibir quantidade de cada conceito");
            System.out.println("[4] - Exibir alunos com conceito mais alto");
            System.out.println("[0] - Encerrar o programa");
            System.out.print("Escolha uma opção: ");
            try {
            opcao = sc.nextInt();
        } catch (InputMismatchException e) {
            opcao = -1;
            sc.next();
        }
        switch (opcao) {
            case 0:
                    System.out.println("Fim");
                    break;
            case 1: 
                // Pedindo nomes 
                System.out.print("Digite o nome do aluno:\n ");
                String nome = sc.next();

                    // Pedindo conceitos
                    System.out.print("Digite o conceito (O, B, S ou I): \n");
                    String conceito = sc.next().toUpperCase();
                    if (conceito.equals ("O") || conceito.equals("B") || conceito.equals("S") || conceito.equals("I")) {
                        alunos.add(nome);
                        conceitos.add(conceito);
                        System.out.println("Aluno inserido com sucesso.");
                        } else {
                            System.out.println("Conceito inválido.");
                        }
                            break; 
                        case 2:
                            System.out.println("Lista de alunos e conceitos:");
                            for (int i = 0; i < alunos.size(); i++) {
                                System.out.println(alunos.get(i) + " - " + conceitos.get(i));
                            }
                            break; 
                        case 3:
                            for(String nota : conceitos) {
                                switch (nota) {
                                    case "O":
                                        quantidadeConceitos[0]++;
                                        break;
                                    case "B":
                                        quantidadeConceitos[1]++;
                                        break;
                                    case "S":
                                        quantidadeConceitos[2]++;
                                        break;
                                    case "I":
                                        quantidadeConceitos[3]++;
                                        break;
                                }
                            }
                            System.out.print("O: "+quantidadeConceitos[0]+"\n");
                            System.out.print("B: "+quantidadeConceitos[1]+"\n");
                            System.out.print("S: "+quantidadeConceitos[2]+"\n");
                            System.out.print("I: "+quantidadeConceitos[3]+"\n");
                    break;
                    case 4:
                    break;
                }          
            } while (opcao != 0);
        }
}
