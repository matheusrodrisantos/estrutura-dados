public class GerenteConta
{
   public static void main(String args[]){
       conta c1=new conta();
       //c1.setNumero(1);
       //c1.setSaldo((float)500.00);
       
       //System.out.println(c1.getNumero());
       //System.out.println(c1.getSaldo());
       
       conta contas[]=new conta[3];
       
       contas[0]=new conta();
       contas[0].setNumero(1);
       contas[0].setSaldo((float)600.00);
       System.out.println(contas[0].getSaldo());
   }
}
