
public class CaixaEletronico {
    public static void main(String[] args) {
        double saldo = 25.0;
        double valorSolicitado = 17.0;

        if(valorSolicitado<saldo){//Se o valor solicitado for menor que o saldo atual ele fara a proxima ação.
            saldo = saldo - valorSolicitado;
        System.out.println(saldo);}
        else{
            System.out.println("Seu valor solicitado pe maior que seu saldo.\nSeu saldo ainda é de: R$"+saldo);
        }
    }
}
