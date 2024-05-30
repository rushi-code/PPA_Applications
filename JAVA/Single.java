class Single 
{
    public static void main(String[] args) 
    {
        Derived dobj = new Derived();   //No Casting
        dobj.Fun();
        dobj.Gun();

        System.out.println(dobj.A);
        System.out.println(dobj.B);
        System.out.println(dobj.C);
        System.out.println(dobj.D);
    }
}

class Base
{
    public int A;
    public int B;

    public Base()
    {
        System.out.println("Inside Base Constructor");
        this.A = 11;
        this.B = 21;
    }

    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base
{
    public int C;
    public int D;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
        this.C = 51;
        this.D = 101;
    }

    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}