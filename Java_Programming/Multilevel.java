
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

class DerivedX extends Derived
{
    public int Z;

    public DerivedX()
    {
        System.out.println("Inside DerivedX constructor");
        this.Z = 111;
    }
}

public class Multilevel {
    public static void main(String Arg[]) {
        DerivedX dobj = new DerivedX();   // No casting

        dobj.fun();
        dobj.gun();

        System.out.println("A is "+dobj.A);
        System.out.println("B is "+dobj.B);
        System.out.println("X is "+dobj.X);
        System.out.println("Y is "+dobj.Y);
        System.out.println("Z is "+dobj.Z);
    }
    
}