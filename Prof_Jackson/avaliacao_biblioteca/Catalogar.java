package avaliacao_biblioteca;
/* No método main da classe principal, deverão ser descritas as seguintes operações: - Criar autor - Criar livro- Criar biblioteca
- Adicionar livro à biblioteca
- Emprestar livro
- Devolver livro
Certifique-se de que seu programa seja capaz de lidar com casos em que um livro já está emprestado e tentativas de devolução de livros que já estão disponíveis. */

import java.util.Scanner;

public class Catalogar {
  public static void main(String[] args) {
    Scanner sc = new Scanner (System.in);

    int opcao = 0;
    boolean temErro = false;

    do {
        System.out.println("\n" + "\u001B[35m");
        System.out.println("+-------------------------------+");
        System.out.println("|  Gerenciamento de Biblioteca  |");
        System.out.println("|                               |");
        System.out.println("| [0] - Encerrar                |");
        System.out.println("| [1] - Registrar Autor         |");
        System.out.println("| [2] - Registrar Livro         |");
        System.out.println("| [3] - Registrar Biblioteca    |");
        System.out.println("| [4] - Adicionar Livro         |");
        System.out.println("| [5] - Emprestar Livro         |");
        System.out.println("| [6] - Devolver Livro          |");
        System.out.println("+-------------------------------+");
        System.out.println("Escolha uma opção: \n" + "\u001B[00m");

        try {
          opcao = sc.nextInt();
        } catch (Exception e) {
          opcao = 99;
        }

        switch (opcao) {
          case 0: {
              System.out.println("Saindo....");
              break;
          }
          case 1: {
            do {
              System.out.println("\nDigite o nome do autor: ");
              String nome = sc.next();
              try {
                if (nome.length() <= 1) { // Verificar se digitou o nome correto 
                  throw new Exception("O nome do autor não é válido");
                }
                temErro = false;
                new Autor(nome); // Criar um novo autor
              } catch (Exception e) {
                System.out.println("Erro: " + e.getMessage());
                temErro = true;
              }
              System.out.println("Autor cadastrado com sucesso!");
              System.out.println("Número na lista: " + Autor.getAutores().size());
            } while(temErro);
            break;
          }
          case 2:{
            do {
              try {
                System.out.println("Digite o título do livro: ");
                String titulo = sc.next();
                if (titulo.length() <= 1) { // Verificar se digitou o titulo correto 
                  throw new Exception("O nome do autor não é válido");
                }
  
                System.out.println("Digite o número do autor: ");
                int numero = sc.nextInt() - 1;
                if (numero < 0 || numero >= Autor.getAutores().size()) {
                  throw new Exception("Autor inexistente");
                }
                Autor autor = Autor.getAutores().get(numero);

                System.out.println("O livro está disponivel? [1] - Sim | [2] - Não");
                int disponivel = sc.nextInt();
                boolean aux = false;
                if(disponivel == 1){
                  aux = true;
                }

                temErro = false;
                new Livro(titulo, autor, aux); // Criar um novo autor
                System.out.println("Número na lista: " + Livro.getLivros().size());
              } catch (Exception e) {
                System.out.println("Erro: " + e.getMessage());
                temErro = true;
              }
            } while(temErro);
            break;
          }
          case 3: {
            do {
              try {
                System.out.println("\nDigite o nome da biblioteca: ");
                String nome = sc.next();
                 if (nome.length() <= 1) { // Verificar se digitou o nome correto 
                  throw new Exception("O nome não é válido");
                }
                new Biblioteca(nome);
                System.out.println("Número na lista: " + Biblioteca.getBibliotecas().size());
              } catch (Exception e) {
                System.out.println("Erro: " + e.getMessage());
              }
            } while(temErro);
            break;
          }
          case 4: {
            do {
              try {
                System.out.println("Digite o número da biblioteca: ");
                int numBiblioteca = sc.nextInt() - 1;
                if (numBiblioteca < 0 || numBiblioteca >= Biblioteca.getBibliotecas().size()) {
                  throw new Exception("Biblioteca inexistente");
                }
                Biblioteca biblioteca = Biblioteca.getBibliotecas().get(numBiblioteca);

                System.out.println("Digite o número do livro: ");
                int numLivro = sc.nextInt() - 1;
                if (numLivro < 0 || numLivro >= Livro.getLivros().size()) {
                  throw new Exception("Livro inexistente");
                }
                Livro livro = Livro.getLivros().get(numLivro);

                biblioteca.adicionarLivro(livro);
              } catch (Exception e) {
                System.out.println("Erro: " + e.getMessage());
              }
            } while(temErro);
            break;
          }
          case 5: {
            do {
              try {
                System.out.println("Digite o número da biblioteca: ");
                int numBiblioteca = sc.nextInt() - 1;
                if (numBiblioteca < 0 || numBiblioteca >= Biblioteca.getBibliotecas().size()) {
                  throw new Exception("Biblioteca inexistente");
                }
                Biblioteca biblioteca = Biblioteca.getBibliotecas().get(numBiblioteca);

                System.out.println("Digite o número do livro: ");
                int numLivro = sc.nextInt() - 1;
                if (numLivro < 0 || numLivro >= biblioteca.getBibliotecas().size()) {
                  throw new Exception("Livro inexistente");
                }
                Livro livro = biblioteca.getLivros().get(numLivro);

                livro.emprestar();
              } catch (Exception e) {
                System.out.println("Erro: " + e.getMessage());
              }
            } while(temErro);
            break;
          }
          case 6: {
            do {
              try {
                System.out.println("Digite o número da biblioteca: ");
                int numBiblioteca = sc.nextInt() - 1;
                if (numBiblioteca < 0 || numBiblioteca >= Biblioteca.getBibliotecas().size()) {
                  throw new Exception("Biblioteca inexistente");
                }
                Biblioteca biblioteca = Biblioteca.getBibliotecas().get(numBiblioteca);

                System.out.println("Digite o número do livro para devolver: ");
                int numLivro = sc.nextInt() - 1;
                if (numLivro < 0 || numLivro >= biblioteca.getLivros().size()) {
                  throw new Exception("Livro inexistente");
                }
                Livro livro = biblioteca.getLivros().get(numLivro);

                livro.devolver();
              } catch (Exception e) {
                System.out.println("Erro: " + e.getMessage());
              }
            } while(temErro);
            break;
          }
        }
    } while (opcao != 0);
    sc.close(); 
  }
}