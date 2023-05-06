class Demo
{
    public int No1;
    final public int No2;
    final public int No3;

    public Demo(int i, int j, int k)
    {
        No1 = i;
        No2 = j;
        No3 = k;
    }
}
public class Final1 {
    public static void main(String arg[])
    {
        Demo obj1 = new Demo(11,21,51);
        System.out.println(obj1.No1);
        System.out.println(obj1.No2);
        System.out.println(obj1.No3);
    }    
}
