public class I 
{
    public static void main(String[] args) 
    {
        Marvellous mobj = new Marvellous();

        mobj.CalculateArea();

    }
}

interface Demo
{
    public int CalculateArea();
    
}
interface Hello extends Demo
{
    public int CalculateCircumference();
}

class Marvellous implements Hello
{
    public int CalculateCircumference()
    {
        System.out.println("Inside Marvellous CalculateArea");
        return 100;
    }
}
