package Java.Exception_Handling;

import java.util.Scanner;

public class arithmatic_negative_array {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a : ");
        int a = in.nextInt();
        System.out.println("Enter b : ");
        int b = in.nextInt();
        int c;
        try{
            c=a/b;
            System.out.println("Output : "+c);
        }
        catch(Exception p){
            System.out.println(p);
        }
        int arr[]={1,2,3,4,5};
        System.out.println("Enter the index : ");
        int x = in.nextInt();
        in.close();
        if(x<0)
        {
            throw new ArrayIndexOutOfBoundsException("Negative index : "+x);
        }
        System.out.println(arr[x]);
        in.close();
    }
}
