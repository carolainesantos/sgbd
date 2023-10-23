package avaliacao_biblioteca;

import java.util.ArrayList;

public class Midia extends Filme {
  private static ArrayList<Midia> midias = new ArrayList<>();
  
  // Criar método construtor
  public Midia(String titulo, String genero) {
    super(titulo, genero);
    midias.add(this);
   


  }
}