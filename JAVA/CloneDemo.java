class CloneDemo 
{
    public static void main(String[] args) 
    {
        try
        {
            Student obj1 = new Student("Amit", 87, 27);
            Student obj2 = (Student)obj1.clone();

            System.out.println("Name : "+obj1.Name);
            System.out.println("Marks : "+obj1.Marks);
            System.out.println("Age : "+obj1.Age);

            System.out.println("Name : "+obj2.Name);
            System.out.println("Marks : "+obj2.Marks);
            System.out.println("Age : "+obj2.Age);

            System.out.println(obj1.hashCode());
            System.out.println(obj2.hashCode());
        }
        catch(Exception obj)
        {}
    }
}
class Student implements Cloneable
{
    public String Name;
    public int Marks;
    public int Age;

    public Student(String str, int a, int b)
    {
        this.Name = str;
        this.Marks = a;
        this.Age = b;
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}
