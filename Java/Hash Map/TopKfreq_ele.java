import java.util.*;
class TopKfreq_ele {

    void topK(int[] nums, int k) 
    {   
        HashMap<Integer,Integer> map = new HashMap<>();
        List<Integer> list[] = new List[nums.length+1];
        List<Integer> ans = new ArrayList<>();
        for(int i : nums)
            map.put(i, map.getOrDefault(i, 0)+1);
        for(Integer key : map.keySet())
        {
            if(list[map.get(key)]==null)
                list[map.get(key)]= new ArrayList<>();
            list[map.get(key)].add(key);
        }
        for(int i=list.length-1; i>=0 && ans.size()<k; i--)
        {
            if(list[i]!=null)
            {
                ans.addAll(list[i]);
            }
        }
        int j=0;
        int arr[] = new int[ans.size()];
        for(int i : ans)
        {
            arr[j]=i;
            j++;
        }
        for(int i : ans)
        {
            System.out.print(i+" ");
        }
        System.out.println();
    }
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the Size of the array : ");
        int n = in.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements in the array : ");
        for(int i = 0; i<n; i++)
        {
            arr[i]=in.nextInt();
        }
        System.out.print("Array : ");
        for(int i = 0; i<n; i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println("\nEnter K : ");
        int k = in.nextInt();
        TopKfreq_ele ob = new TopKfreq_ele();
        ob.topK(arr,k);
        
        in.close();
    }
}