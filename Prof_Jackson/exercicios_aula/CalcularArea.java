import java.util.ArrayList;
import java.util.Scanner;

public class CalcularArea {
   public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Raio> raios = new ArrayList<Raio>();

        System.out.println("\n\t Calculando area de um raio\n");

        System.out.println("\n Digite o valor: ");
        int centimetro = sc.nextInt();
        Raio objetoRaio = new Raio(centimetro);
        raios.add(objetoRaio);

        for (Raio raio : raios) {
            System.out.println(raio.calcRaio());
        }
        sc.close();
    }
}










   

