package DesafioControleFluxo.src;

import java.util.Scanner;

public class Contador {
    public Contador() {
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite seu primeiro número: ");
        int parametroUm = scanner.nextInt();
        System.out.println("Digite seu segundo número: ");
        int parametroDois = scanner.nextInt();

        try {
            contar(parametroUm, parametroDois);
        } catch (ParametrosInvalidosException menssagem) {
            System.out.println(menssagem.getMessage());
        }

    }

    static void contar(int parametroUm, int parametroDois) throws ParametrosInvalidosException {
        if (parametroUm > parametroDois) {
            throw new ParametrosInvalidosException("O parametro 2 é maior que o parametro 1!");
        } else {
            for(int inicioContador = parametroUm; inicioContador <= parametroDois; ++inicioContador) {
                System.out.println(inicioContador);
            }

        }
    }

    public static class ParametrosInvalidosException extends Throwable {
        public ParametrosInvalidosException(String message) {
            super(message);
        }
    }
}
