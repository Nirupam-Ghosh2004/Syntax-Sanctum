/*
-------------------------------------------------------------------------------------------------------------------------------
Problem Statement : 
A group of explorers is searching for treasure in a grid-based map. 
They have a sequence of movement instructions (U for up, D for down and so on.) 
The explorers start at position (0,0). 
The goal is to determine their final position after executing all movements.

Input:
2
UUDDLRLR
UUUDD

Output:
0 0

0 1
-------------------------------------------------------------------------------------------------------------------------------
*/

import java.util.Scanner;
public class position {
    void coordinates(String str)
    {
        int x=0,y=0;
        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);
            if(ch=='U') y++;
            else if(ch=='D') y--;
            else if(ch=='R') x++;
            else if(ch=='L') x--;
        }
        System.out.println(x+" "+y);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        position ob = new position();
        System.out.println("Enter the number of movement inputs : ");
        int n = in.nextInt();
        String str[] = new String[n];
        System.out.println("Enter the movements in uppercase : ");
        for(int i=0; i<n; i++)
        {
            str[i]=in.next();
        }
        System.out.println("The final position of the inputs :  ");
        for(int i=0; i<n; i++)
        {
            ob.coordinates(str[i]);
        }
        in.close();
    }
}
