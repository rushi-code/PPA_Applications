import Rushi.Rushi1;
import Rushi.Rushi2;

class RushiDemo
{
    public static void main(String[] args) 
    {
        Rushi1 robj1 = new Rushi1();
        Rushi2 robj2 = new Rushi2();

        int iRet = robj1.Addition(100, 10);
        System.out.println(iRet);

        iRet = robj1.Subtraction(100, 10);
        System.out.println(iRet);

        iRet = robj2.Division(100, 10);
        System.out.println(iRet);

        iRet = robj2.Multiplication(100, 10);
        System.out.println(iRet);
    }
}