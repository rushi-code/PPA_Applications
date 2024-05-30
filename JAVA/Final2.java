class Final2
{
    public static void main(String[] args) 
    {
        Base bobj = new Derived();
        bobj.Fun();
        bobj.Gun();
    }   
}

class Base
{
    public void Fun()
    {
        System.out.println("Base Fun");
    }

    final public void Gun()
    {
        System.out.println("Base Gun");
    }
}

class Derived extends Base
{
    public void Fun()
    {
        System.out.println("Derived Fun");
    }
    
    // public void Gun()
    // {
    //     System.out.println("Derived Gun");
    // }
}