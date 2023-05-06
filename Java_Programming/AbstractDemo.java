abstract class RBI
{
    abstract float CalculateROI();
    // virtual float CalculateROI() = 0; //C++ Syntax

    public void DisplayRules()
    {
        System.out.println("You have to submit Aadhar card and PAN card");
        System.out.println("Minimum balance is 10,000/-");
    }
}

class SBI extends RBI
{
    public float CalculateROI()
    {
        return 5.7f;
    }
}

class BOM extends RBI
{
    public float CalculateROI()
    {
        return 7.7f;
    }
}

public class AbstractDemo 
{
    public static void main(String Arg[])
    {
        RBI robj1 = new SBI();  // upcasting Allowed
        RBI robj2 = new BOM();  // upcasting Allowed

        SBI sobj = new SBI();
        BOM bobj = new BOM();

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fRet = 0.0f;

        fRet = sobj.CalculateROI();
        System.out.println("ROI of SBI :"+fRet);

        fRet = bobj.CalculateROI();
        System.out.println("ROI of BOI :"+fRet);
    }    
}
