import java.util.Locale;
import java.util.Scanner;

public class PacoteTelefone {
    public static void main(String[] args) {
        /**
         * O sistema terá 3 planos:
         * Basic, Midia, Turbo
         * Basic: 100 minutos de ligação
         * Midia: 100 minutos de ligação + WhatsApp e instagram ilimitado
         * Turbo: 100 minutos de ligação + WhatsApp e instagram ilimitado + 5GB Youtube
         */
        Scanner scanner = new Scanner(System.in);
        //Adicionando numero do cliente a base de dados
        System.out.println("Olá! Bem vindo a sua operadora telefonica!\nInforme seu número de telefone: ");
        long Telefone = scanner.nextLong();

        //Novos planos e troca de plano
        System.out.println("Seu plano atual é o pacote PADRÃO, sem nenhum serviço!\nTemos alguns planos para você:\nBasic: 100 minutos de ligação.\nMidia: 100 minutos de ligação + WhasApp e Instagram Ilimitado.\nTurbo: 100 minutos de ligação + WhatsApp e instagram ilimitado + 5GB de Youtube\nDeseja trocar seu plano?\n1 - Sim\n2 - Não");
        int Plano = scanner.nextInt();

        //Troca de plano ou não
        if(Plano == 1){
            System.out.println("Qual plano deseja?\n1 - Basic\n2 - Midia\n3 - Turbo");
            int novoPlano = scanner.nextInt();

            System.out.println("Parabens pelo upgrade em seu plano agora você tem:\n");

            switch (novoPlano){
                case 3:{
                    System.out.println("5GB de Youtube");
                }
                case 2:{
                    System.out.println("WhatsApp e Instragram Ilimitado");
                }
                case 1:{
                    System.out.println("100 minutos de ligação");
                }
            }
        }
        else{
          System.out.println("Agradecemos pela preferencia e aguardamos sua volta em breve! Tenha um bom dia!");
        }

    }
}
