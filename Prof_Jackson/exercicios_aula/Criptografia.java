import java.util.Scanner;

public class Criptografia {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Digite a mensagem: ");
    String mensagemOriginal = sc.nextLine();

    System.out.print("Digite o valor constante: ");
    int valorConstante = sc.nextInt();

    CifraCesar criptografia = new CifraCesar(mensagemOriginal, valorConstante);
    String mensagemCifrada = criptografia.criptografar();

    System.out.println("Mensagem criptografada: " + mensagemCifrada);
  }
}      




