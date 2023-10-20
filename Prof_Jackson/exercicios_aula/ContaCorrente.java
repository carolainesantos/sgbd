/*  Crie uma classe que represente uma Conta Corrente,
   devendo ter as propriedades Número da Conta, Agência,
   Saldo, Nome do Titular e os métodos Depósito, Saque e Saldo Total. 
   Ao final imprimindo o saldo existente.  */


public class ContaCorrente {
  public int numConta;
  public String agencia;
  public float saldo;
  public String titular;
  
    // Método construtor 
    public ContaCorrente(int numConta, String agencia, float saldo, String titular) {
      this.numConta = numConta; // This representa o objeto 
      this.agencia = agencia;
      this.saldo = saldo;
      this.titular = titular;
    }

    // Método pra fazer deposito 
    boolean deposito(double valor) {
      if(valor > 0) {
        this.saldo += valor;
        return true;
      } else {
          return false;
      }
    }

    // Método pra fazer saque
    boolean saque(double valor) {
      if(this.saldo < valor){
        return false;
      } else
          this.saldo -= valor;
          return true;
    }

    // Mostrar saldo total
    public float saldoTot() {
      return this.saldo;
    } 
}