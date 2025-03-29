import java.util.HashSet;
import java.util.Iterator;
//import java.util.Iterator;
public class hashset1 {
    public static void main(String[] args) {
        //Decleration
        HashSet<Integer> hset = new HashSet<>();

        //Adding elements to the hash set
        hset.add(1);
        hset.add(2);
        hset.add(3);
        hset.add(4);
        hset.add(1);

        //Remove elements from hash set
        hset.remove(4);

        //Check whether it contains a particular element
        if(hset.contains(3))
        {
            System.out.println("Element 3 is present");
        }
        if(!hset.contains(4))
        {
            System.out.println("Element 4 is not present");
        }

        // size of hash set
        System.out.println("THe size of hash set : "+hset.size());

        //Print all the elements in hash set
        System.out.println(hset);
        //Iterator
        Iterator it = hset.iterator();
        while(it.hasNext())
        {
            System.out.print(it.next()+" ");
        }
    }
}
