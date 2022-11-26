import java.util.*;

public class stack {
    final int max = 5;
    int[] stackarray = new int[5];
    int top = -1;

    void push() {
        if (top == max - 1)
            System.out.println("Stack-------------------------overflow");
        else {
            Scanner scanf = new Scanner(System.in);
            System.out.println(
                    "\t\t\t-------------------------\n\t\tEnter the element: \t\t\t-------------------------\n");
            int item = scanf.nextInt();
            top++;
            stackarray[top] = item;
        }
    }

    void pop() {
        if (top == -1)
            System.out.println("\tStack -------------------------underflow");
        else
            System.out.println("\n \t\t\t-------------------------\nThe item to be deleted is: " + stackarray[top]);
        top--;
    }

    void traverse() {
        for (int i = 0; i < 5; i++)
            System.out.println("\t" + stackarray[i]);
    }

    public static void main(String[] args) {
        stack obj = new stack();
        int ch;
        do {
            System.out.println(
                    "\t\t\t-------------------\n\t\t\t\tMenu\n\t\t1)Push \n\t\t2)Pop \n\t\t3)travese\n \t\t\t-------------------------\nPlease enter your choice:-)");

            Scanner scanf = new Scanner(System.in);
            ch = scanf.nextInt();
            switch (ch) {
                case 1:
                    obj.push();
                    break;
                case 2:
                    obj.pop();
                    break;
                case 3:
                    obj.traverse();
                    break;
                default:
                    System.out.println("\tPlease check the your input:-)\t\t\t-------------------------\n");
            }
        } while (ch != 0);

    }
}
