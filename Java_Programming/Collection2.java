import java.util.*;

class Collection2
{
    public static void main(String arg[]) 
    {
        ArrayList <Integer> lobj= new ArrayList<Integer>();
        
        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.println("Elements are :"+lobj);

        Iterator iobj = lobj.iterator();
        while(iobj.hasNext())
        {
            System.out.print(iobj.next()+"\n");
        }
    }
}



// Collection Documentation: https://docs.oracle.com/javase/tutorial/collections/intro/index.html