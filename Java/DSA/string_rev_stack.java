import java.util.*;
class string_rev_stack {
    int top;
    char arr[];
    int size;
    string_rev_stack(int size)
    {
        this.size = size;
        arr = new char[size];
        top=-1;
    }
    void push(char ele)
    {
        if(top<size-1)
        {
            top++;
            arr[top]=ele;
        }
    }
    char pop()
    {
        if(top>-1)
        {
            return(arr[top--]);
        }
        return'\0';
    }
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        String str;
        String rev_str="";
        System.out.println("Enter a String : ");
        str = in.nextLine();
        int len = str.length();
        string_rev_stack ob = new string_rev_stack(len);
        for(int i=0; i<len; i++)
        {
            ob.push(str.charAt(i));
        }
        for(int i=0; i<len; i++)
        {
            rev_str = rev_str + ob.pop();
        }
        System.out.println("Reverse : "+rev_str);
        in.close();
    }
    
}
