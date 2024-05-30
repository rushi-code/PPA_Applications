import java.util.*;

class UserDefined
{
    public static void main(String[] args) 
    {
        int Age = 0;
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter Your Age");
            Age = sobj.nextInt();

            if(Age<18)
            {
               throw new AgeInvalid("Age is less than 18");
            }
        }

        catch(AgeInvalid obj)
        {
            System.out.println(obj);
        }

        finally
        {
            sobj.close();
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

