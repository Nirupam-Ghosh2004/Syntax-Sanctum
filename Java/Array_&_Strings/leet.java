import java.util.*;
public class leet {
    public void minOperations(int[] nums) {
        int a;
        ArrayList<Integer> arr = new ArrayList<>();

        for(int i =0 ; i<nums.length-1; i++)
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


        for(int i : nums)
        {
            System.out.print(i + " ");
        }
        System.out.println();


        for(int i=0 ; i<nums.length; i++)
        {
            int ctr = 0;
            int start = nums[i];
            int end = start + nums.length -1;
            for(int j = start; j<=end; j++)
            {
                int l = 0;
                int r = nums.length-1;
                while(l<=r)
                {
                    int mid = (l+r)/2;
                    if(nums[mid]==j)
                    {
                        ctr ++;
                        break;
                    }
                    else
                    if(j<nums[mid])
                    {
                        r=mid-1;
                    }
                    else 
                    {
                        l=mid+1;
                    }
                }
            }
            System.out.println(ctr);
            arr.add(nums.length-ctr);
        }
        int min = Collections.min(arr);
        System.out.println("Answer : "+min);
        
    }
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int arr[] = {1,-1,0,3,4};
        leet ob = new leet();
        ob.minOperations(arr);
        in.close();

    }
}
