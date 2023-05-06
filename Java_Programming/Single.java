
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

public class Single {
    public static void main(String Arg[]) {
        // Base bobj = new Base();         // No casting       
        // Base bobj2 = new Derived();     // Up casting
        // Derived dobj = new Base()       // Down casting

        Derived dobj = new Derived();   // No casting

        dobj.fun();
        dobj.gun();

        System.out.println("A is "+dobj.A);
        System.out.println("B is "+dobj.B);
        System.out.println("X is "+dobj.X);
        System.out.println("Y is "+dobj.Y);
    }
    
}
