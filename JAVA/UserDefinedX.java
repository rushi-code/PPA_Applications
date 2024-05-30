import java.util.*;

class UserDefinedX
{
    public static void main(String[] args) 
    {
        int Age = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Age");
        
        Age = sobj.nextInt();
        try
        {
        if(Age<18)
        {
            throw new AgeInvalid("Age is less than 18");
        }
        }

        catch (AgeInvalid obj)
        {
            System.out.println(obj);
        }

    }
}

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}

