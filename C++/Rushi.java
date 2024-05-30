class Rushi
{
    public static void main(String[] args) 
    {
        Derived obj = new Derived();
        obj.Fun();
        obj.Gun();
        obj.Run();
        obj.Sun();
    }
}

class Base 
{
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Base Gun");
    }

    public void Run()
    {
        System.out.println("Inside Base Run");
    }

    

    
}

class Derived extends Base
{
    public void Fun()
    {
        System.out.println("Inside Derived Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }

    public void Run()
    {
        System.out.println("Inside Derived Run");
    }

    public void Sun()
    {
        System.out.println("Inside Base Sun");
    }
}