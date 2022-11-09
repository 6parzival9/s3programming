public class fun{

public static void main(String argsp[]) throws InterruptedException{
  
   int x =3;
  for (int i=0;i>-7;i++)
  { 
    if(i==x){
     System.out.print("\b \r");
    x=x+3;
    }
     System.out.print(".");
     Thread.sleep(650);
     
    }
    System.out.print("\r \b");
  }



}