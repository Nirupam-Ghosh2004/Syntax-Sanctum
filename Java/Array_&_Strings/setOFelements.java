import java.util.*;
public class setOFelements {
    void print(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        setOFelements ob = new setOFelements();
        System.out.print("Enter the size of the array : ");
        int n = in.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter elements in the array : ");
        for(int i=0; i<n; i++)
        {
            arr[i]=in.nextInt();
        }
        ob.print(arr, n);
        System.out.print("Enter a number : ");
        int x = in.nextInt();
        int c=0;
        int ctr=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<x)
            {
                c++;
            }
            else
            if(c>0)
            {
                ctr++;
                c=0;
            }
        }
        if(c>0)
        ctr++;
        System.out.println("Number of sets whose elements are less than "+x+" = "+ctr);
        in.close();
    }
}
