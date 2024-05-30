class SuperDemo
{
    public static void main(String[] args) 
    {
        Derived dobj = new Derived();   //No Casting
        dobj.Gun();
    }
}

class Base
{
    public int A;

    public Base()
    {
        System.out.println("Inside Base Default Constructor");
        this.A = 11;
    }

    public Base(int i)
    {
        System.out.println("Inside Base Parametrised Constructor");
        this.A = i;
    }

    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base
{
    public int A;

    public Derived()
    {
        super(11);
        System.out.println("Inside Derived Constructor");
        this.A = 51;
    }

    public void Fun()
    {
        System.out.println("Inside Derived Fun");
    }

    public void Gun()
    {
        System.out.println("Inside Derived Gun");
        System.out.println("Value of A : "+A);
        System.out.println("Value of A : "+this.A);
        System.out.println("Value of A using super : "+super.A);

        Fun();
        super.Fun();
    }
}

