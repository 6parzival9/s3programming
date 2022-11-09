import java.util.Scanner;
public class sort {
    public static void main(String[] args){
        System.out.println("Sort");
        int temp;
        int a[]=new int[20];
          Scanner scanf=new Scanner (System.in);
          System.out.println("Array size: ");
          int n;
          n=scanf.nextInt();
          
          System.out.println("Elements : ");
          
          for(int i=0;i<n;i++)
           
              a[i]=scanf.nextInt();
           
          for(int i=0; i<n;i++)
          for(int j=0;j<n-1;j++)
          {
                 if(a[j]>a[j+1])
                { temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
                         }
                        }
         for(int i=0;i<n;i++)
         System.out.println("Sorted array: "+a[i]);

    }
    

}