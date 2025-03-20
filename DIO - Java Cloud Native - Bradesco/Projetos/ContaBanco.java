import java.util.Scanner;

public class ContaBanco {

    public static void main(String[] args) {
        //Crie um sistema onde adicione os dados do cliente com número da conta, agencia ,nome e sobrenome
        Scanner scanner = new Scanner(System.in);

        //Nome e Sobrenome do Cliente
        System.out.println("Digite seu nome: ");
        String nome = scanner.nextLine();

        System.out.println("Digite seu sobrenome: ");
        String sobrenome = scanner.nextLine();

        //Saldo do Cliente
        System.out.println("Quanto deseja depositar? ");
        double saldo = scanner.nextDouble();

        //Número da Agência
        System.out.println("Selecione sua agência:\nAgência Virtual - 1\nAgência Fisica - 2\n--> ");
        byte agencia = scanner.nextByte();
        int agenciaBanco = 0;
        if (agencia==1){
            System.out.println("Sua agência é 0001, usada para Agência Virtual");
            agenciaBanco = 0001;
        }
        else {
            System.out.println("Selecione o número da sua Agência: ");
            agenciaBanco = scanner.nextInt();
        }

        //Número da conta do Cliente
        System.out.println("Digite a conta do seu banco: ");
        int contaBanco = scanner.nextInt();

        System.out.println("Cadastro Finalizada!\nConfira seus dados:\nNome e Sobrenome: " + nome + " " + sobrenome + "\nConta: " + contaBanco + "\nAgência: " + agenciaBanco + "\nSaldo da conta: R$" + saldo + "\n Seus dados estão corretos?\n1 - Sim\n2 - Não\n -->");
        short confirmacaoDados = scanner.nextShort();
        if (confirmacaoDados==1){
            System.out.println("Dados confirmados!\n Sua conta foi criada com sucesso!");
        }
        else{
            System.out.println("Seus dados estão errados então vamos reiniciei o sistema para corrigi-los!");
        }
    }
}
