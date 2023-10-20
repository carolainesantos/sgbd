package avaliacao_biblioteca;
/* Biblioteca: 
  Esta classe deve representar a biblioteca 
  e deve conter uma lista de livros. 
  Ela deve ter métodos para adicionar livros
  à biblioteca e listar todos os livros 
  disponíveis na biblioteca. */

import java.util.ArrayList;

public class Biblioteca {
  private String nome;
  private ArrayList<Livro> livros;
  
  // Criar lista bibliotecas
  public static ArrayList<Biblioteca> bibliotecas = new ArrayList<>();

  // Criar construtor 
  public Biblioteca(String nome) {
    this.nome = nome;
    this.livros = new ArrayList<>();

    bibliotecas.add(this); // adiciona biblioteca
  }

  // Criar metodo toString
  public String toString() {
    return "Nome: " + this.nome;
  }

  // Adicionar livro
  public void adicionarLivro(Livro livro) {
    this.livros.add(livro);
  }

  // Mostrar todos os livros
  public void mostrarLivros() {
    int i = 0;
    for (Livro livro : this.livros) {
      System.out.println(i + " - " + livro.toString());
      i++;
    }
  }

  public static void mostrarBibliotecas() {
    for(int i = 0; i < bibliotecas.size(); i++) {
        Biblioteca biblioteca = bibliotecas.get(i);
        System.out.println(i + " - " + biblioteca.toString());
        biblioteca.mostrarLivros();
    }
  }
}