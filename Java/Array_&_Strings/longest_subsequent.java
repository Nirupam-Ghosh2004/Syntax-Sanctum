import java.util.*;

class longest_subsequent {
    void path(int arr[], int l,int h)
    {
        for(int i=l-1; i<=h-1; i++)
        {
            arr[i]=1;
        }
    }
    void print(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        longest_subsequent ob = new longest_subsequent();
        System.out.println("Enter the size of the array : ");
        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = 0;
        }
        ob.print(arr, n);
        System.out.println("Enter how many pair you want to enter : ");
        int v = in.nextInt();
        for(int i=0; i<v; i++)
        {
            System.out.println("Enter the pair with a space : ");
            int arr1[]= new int[2];
            arr1[0]=in.nextInt();
            arr1[1]=in.nextInt();
            ob.path(arr,arr1[0],arr1[1]);
        }
        ob.print(arr, n);
        int c=0,p=0;
        int arr2[]=new int[10];
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
            {
                c++;
            }
            else
            {
                arr2[p]=c;
                c=0;
                p++;
            }
        }
        System.out.println("Number of sets whose elements are less than ");
        in.close();
    }
}