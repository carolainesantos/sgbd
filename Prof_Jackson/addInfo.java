import java.util.ArrayList;
import java.util.Scanner;
import java.text.ParseException;


public class addInfo {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    ArrayList<Pessoa> pessoas = new ArrayList<Pessoa>();
    int opcao = 0;
 
        do {
            System.out.println("Digite o seu nome: ");
            String nome = sc.next();

            System.out.println("Digite o seu peso: ");
            double peso = sc.nextDouble();

            System.out.println("Digite a sua altura: ");
            double altura = sc.nextDouble();

            System.out.println("Digite a data do seu Nascimento (dia/mes/ano): ");
            String dataNascString = sc.next();
            
            Pessoa objetoPessoa = new Pessoa(nome, peso, altura, dataNasc);

            pessoas.add(objetoPessoa);
            System.out.println("Digite 0 para sair.....");
            opcao = sc.nextInt();
      } while (opcao != 0);

      for (Pessoa pessoa : pessoas) {
          System.out.println(pessoa.nome() + "-" + pessoa.altura() + "-" + pessoa.peso() + "-" + dateFormat.format(pessoa.dataNasc()));
    }
        sc.close();
  }
}
