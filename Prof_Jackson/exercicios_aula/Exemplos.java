import java.util.Scanner;

public class Exemplos {
  public static void main(String[] args) {
    Scanner scanner = new Scanner (System.in);
    System.out.println("Digite a idade: "); // cout 
    int idade = scanner.nextInt(); // cin
    System.out.println("A idade digitada foi: " + idade);
    scanner.close(); 
  }
}
