class ThrowsDemo 
{
    public static void main(String[] args) 
    {
        Demo obj = new Demo();
        float Ret =0.0f;

        try
        {
            Ret = obj.Division(15,0);
        }
        
        catch(ArithmeticException aobj)
        {
            System.out.println("Exception Occured.");
        }
        System.out.println(Ret);
    }
}

class Demo
{
    public float Division(int No1, int No2) throws ArithmeticException
    {
        return No1/No2;
    }
}
