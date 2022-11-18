import java.util.*;

import javax.lang.model.util.ElementScanner14;

import java.lang.*;

public class oddoreven {
    void printout(int random) {
        System.out.println(random + "you are out ");

    }

    int player(int random, int sum) {
        oddoreven ob = new oddoreven();
        Scanner scan = new Scanner(System.in);

        int[] a = new int[100];
        for (int i = 0;; i++) {
            a[i] = scan.nextInt();
            random = (int) (Math.random() * 10);
            if (a[i] == random) {
                ob.printout(random);
                break;
            } else {

            }
            sum = sum + a[i];
            System.out.println("Player :" + a[i] + "\nComputer " + random + "\nPlayer has:" + sum);
        }
        return sum;
    }

    int computer(int random, int sum) {
        oddoreven ob = new oddoreven();
        Scanner scan = new Scanner(System.in);

        int[] a = new int[100];

        for (int i = 0;; i++) {
            random = (int) (Math.random() * 10);
            a[i] = scan.nextInt();
            if (a[i] == random) {
                ob.printout(random);
                break;
            } else {

            }
            sum = sum + a[i];
            System.out.println("computer :" + a[i] + "\nplayer " + random + "\ncomputer has:" + sum);
        }
        return sum;
    }

    public static void main(String[] args) {
        int random = 0, sum = 0;
        oddoreven ob1 = new oddoreven();

        System.out.println("Player vs Computer:");
        int n1;
        n1 = ob1.player(random, sum);
        int n2;
        n2 = ob1.computer(random, sum);
        if (n1 < n2)
            System.out.println("Computer won by " + n2 + "!!!!");
        else if (n1 > n2)
            System.out.println("player won" + n1 + "!!!!");
        else
            System.out.println("I guess its a tieby" + n1);

    }

}
