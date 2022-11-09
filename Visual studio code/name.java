import javax.swing.event.TreeExpansionListener;

public class name {
  
    
    public static void main (String[] args) throws InterruptedException
    {
        char multi[][] = new char[4][4];
        for(int i=0; i<4;i++)
        {  for(int j=0; j<4; j++)
           { 
            char x='*';
       
            multi [i][j] = x;
      if (i==j || i==0 && j==3 ||  i==1 && j==2 || i ==2 && j==1 || i==3 && j==0)
{
    x=' ';
    multi [i][j] = x;
}
           }
        }   
       
      for(int i=0; i<4;i++)
       {  for(int j=0; j<4; j++)
        
        {   
            Thread.sleep(500);
            System.out.print(multi[i][j]+"   ");
        
      
       }
        System.out.println("\n");

    }
}
}