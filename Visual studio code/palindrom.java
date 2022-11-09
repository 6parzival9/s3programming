import java.util.*;
public class palindrom {
    public static void main (String[] args) throws InterruptedException{
    System.out.println("Enter the number to check whether a number is palindrom");
    int num;
    Scanner scanf=new Scanner(System.in);
    num = scanf.nextInt();
    int sum=0, dup=num;
    for(int i=num;i >0;i/=10)
    {
        sum=sum*10+i%10;
    }
    System.out.println("Please wait until we check whether the number is palindrom or not");
    System.out.print("\r");
      for(int i=1;i<4;i++){
        Thread.sleep(650);
        System.out.print(".");
        Thread.sleep(650);
      

      }
      
      System.out.print("\r");  

              if(sum == dup)
              System.out.println("The number is palindrome   "+sum);
          else
          System.out.println("The number isn't palindrome  "+sum);
          
    }







}
