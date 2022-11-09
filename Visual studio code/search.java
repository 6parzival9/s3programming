import java.util.Scanner;
public class search{
      public static void main(String[] args)
      { 
        System.out.println("Linear search");
        int a[]=new int[20];
          Scanner scanf=new Scanner (System.in);
          System.out.println("Array size: ");
          int n;
          n=scanf.nextInt();
          System.out.println("Elements : ");
          for(int i=0;i<n;i++)
          a[i]=scanf.nextInt();
     System.out.println("Enter the element to be searched: ");
     int key,flag=1;
     key= scanf.nextInt();
     for(int i=0;i<n;i++)
    { if(a[i]==key)
     {
        flag=i;
        break;
     }
    }
    if(flag!=1)
    System.out.println("Element found at"+flag);
    else
    System.out.println("Element not found");

      }



}