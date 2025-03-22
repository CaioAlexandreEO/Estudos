import java.util.Locale;
import java.util.Scanner;

public class Boletim {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Qual a média final do seu boletim? \nNota: ");
        int nota = scanner.nextInt();
        
        if (nota>7){
            System.out.println("Você foi aprovado!");
        } else if (nota==7) {
            System.out.println("Você esta na média mas foi aprovado!");
        }else{
            System.out.println("Você foi reprovado!");
        }

    }
    private static void Ternaria(){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Qual a média final do seu boletim? \nNota: ");
        int nota = scanner.nextInt();

        String resultado = nota >=7 ? "Aprovado" : "Reprovado";
        System.out.println(resultado);
    }
}
