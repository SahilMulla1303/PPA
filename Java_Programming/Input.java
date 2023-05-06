import java.util.*;

class Input 
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter 1st element :");
        int No1 = sobj.nextInt();

        System.out.println("Enter 1st element :");
        int No2 = sobj.nextInt();

        int iAns = 0;
        iAns = No1 + No2;
        System.out.println("Addition is :"+iAns);

    }    
}


/*
Datatype        Method from Scanner class

boolean         nextBoolean();
byte            nextByte();
short           nextShort();
int             nextInt();
float           nextFloat();
double          nextDouble();
long            nextLong();
string          nextLine();
*/