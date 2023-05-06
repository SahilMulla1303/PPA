class Base
{
    public int A;

    public Base()
    {
        System.out.println("Inside Base defult constructor");
        this.A = 11;
    }
    public Base(int i)
    {
        System.out.println("Inside Base parametrize constructor");
        this.A = i;
    }
    public void fun()
    {
        System.out.println("Inside Base fun");
    }

}

class Derived extends Base
{
    public int A;

    public Derived()
    {
        super(11);                                            //3
        System.out.println("Inside Derived constructor");
        this.A = 51;
    }
    public void gun()
    {
        System.out.println("Inside Derived gun");
        System.out.println("Value of A "+super.A);              //1
        super.fun();                                            //2
    }

}

public class SuperDemo {
    public static void main(String arg[])
    {
        Derived dobj = new Derived();
        dobj.gun();
    }
}

// 1. Access data of parante from chiled
// 2. Call method of parent from chiled
// 3. Call constructor of parent from chiled