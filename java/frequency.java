import java.util.Scanner;

class Main {
    public static void main(String[] args) {

        System.out.println("Enter the array size");
        Scanner scanf = new Scanner(System.in);
        int n = scanf.nextInt();
        int[] a = new int[n];
        System.out.println("Enter the array ");
        for (int i = 0; i < n; i++)
            a[i] = scanf.nextInt();
        // sort the array
        int temp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        // array sorted
        int count = 1, count2, i;
        for (i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                count++;
                continue;
            }
            System.out.println("Frequency of " + a[i] + " is " + count);
            count2 = count;
            count = 1;
        }
        System.out.println("Frequency of " + a[i] + "is " + count);

    }
}