class Overriding
{
    public static void main(String[] args) 
    {
        Base bobj = new Derived();
        bobj.Fun();
        bobj.Gun();
        bobj.Sun();
        //bobj.Run();   //Error
    }
}

class Base
{
    public void Fun()
    {
        System.out.println("Base Fun");
    }
    public void Gun()
    {
        System.out.println("Base Gun");
    }
    public void Sun()
    {
        System.out.println("Base Sun");
    }
}

class Derived extends Base
{
    public void Fun()
    {
        System.out.println("Derived Fun");
    }
    public void Gun()
    {
        System.out.println("Derived Gun");
    }
    public void Run()
    {
        System.out.println("Derived Gun");
    }
}