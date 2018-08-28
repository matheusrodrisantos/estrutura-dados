import java.util.*;
public class Lab03_Exe01
{
    public static void main(String args[])
    {
        Scanner entrada=new Scanner(System.in);
        int [] valores=new int[3];
        //esse for entra com os dados 
        for(int i=0;i<3;i++)
        {
            System.out.println("Qual o valor ? ");
            valores[i]=entrada.nextInt();
        }
        // esse for imprime os valores 
        for(int i=0;i<valores.length;i++)
        {   
            System.out.print("Valores:");
            System.out.println(valores[i]);
        }
            
            
    }
}
