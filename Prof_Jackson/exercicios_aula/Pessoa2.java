public class Pessoa2 { 
    public String nome;
    public double peso;
    public double altura;
    public String dataNasc;

    // Método construtor 
    public Pessoa2(String nome, double peso, double altura, String dataNasc) {
      this.nome = nome; // This representa o objeto 
      this.peso = peso;
      this.altura = altura;
      this.dataNasc = dataNasc;
    }
    
    /**
     * este método ira calcular imc
     * @return ele ira retornar um double do imc da pessoa
     */
    public double calculaIMC() {
      return this.peso / (this.altura * this.altura);
    }

    public String imcTexto() {
      double imc = this.calculaIMC();
    

      if (imc <= 18.5) {
         return "Abaixo do Peso";
      } else if (imc >= 18.6 && imc <= 24.9) {
         return "Peso Ideal";
      } else if (imc >= 25.0 && imc <= 29.9) {
         return "Levemente acima do peso";
      } else if (imc >= 30.0 && imc <= 34.9) {
         return "Obesidade Grau I";
      } else if (imc >= 35.0 && imc <= 39.9) {
         return "Obesidade Grau II";
      } else {
         return imc >= 40.0 ? "Obesidade Grau III (m\u00f3rbida)" : "Indefinido";
      }
   }
}
