import java.util.*;
public class Mirror_pair {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the size of the array : ");
        int n = in.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements in the array : ");
        for (int i = 0; i < n; i++)
            arr[i] = in.nextInt();
        System.out.print("The array : ");
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
        System.out.println();

        int curr_ctr = 1, main_ctr = 0;
        int prev_sum = arr[0] + arr[n - 1];
        int curr_sum;
        if (n < 2) {
            System.out.println(0);
        } else {
            for (int i = 1; i < (n / 2); i++) {
                curr_sum = arr[i] + arr[n - i - 1];
                if (curr_sum == prev_sum)
                    curr_ctr++;
                else {
                    prev_sum = curr_sum;
                    curr_ctr = 1;
                }
                main_ctr = Math.max(main_ctr, curr_ctr);
            }
            System.out.println(main_ctr);
        }

        in.close();
    }
}
