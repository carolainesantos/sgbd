/*  Crie uma classe que calcule a área de uma circunferência, 
    recebendo com valor inicial o raio */

public class Raio {
  public int centimetro;

  public Raio(int centimetro) {
    this.centimetro = centimetro;
  }

  // Criar método que calcule a área de uma circunferência
  public double calcRaio() {
    return 3.14 * (centimetro * 2);    
  }
}
