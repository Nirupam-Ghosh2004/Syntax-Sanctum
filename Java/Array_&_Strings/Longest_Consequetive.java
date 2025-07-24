import java.util.*;
class Longest_Consequetive {
    public int longestConsecutive(int[] nums) {
        if(nums.length==0)
        {
            return 0;
        }
        int a;
        Set<Integer> st = new LinkedHashSet<>();
        for(int i=0; i<nums.length; i++)
        {
            System.out.print(nums[i]+" ");
        }
        System.out.println();
        for(int i=0; i<nums.length; i++)
        {
            for(int j=0; j<nums.length-i-1; j++)
            {
                if(nums[j]>nums[j+1])
                {
                    a=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=a;
                }
            }
        }
        for(int i=0; i<nums.length; i++)
        {
            System.out.print(nums[i]+" ");
        }
        System.out.println();
        for(int i : nums)
        {
            st.add(i);
        }
        int num[] = new int[st.size()]; 
        int j=0;
        for(int i : st)
        {
            num[j++]=i;
        }
        for(int i=0; i<num.length; i++)
        {
            System.out.print(num[i]+" ");
        }
        System.out.println();
        int x=0;
        int res=0;
        for(int i=0; i<num.length-1; i++)
        {
            if(num[i]+1==num[i+1])
            {
                x++;
            }
            else
            {
                System.out.println(x);
                if(x>=res)
                {
                    res=x;
                    x=0;
                }
            }
        }
        System.out.println(x);
        if(x>0 && x>res)
        {
            res=x;
        }
        return res+1;
    }
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int arr[]={7,-9,3,-6,3,5,3,6,-2,-5,8,6,-4,-6,-4,-4,5,-9,2,7,0,0};
        Longest_Consequetive ob = new Longest_Consequetive();
        int ans = ob.longestConsecutive(arr);
        System.out.println(ans);
        in.close();
    }
}
