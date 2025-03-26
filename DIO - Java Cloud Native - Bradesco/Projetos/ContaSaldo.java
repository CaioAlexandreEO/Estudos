import java.util.Scanner;



public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        //Entrada de saldo inicial
        System.out.println("Digite seu saldo:");
        double saldoInicial = scanner.nextDouble();

        //Três transaçoes de entrada e saida

        //Primeira entrada e saida
        double entrada1 = (saldoInicial + 100 + 50 + 20 + 30);
        double saida1 = (entrada1 - 100);

        //Segunda entrada e saida
        double entrada2 = (saida1 + 200.5 + 50.5 + 70 + 30);
        double saida2 = (entrada2 - 110);

        //Terceira entrada e saida
        double entrada3 = (saida2 + 0 + 100 + 50 + 25);
        double saida3 = (entrada3 - 25);

        //Saldo final ja calculado
        double saldoFinal = saida3;

        //Mostrando saldo final
        System.out.printf("%.2f\n", saldoFinal);

        scanner.close();
    }
}
