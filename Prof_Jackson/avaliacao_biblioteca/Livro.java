package avaliacao_biblioteca;
/*  Livro: 
  Esta classe deve representar um livro na biblioteca 
  e deve conter atributos como titulo, autor e disponivel. 
  Ela deve ter um construtor para inicializar o título e 
  o autor do livro, bem como métodos para emprestar e devolver 
  um livro, alterando o estado de disponibilidade. 
  Também deve conter um método toString para representar 
  a classe como uma string. */

import java.util.ArrayList;
public class Livro extends Midia {
  private String titulo;
  private Autor autor;
  private boolean disponivel;
  private static ArrayList<Livro> livros = new ArrayList<>();

  // Construtor
  public Livro(String titulo, Autor autor, boolean disponivel) {
    this.titulo = titulo;
    this.autor = autor;
    this.disponivel = disponivel;
    // Adiciona livros 
    livros.add(this);
  }
    // Criar método Get 
  public String getTitulo() {
    return this.titulo;
  }
  public Autor getAutor() {
    return this.autor;
  }
  public boolean getDisponivel() {
    return this.disponivel;
  }

    // Criar método Set 
  public void setTitulo(String titulo) {
    this.titulo = titulo;
  }
  public void setAutor(Autor autor) {
    this.autor = autor;
  }
  public void setDisponivel(boolean disponivel) {
    this.disponivel = disponivel;
  }


  // Mostrar Livros 
  public void mostrarLivros() {
    int i = 0;
    for (Livro livro : livros) {
      System.out.println(i + " - " + livro.toString());
      i++;
    }
  }

  // Metodo emprestar 
  public void emprestar() throws Exception {
    if (!this.disponivel) {
      throw new Exception("Lamento, livro indisponível!");
    }
    this.disponivel = false;
    System.out.println("Livro emprestado com sucesso!");
}

  // Metodo devolver 
  public void devolver() throws Exception {
    if (this.disponivel) {
      System.out.println("Livro já está disponível para devolução.");
    } else {
      this.disponivel = true;
      System.out.println("Livro devolvido com sucesso!");
    }
  }

  // Método toString 
  public String toString() {
    return "Título: " + this.titulo + ", " 
    + "Autor: " + this.autor + ", " 
    + ", Disponibilidade: " + (this.disponivel ? "Disponível" : "Indisponível"); 
  }
}