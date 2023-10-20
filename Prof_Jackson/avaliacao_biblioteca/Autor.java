package avaliacao_biblioteca;
/*  Autor:
  Esta classe deve representar um autor 
  de livros e deve conter um atributo nome. 
  Ela deve ter um construtor para inicializar 
  o nome do autor e um método toString para 
  representar a classe como uma string. */

import java.util.ArrayList;

public class Autor {
  public String nome;
  public static ArrayList<Autor> autores = new ArrayList<>();

  // Consrtutor
  public Autor(String nome) {
    this.nome = nome;
    autores.add(this);
  }

  // Método toString
  public String toString() {
    return "Nome Completo: " + nome; 
  }

}
