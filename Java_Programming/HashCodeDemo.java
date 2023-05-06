class Marvellous    // class Marvellous extends Object
{
    public int No1;
    public int No2;
}

public class HashCodeDemo // class HashCodeDemo extends Object
{
    public static void main(String Arg[])
    {
        Marvellous mobj = new Marvellous();
        System.out.println("HashCode of mobj is :"+mobj.hashCode());
    }    
}
