class AbstractDemo 
{
    public static void main(String[] args) 
    {
        //RBI robj = new RBI();
         
        SBI sobj = new SBI();
        BOM bobj = new BOM();

        RBI robj1 = new SBI();  //Upcasting
        RBI robj2 = new BOM();  //Upcasting

        robj1.DisplayRules();
        robj2.DisplayRules();
        
        sobj.DisplayRules();
        bobj.DisplayRules();

        float fRet = 0.0f;

        fRet = sobj.CalculateROI();
        System.out.println("ROI of SBI is "+fRet);

        fRet = bobj.CalculateROI();
        System.out.println("ROI of BOM is "+fRet);
    }
}

abstract class RBI
{
    public abstract float CalculateROI();
    //virtual float CalculateROI() = 0;

    public void DisplayRules()
    {
        System.out.println("You have to submit Aadhar Card and PAN Card");
        System.out.println("Minimum balance is 10,000");
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