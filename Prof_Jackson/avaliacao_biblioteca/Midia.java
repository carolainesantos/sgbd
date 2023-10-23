package avaliacao_biblioteca;

import java.util.ArrayList;

public class Midia {
  private String nmFilme;
  private String documentario;
  private String cdFoto;
  private static ArrayList<Midia> midias = new ArrayList<>();
  
  // Criar método construtor
  public Midia(String nmFilme, String documentario, String cdFoto) {
    this.nmFilme = nmFilme;
    this.documentario = documentario;
    this.cdFoto = cdFoto;
    
  }
}