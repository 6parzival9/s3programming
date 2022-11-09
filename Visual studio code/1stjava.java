import java.util.Scanner;

class first
{
    String name;
  int age;

}
class data{
    public static void main(String args[])
{System.out.println("Enter the data!!\nname: ");
Scanner scanf=new Scanner(System.in);
first one  = new first();
one.name=scanf.nextLine();
System.out.println("age: ");
one.age=scanf.nextInt();
}

}