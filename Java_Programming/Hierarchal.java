class Base
{
    public int A;
    public int B;

    public Base()
    {
        System.out.println("Inside Base constructor");
        this.A = 11;
        this.B = 21;
    }
    public void fun()
    {
        System.out.println("Inside Base fun");
    }

}

class Derived extends Base
{
    public int X;
    public int Y;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.X = 51;
        this.Y = 101;
    }
    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}

class DerivedX extends Base
{
    public int Z;

    public DerivedX()
    {
        System.out.println("Inside DerivedX constructor");
        this.Z = 111;
    }
}

public class Hierarchal {
    public static void main(String Arg[]) {
        DerivedX dobj = new DerivedX();   // No casting
        Derived dobj1 = new Derived();   // No casting

        dobj.fun();
        dobj1.gun();

        System.out.println("A is "+dobj.A);
        System.out.println("B is "+dobj.B);
        System.out.println("X is "+dobj1.X);
        System.out.println("Y is "+dobj1.Y);
        System.out.println("Z is "+dobj.Z);
    }
    
}