import java.util.Scanner;

public class ExceptionDemo 
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int No1 = 0, No2 = 0; 
        float Ans = 0;

        System.out.println("Enter 1st No :");
        No1 = sobj.nextInt();

        System.out.println("Enter 2nd No :");
        No2 = sobj.nextInt();

        Ans = No1/No2;

        System.out.println("Division is :"+Ans);
    }    
}
