import java.util.*;
class concat
{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String s1 = in.nextLine();
        String s2 = in.nextLine();
        String s3 = s1+s2;
        String str = "";
        int len=s3.length();
        for(int i=len-1;i>=0;i--)
        {
            str = str + s3.charAt(i);
        }
        System.out.println(str);
        in.close();
    }
}