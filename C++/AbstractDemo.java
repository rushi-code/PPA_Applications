class AbstractDemo 
{
    public static void main(String[] args) 
    {
        //RBI robj = new RBI(); 
        //SBI sobj = new SBI();


        RBI robj1 = new SBI();  //Upcasting
        // RBI robj2 = new BOM();  //Upcasting

        // robj1.DisplayRules();
        // robj2.DisplayRules();
        
        robj1.DisplayRules();

        float fRet = 0.0f;
        fRet = robj1.CalculateROI();
        System.out.println("ROI of SBI is "+fRet);
    }
}
abstract class RBI
{
    public abstract float CalculateROI();
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

    public void DisplayRules()
    {
        System.out.println("You have to submit Aadhar Card and PAN Card");
        System.out.println("Minimum balance is 15,000");
    }
}