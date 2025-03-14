import java.util.*;

public class nthSmallest {
    void print(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        nthSmallest ob = new nthSmallest();
        Scanner in = new Scanner(System.in);
        int n;
        System.out.println("Enter the size of the array : ");
        n = in.nextInt();
        int arr[] = new int[n];
        int arr1[] = new int[n];
        System.out.println("Enter the elements in the array : ");
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        System.out.println("The array : ");
        ob.print(arr, n);
        System.out.println("Enter the number : ");
        int x = in.nextInt();
        int min = arr[0], ctr=0;
        while (ctr!=x) {
            for(int i=0; i<n; i++)
            {
                
            }
            
        }
        in.close();
    }
}
