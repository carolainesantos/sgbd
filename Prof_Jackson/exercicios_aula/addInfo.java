import java.util.ArrayList;
import java.util.Scanner;

public class addInfo {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    ArrayList<Pessoa2> pessoas = new ArrayList<Pessoa2>();
    int opcao = 0;
 
        do {
            System.out.println("Digite o seu nome: ");
            String nome = sc.next();

            System.out.println("Digite o seu peso: ");
            double peso = sc.nextDouble();

            System.out.println("Digite a sua altura: ");
            double altura = sc.nextDouble();

            System.out.println("Digite a data do seu Nascimento (dia/mes/ano): ");
            String dataNasc = sc.next();
            
            // New é o construtor q instancia (cria) um objeto
            Pessoa2 objetoPessoa = new Pessoa2(nome, peso, altura, dataNasc);

            pessoas.add(objetoPessoa);
            System.out.println("Digite 0 para calcular seu IMC...");
            System.out.println("Digite 1 para adicionar uma nova pessoa...");
            opcao = sc.nextInt();
      } while (opcao != 0);

      for (Pessoa2 pessoa : pessoas) {
          System.out.println(pessoa.calculaIMC() + " - " + pessoa.nome + "-" + pessoa.altura + "-" + pessoa.peso + "-" + pessoa.dataNasc);
      }
      sc.close();
  }
}
