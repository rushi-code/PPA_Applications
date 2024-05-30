class Hierarchical
{
    public static void main(String[] args) 
    {
        DerivedX dobj = new DerivedX();   //No Casting
        dobj.Fun();
        dobj.Sun();

        System.out.println(dobj.A);
        System.out.println(dobj.B);
        System.out.println(dobj.X);
        System.out.println(dobj.Y);
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

class DerivedX extends Base
{
    public int X;
    public int Y;

    public DerivedX()
    {
        System.out.println("Inside DerivedX Constructor");
        this.X = 511;
        this.Y = 1001;
    }

    public void Sun()
    {
        System.out.println("Inside DerivedX Sun");
    }
}